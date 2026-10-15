#include <stdio.h>

int main(){
	int n = 5;
	int *pI = &n;
//	int *pI;
//	pI = &n;
	
	printf("Gia tri cua n = %d", n);
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi cua n = %x", &n);
	printf("\nDia chi cua con tro pI tro den = %x", pI);
	printf("\nDia chi cua ban than con tro pI = %x", &pI);
	
	*pI = 10;
	printf("\n\nGia tri cua n = %d", n);
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi cua n = %x", &n);
	printf("\nDia chi cua con tro pI tro den = %x", pI);
	printf("\nDia chi cua ban than con tro pI = %x", &pI);
	
	int m = 7;
	pI = &m;
	printf("\n\nGia tri cua n = %d", n);
	printf("\n\nGia tri cua m = %d", m);
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi cua n = %x", &n);
	printf("\nDia chi cua m = %x", &m);
	printf("\nDia chi cua con tro pI tro den = %x", pI);
	printf("\nDia chi cua ban than con tro pI = %x", &pI);
	
	printf("\nTong: m + n + *pI = %d", m +  n + *pI);	// 24
	return 0;
}




