#include <stdio.h>

int main(){
	char S[30]="F2P8T U5n4iver9sity 2026@";
	puts(S);
	printf("\nOUTPUT\n");
	int i=0, sum=0;
	while (S[i]!='\0'){
		if (S[i]>='0' && S[i]<='9') {
			printf("%c", S[i]);
			sum += S[i]-'0';
		}
		i++;
	}
	printf("\n%d", sum);
	return 0;
}
