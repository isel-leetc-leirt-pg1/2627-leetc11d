#include <stdio.h>

int main() {
	int i1 = 5, i2 = 2;
	
	//double i2d = i2;
	double d1 = i1 / (double) i2;
	
	printf("%d/%d = %lf\n", i1, i2, d1);
	return 0;
}
