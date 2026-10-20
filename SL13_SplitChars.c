#include <stdio.h>
#include <ctype.h>

int main(){
	char S[50] = "$Welcome to FPT University-@2026$";
	printf("%s\n", S);
	int i=0;
	while (S[i]!='\0'){
		if (isalpha(S[i]) || isspace(S[i])) printf("%c", S[i]);
		i++;
	}
	return 0;
}
