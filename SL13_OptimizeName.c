#include <stdio.h>
#include <ctype.h>

int main() {
	char S[50] = "v3U v@AN hU63Y";
	printf("%s\n", S);
	int i=0;
	while (S[i]!='\0') {
		if (isalpha(S[i]) || isspace(S[i]))
			if (i==0 || S[i-1]==' ') {
				S[i] = toupper(S[i]);
				printf("%c", S[i]);
			} else {
				S[i] = tolower(S[i]);
				printf("%c", S[i]);
			}
		i++;
	}
	return 0;
}
