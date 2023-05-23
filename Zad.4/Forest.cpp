using namespace std;
#include "Forest.h"
#include <vector>

Forest::Forest(int w, int h) {
	W = w;
	H = h;

	tab = new int* [H];
	for (int j = 0; j < H; j++) {
		tab[j] = new int[W];
		for (int i = 0; i < W; i++)
			tab[j][i] = 0;
	}
}

Forest::~Forest() {
	int j;
	for (j = 0; j < H; j++)
		delete tab[j];
	delete tab;
	for (auto t : wektor) {
		delete t;
	}
}

void Forest::AddTree(int h, string c, char z, int y, int x) {
	int i, j;
	Tree* drzewo1 = new Tree(h, c, z);
	drzewo1->x = x;
	drzewo1->y = y;
	wektor.push_back(drzewo1);
	for (j = 0; j < drzewo1->height; j++) {
		for (i = 0; j < drzewo1->width; i++) {
			if (drzewo1->tab[j][i]) {
				tab[j + y][i + x] = drzewo1->tab[j][i] * wektor.size();
			}
		}
	}
}
void Forest::printLas() {
	int i, j;
	for (j = 0; j < H; j++) {
		for (i = 0; i < W; i++) {
			int k = tab[j][i];
			if (k) {
				/*cout << wektor[k - 1]->color;*/
				cout << wektor[k - 1]->znak;
			}
		}
	}
}