#include <stdio.h>

int main(){
	int a, b;
	
	scanf("%d%d", &a, &b);
	printf("Sum of: %d + %d = %d", a, b, a+b);
	printf("\nSubstract of: %d - %d = %d", a, b, a-b);
	printf("\nProduct of: %d * %d = %d", a, b, a*b);
	printf("\nQuotien of: %d / %d = %.2f", a, b, (float)a/b);
	return 0;
}


