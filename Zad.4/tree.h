#pragma once
#include <iostream>
using namespace std;
class Tree {
private:

public:
	int height;
	int width;
	string color;
	char znak;
	int** tab;
	int x;
	int y;
	void drawTree();
	Tree(int h, string c, char z);
	~Tree();
};