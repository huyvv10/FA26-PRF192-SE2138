#include <stdio.h>

int main() {
	int i, n, S=0, S1=0, S2=0;
	scanf("%d", &n);
	for (i=0; i<=n; i++){
		S+=i;		//S = S+i
		if (i==n)
			printf("%d", i);
		else	
			printf("%d + ", i);
	}
	printf(" = %d\n", S);

	for (i=1; i<=n; i+=2){
		S1+=i;		//S = S+i
		if ((i==n && n%2==1) || i==n-1)
			printf("%d ", i);
		else	
			printf("%d + ", i);
	}
	printf("= %d\n", S1);

	for (i=0; i<=n; i+=2){
		S2+=i;		//S = S+i
		if ((i==n && n%2==0) || i==n-1)
			printf("%d", i);	
		else		
			printf("%d + ", i);	
	}
	printf(" = %d\n", S2);
	
	return 0;
}
