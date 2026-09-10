#include <stdio.h>

int main(){
	//Declare varialbes
	char vC;
	int n;
	float vF;
	double vD;
	
	//Assign values to variables
	vC = 'F';
	n = 10;
	vF = 6.5F;
	vD = 9.8;
	
	//Display to the screen
	printf("Character: %c", vC);
	printf("\nNumber: %d", n);
	printf("\nFloat: %f", vF);
	printf("\nFloat: %.1f", vF);
	printf("\nDboule: %lf", vD);
	printf("\nDboule: %.2lf", vD);
	printf("\n\n");
	printf("Character: %c \t Number: %d \nFloat: %.2f \t Double: %.2lf", vC, n, vF, vD);
	
	return 0;
}
