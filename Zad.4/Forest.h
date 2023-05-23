#pragma once
#include <iostream>
#include "tree.h"
#include <vector>
class Forest {
private:
    int H, W;
    vector <Tree*>wektor;
    int** tab;
public:
    void AddTree(int h, string c, char z, int y, int x);
    void printLas();
    Forest(int h, int w);
    ~Forest();
};