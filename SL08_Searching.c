#include <stdio.h>

void inputArr(int a[], int n);
void displayArr(int a[], int n);
int getFirstPos(int a[], int n, int kw);
void searching(int a[], int n);

int main(){
	int n=14;
	int a[]={3,5,6,9,8,4,5,7,2,3,6,5,9,2};
	displayArr(a, n);
	searching(a, n);
	return 0;
}

void searching(int a[], int n){
	int x, pos;
	printf("Input searching number: "); scanf("%d", &x);
	pos=getFirstPos(a, n, x);
	if (pos!=-1)
		printf("The position first found %d is %d", x, pos);
	else
		printf("Find not found %d in the array", x);
}
//Return the position first found kw in the array.
//Return -1 in case find not found.
int getFirstPos(int a[], int n, int kw){
	int i, pos=-1;
	for (i=0; i<n; i++)
		if (a[i]==kw){
			pos=i; break;
		}
	return pos;	
}

void inputArr(int a[], int n){
	int i;
	for (i=0; i<n; i++){		//Input array
		printf("a[%d] = ", i); 
		scanf("%d", &a[i]);
	}	
}

void displayArr(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
}