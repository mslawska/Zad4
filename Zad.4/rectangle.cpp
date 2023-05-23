#include "rectangle.h"
void shape::fill() {
	int i, j;
	for (j = 0; j < height; j++) {
		for (i = 0; i < height; i++) {
			tab[j][i] = 1;
		}
	}
}