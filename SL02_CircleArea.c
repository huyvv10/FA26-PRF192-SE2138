#include <stdio.h>
#define PI 3.14159

int main(){
	const float pi = 3.14159;
	float r;
	printf("Input radius: "); scanf("%f", &r);
	r = ( r<=0 ? 1 : r);
	
	printf("Circle perimeter: %.2f", 2*pi*r);
	printf("\nCircle area: %.2f", PI*r*r);
	return 0;
}
