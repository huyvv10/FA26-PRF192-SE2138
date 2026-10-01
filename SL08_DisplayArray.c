#include <stdio.h>

void inputArr(int a[], int n){
	int i;
	for (i=0; i<n; i++){		//Input array
		printf("a[%d] = ", i); 
		scanf("%d", &a[i]);
	}	
}

void displayArr(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
}
void displayOdd(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		if (a[i]%2==1)
			printf("%d ", a[i]);
	printf("\n");
}
void displayEven(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		if (a[i]%2==0)
			printf("%d ", a[i]);
	printf("\n");
}
//Display in reverse order
void displayReverse(int a[], int n){
	int i;
	for (i=n-1; i>=0; i--)
		printf("%d ", a[i]);
	printf("\n");
}

//Return 1 if n is a prime number. Return 0 otherwise
int isPrime(int n){
	int i, rs=1;
	if (n<2) rs=0;
	else
		for (i=2; i*i<=n; i++)
			if (n%i==0) {rs=0; break;}
	return rs;
}

void displayPrimes(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		if (isPrime(a[i])==1)	
			printf("%d ", a[i]);
	printf("\n");
}
void displaySquarePrimes(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		if (isPrime(a[i])==1)	
			printf("%d ", a[i]*a[i]);
		else
			printf("%d ", a[i]);
			
	printf("\n");
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	inputArr(a, n);
	printf("OUTPUT\n");
	displayArr(a, n);
	displayReverse(a, n);
	displayOdd(a, n);
	displayEven(a, n);
	displayPrimes(a, n);
	displaySquarePrimes(a, n);
	return 0;
}
