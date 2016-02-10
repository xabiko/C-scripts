#include <stdio.h>

int main() {
	int x,y;
	printf("Enter x & y values, respectively \n");
	scanf("%d%d", &x, &y);
	(x^=y),(y^=x),(x^=y);
	printf("\n x=%d,y=%d \n", x, y);
	return 0;
}
