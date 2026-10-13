#include <stdio.h>
#define MAX 10
void displayMainDiagonal(int a[][MAX], int r, int c);
void display2DArray(int a[][MAX], int r, int c);
void intput2DArray(int a[][MAX], int r, int c);
void calTotalByColumns(int a[][MAX], int r, int c); 
void calTotalByRows(int a[][MAX], int r, int c);
void displaySubDiagonal(int a[][MAX], int r, int c);
void squarePrimeInMainDiagonal(int a[][MAX], int r, int c);

int main(){
	int a[MAX][MAX];
	int r, c;
	printf("Input number of rows and columns: ");
	scanf("%d%d", &r, &c);
	intput2DArray(a, r, c);
	display2DArray(a, r, c);
	printf("\n--Main diagonal--\n");
	displayMainDiagonal(a, r, c);
	printf("\n--Square Main diagonal--\n");
	squarePrimeInMainDiagonal(a, r, c);
	printf("\n--Total of each row--\n");
	calTotalByRows(a, r, c);
	printf("\n--Total of each column--\n");
	calTotalByColumns(a, r, c);
	printf("\n--Subdiagonal--\n");
	displaySubDiagonal(a, r, c);
	
	return 0;
}
void displaySubDiagonal(int a[][MAX], int r, int c){
	int i, j;
	for (i=0; i<r; i++)
		printf("%d ", a[i][r-1-i]);
}

//Calculate the total of each row
void calTotalByRows(int a[][MAX], int r, int c){
	int i, j, S=0;
	for (i=0; i<r; i++){
		S=0;
		for (j=0; j<c; j++)
			S+= a[i][j];
		printf("%d ", S);	
	}
}

//Calculate the total of each column
void calTotalByColumns(int a[][MAX], int r, int c){
	int i, j, S=0;
	for (i=0; i<c; i++){
		S=0;
		for (j=0; j<r; j++)
			S+= a[j][i];
		printf("%d ", S);	
	}	
}

int isPrime(int n){
	int i;
	if (n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;
}
void squarePrimeInMainDiagonal(int a[][MAX], int r, int c){
	int i, minD;
	minD = r > c ? c : r;
	for (i=0; i<minD; i++)
		if (isPrime(a[i][i])==1)
			printf("%d ", a[i][i]*a[i][i]);
		else		
			printf("%d ", a[i][i]);	
}

void displayMainDiagonal(int a[][MAX], int r, int c){
	int i, minD;
	minD = r > c ? c : r;
	for (i=0; i<minD; i++)
		printf("%d ", a[i][i]);
}

void display2DArray(int a[][MAX], int r, int c){
	int i,j;
	for (i=0; i<r; i++){
		for (j=0; j<c; j++) printf("%d ", a[i][j]);
		printf("\n");			
	}
}

void intput2DArray(int a[][MAX], int r, int c){
	int i, j;
	for (i=0; i<r; i++)
		for (j=0; j<c; j++){
			printf("a[%d][%d] = ", i, j); scanf("%d", &a[i][j]);
		}
}

