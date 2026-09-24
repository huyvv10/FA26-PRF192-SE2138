#include <stdio.h>

//Tinh tong cac so tu 0 den n
int sum(int n){
	int i, S=0;
	for (i=0; i<=n; i++)
		S += i; //S = S+i
	return S;	
}

//Liet ke cac so chia het cho 3 den n
void listDivided(int n){
	int i;
	for (i=0; i<=n; i++)
		if (i%3==0)
			printf("%d ", i);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("Total value from 0 to %d is: %d", n, sum(n));	//Call function
	printf("\nList of elements devided for 3 is: ");
	listDivided(n);		//Call void module
	
//	int rs;
//	rs = sum(n);
//	printf("Total value from 0 to %d is: %d", n, rs);
	return 0;
}
