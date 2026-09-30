#include <stdio.h>
#include "PrimeLib.c"

int isPrime(int n);
int sumPrimeToN(int);
void listPrimeToN(int n);
void listTheFirstNPrimes(int n);
void listTheFirstNPrimes2(int n);
int sumTheFirstNPrimes(int n);

int main(){
	int n;
	scanf("%d", &n);
	if (isPrime(n)==1)
		printf("%d is a prime number", n);
	else	
		printf("%d is not a prime number", n);
	printf("\nTotal value of prime numbers from 2 to %d is %d", n, sumPrimeToN(n));	
	printf("\nList primes to %d: ", n);
	listPrimeToN(n);
	printf("\nList the first %d prime numbers: ", n);
	listTheFirstNPrimes(n);
	printf("\n");
	listTheFirstNPrimes2(n);
	printf("\nTotal value of the first %d primes: %d", n, sumTheFirstNPrimes(n));
	
	return 0;
}

