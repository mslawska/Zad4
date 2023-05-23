#include <iostream>
#include "tree.h"
using namespace std;
void Tree::drawTree() {

	for (int j = 0; j < height; j++) {
		for (int i = 0; i < 2 * height - 1; i++) {
			if (tab[j][i] == 0) {
				cout << " ";
			}
			else
			{
				cout << znak;
			}
		}
		cout << "\n";
	}
}
Tree::Tree(int h, string c, char z) {
	height = h;
	color = c;
	znak = z;
	width = 2 * h - 1;
	tab = new int* [height];
	for (int j = 0; j < height; j++) {
		tab[j] = new int[width];
		for (int i = 0; i < width; i++)
			tab[j][i] = 0;
	}
	for (int j = 0; j < height; j++)
		for (int i = height - j - 1; i < height + j; i++)
			tab[j][i] = 1;
}
Tree::~Tree() {
	int j;
	for (j = 0; j < height; j++)
		delete tab[j];
	delete tab;
}