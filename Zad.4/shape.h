#pragma once
#include <iostream>
using namespace std;
class shape {
private:

public:
	int height;
	int width;
	string color;
	char znak;
	int** tab;
	int x;
	int y;
	void drawShape();
	void fill();
	shape(int h, string c, char z);
	~shape();
	virtual void fill() = 0;
};