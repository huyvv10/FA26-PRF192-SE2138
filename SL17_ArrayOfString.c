#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 50

void input(char str[][MAX], int n){
	int i;
	for (i=0; i<n; i++){
//		printf("str[%d] = ", i); 
		scanf("%[^\n]", str[i]);
		getchar();
	}
}

void display(char str[][MAX], int n){
	int i;
	for (i=0; i<n; i++)
		if (i<n-1)
			printf("%s, ", str[i]);
		else	
			printf("%s", str[i]);
	printf("\n");		
}

void searchingName(char str[][MAX], int n, char startWith){
	int i, flag=0;
	for (i=0; i<n; i++){
		char tmp=str[i][0];
		tmp = tolower(tmp);
		if (tmp==tolower(startWith)){
			if (flag==1)
				printf(", %s", str[i]);
			else
				printf("%s", str[i]);
			flag=1;
		}
	}
	if (flag==0)
		printf("Find not found any elements starting with \"%c\"", startWith);	
	printf("\n");	
}

void sortAsc(char S[][MAX], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (strcmp(S[j-1],S[j])>0){
				char tmp[MAX];
//				tmp=S[j];	incorrect
				strcpy(tmp, S[j]); strcpy(S[j], S[j-1]);
				strcpy(S[j-1], tmp);
			}
}
void sortDesc(char S[][MAX], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (strcmp(S[j-1],S[j])<0){
				char tmp[MAX];
				strcpy(tmp, S[j]); strcpy(S[j], S[j-1]);
				strcpy(S[j-1], tmp);
			}
}

void searchContaining(char S[][MAX], int n, char *kw){
	int i, flag=0;
	char tmp[MAX];
	for (i=0; i<n; i++){
		strcpy(tmp, S[i]);
		strupr(tmp);
		if (strstr(tmp, strupr(kw))!=NULL){
			if (flag==1)
				printf(", %s", S[i]);
			else
				printf("%s", S[i]);
			flag=1;
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	char S[n][MAX];
	getchar();
	input(S, n);
	printf("\nOUTPUT\n");
	display(S, n);
	
	char S2[][MAX]={"Tuan", "Nam", "Minh", "An", "Ha"};
	display(S2, 5);
	printf("Input a searching character: ");
	char c;
	scanf("%c", &c);
	searchingName(S, n, c);
	printf("Sorting Asc\n");
	sortAsc(S, n);
	display(S, n);
	printf("Sorting Desc\n");
	sortDesc(S, n);
	display(S, n);
	getchar();
	char kw[MAX];
	printf("Input searching kw: "); 
	scanf("%[^\n]", kw);
	searchContaining(S, n, kw);
	return 0;
}
