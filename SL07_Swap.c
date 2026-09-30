#include <stdio.h>

void swap(int x, int y){
	int tmp;
	printf("Before swap: %d %d", x, y);
	tmp=x; x=y; y=tmp;
	printf("\nAfter swap: %d %d", x, y);
}

void swapPointer(int *x, int *y){
	int tmp;
	printf("\n\nBefore swap: %d %d", *x, *y);
	tmp=*x; *x=*y; *y=tmp;
	printf("\nAfter swap: %d %d", *x, *y);
}


int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	swap(a, b);
	printf("\nAfter swap main: %d %d", a, b);
	swapPointer(&a,&b);
	printf("\nAfter swap2 main : %d %d", a, b);	
	return 0;
}
