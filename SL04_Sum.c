#include <stdio.h>

int main() {
	int i, n, S=0, S1=0, S2=0;
	scanf("%d", &n);
	for (i=0; i<=n; i++){
		S+=i;
		if (i%2==1) S1+=i;
		else S2+=i;
	}

//	for (i=0; i<=n; i++)
//		S+=i;		//S = S+i
//	for (i=1; i<=n; i+=2)
//		S1+=i;		//S = S+i
//	for (i=0; i<=n; i+=2)
//		S2+=i;		//S = S+i
	
	printf("%d\n%d\n%d", S, S1, S2);
			
	return 0;
}
