#include <stdio.h>

void displayArr(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void inputArr(int a[], int n){
	int i;
	for (i=0; i<n; i++){		//Input array
		printf("a[%d] = ", i); 
		scanf("%d", &a[i]);
	}	
}
int main(){
	int i, n=5;
	int arr[] = {8,6,4,9,2};	//Case 1 declare an array
	displayArr(arr, n);			//Output
	
	int arr2[n];				//Case 2 declare an array
	inputArr(arr2, n);
	displayArr(arr2, n);		//Output arr2
	return 0;
}
