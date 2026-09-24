#include <stdio.h>

//Return 1 if n is a prime number
//Return 0 otherwise
int isPrime(int n){
	int i, rs=1;
	if (n<2) {
		rs=0;
	} else {
		for (i=2; i*i<=n; i++)
			if (n%i==0){
				rs=0;
				break;
			}				
	}
	return rs;
}

//Return total value of prime numbers from 2 to n
int sumPrimeToN(int n){
	int i, S=0;
	if (n<2) return S;
	for (i=2; i<=n; i++)
		if (isPrime(i)==1)
			S+=i;
	return S;		
}
//List prime numbers from 2 to n
void listPrimeToN(int n){
	int i;
	if (n<2) return;
	for (i=2; i<=n; i++)
		if (isPrime(i)==1)
			printf("%d ", i);
}

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
	return 0;
}
