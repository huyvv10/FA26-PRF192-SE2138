#include <stdio.h>
#include <stdlib.h>

int main(){
	char S[31], S1[31], S2[31];
//	printf("Input a string: ");
//	scanf("%[^\n]", &S);
//	printf("%s", S);
//	getchar();		//Clear buffer
//	printf("\nInput a string S1: "); scanf("%[abc]", &S1);
//	printf("%s", S1);
//	fflush(stdin);
//	printf("\nInput a string S2: "); scanf("%[^abc]", &S2);
//	printf("%s", S2);
//	fflush(stdin);
	printf("\nInput your phone number: "); scanf("%10[0-9]", &S2);
	printf("%s", S2);
	fflush(stdin);
	printf("\nInput your address: "); scanf("%[A-Za-z0-9 /]", &S2);
	printf("%s", S2);
	
	
	return 0;
}
