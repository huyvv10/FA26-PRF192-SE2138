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

//Display the first n primes using while loop
void listTheFirstNPrimes(int n){
	int i=2, count=0;
	while (count!=n){
		if (isPrime(i)==1){
			count++;
			printf("%d ", i);
		}
		i++;	
	}
}

//Display the first n primes using for loop
void listTheFirstNPrimes2(int n){
	int i, count=0;
	for (i=2; count<n; i++){
		if (isPrime(i)==1) {
			count++;
			printf("%d ", i);	
		}
	}
}

//Return total values of the first n primes
int sumTheFirstNPrimes(int n){
	int i, count=0, S=0;
	for (i=2; count<n; i++){
		if (isPrime(i)==1) {
			count++;
			S+=i;	
		}
	}	
	return S;
}