#include <stdio.h>

int main(){
	int i;
//	Case 1
	char S[31] = "FPT University 2026";
	for (i=0; S[i]!='\0'; i++)
		printf("%c", S[i]);

//	Case 2	
	char S1[31] = {'P', 'R', 'F', '1', '9','2'};
	printf("\n%s", S1);	

//	Case 3
	printf("\n");
	puts(S);
		
	return 0;
}
