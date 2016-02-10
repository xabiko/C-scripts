#include <stdio.h>

int main() {
	int x = 5, y = 10 ;
	printf("\n x=%d,y=%d \n", x, y);	
	(x^=y),(y^=x),(x^=y);
	printf("\n x=%d,y=%d \n", x, y);
	return 0;
}
