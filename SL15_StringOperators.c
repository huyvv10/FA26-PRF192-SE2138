#include <stdio.h>
#include <string.h>
void compare(char S1[], char S2[]){
	if (strcmp(S1, S2)>0)
		printf("%s > %s", S1, S2);
	else if (strcmp(S1, S2)==0)	
		printf("%s = %s", S1, S2);
	else
		printf("%s < %s", S1, S2);		
}
int main(){
	char S[31] = "FPT University 2026", S1[31]="", S2[31]="", S4[31]="";
	puts(S);
	int n = strlen(S);
	printf("The length of \"%s\" is: %d", S, n);
	strcpy(S1, S);
	printf("\nThe length of \"%s\" is: %d\n", S1, strlen(S1));
	strcpy(S2,"@Hoa Lac@");
	strcat(S4,S);
	strcat(S4, S2);
	puts(S4);
	compare(S, S1);
	return 0;
}
