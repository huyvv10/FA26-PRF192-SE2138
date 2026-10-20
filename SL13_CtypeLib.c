#include <stdio.h>
#include <ctype.h>

int main(){
	char S[30] = "$FPT University @2026$";
	printf("%s\n", S);
	int i=0, n=0, c=0, sp=0, o=0, u=0, l=0;
	while (S[i]!='\0'){
		if (isdigit(S[i])) n++;
		else if (isalpha(S[i])) c++;
		else if (isspace(S[i])) sp++;		
		else o++; 
		i++;
	}
	printf("Number of digits: %d", n);
	printf("\nNumber of characters: %d", c);
	printf("\nNumber of space: %d", sp);
	printf("\nNumber of special characters: %d", o);
	
	return 0;
}
