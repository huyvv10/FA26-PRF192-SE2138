#include <stdio.h>
#include <ctype.h>

int main(){
	char S[30]="F2P8T U5n4iver9sity 2026@";
	puts(S);
	printf("\nOUTPUT\n");
	int i=0;
	while (S[i]!='\0'){
		if (isalpha(S[i]) || isspace(S[i])) 
			printf("%c", S[i]);
		i++;
	}
	printf("\n");
	i=0;
	while (S[i]!='\0'){
		if (isdigit(S[i])) printf("%c", S[i]);
		i++;
	}
	
	
	return 0;
}
