#include <stdio.h>
#include <string.h>

int main(){
	char S1[100], *S;
	scanf("%[^\n]", &S1);
	S = strlwr(S1);
	int i, count=0;
	for (i=0; S[i]!='\0'; i++)
		if (S[i]=='a' || S[i]=='e'|| S[i]=='i'|| S[i]=='o'|| S[i]=='u')
			count++;
	printf("\nOUTPUT\n");
	printf("%d", count);		
	return 0;
}
