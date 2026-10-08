#include <stdio.h>
void display(int a[], int n);
void sortAsc(int a[], int n);
void sortDesc(int a[], int n);
void bubbleSortAsc(int a[], int n);
void bubbleSortDesc(int a[], int n);
int main(){
	int n=17;
	int a[]={2,6,5,4,8,1,2,3,5,9,8,5,4,7,5,6,8};
	display(a, n);
//	sortAsc(a, n);		//Call sort array in asceding order
//	sortDesc(a,n);		//Call sort array in desceding order
//	bubbleSortAsc(a, n);
	bubbleSortDesc(a,n);
	display(a, n);
	return 0;
}
//Sort in descending order using Bubble sort algorithm
void bubbleSortDesc(int a[], int n){
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j-1] < a[j]){
				int tmp=a[j]; a[j]=a[j-1]; a[j-1]=tmp;
			}
}
//Sort in ascending order using Bubble sort algorithm
void bubbleSortAsc(int a[], int n){
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j-1] > a[j]){
				int tmp=a[j]; a[j]=a[j-1]; a[j-1]=tmp;
			}
}

//Sort in descending order using Selection sort algorithm
void sortDesc(int a[], int n){
	int i, j, maxIdx;
	for (i=0; i<n-1; i++){
		maxIdx=i;
		for (j=i+1; j<n; j++)
			if (a[j] > a[maxIdx]) maxIdx=j;
		if (i!=maxIdx){
			int tmp=a[i]; a[i]=a[maxIdx]; a[maxIdx]=tmp;
		}	
	}
	printf("\n");
}
//Sort in ascending order using Selection sort algorithm
void sortAsc(int a[], int n){
	int i, j, minIdx;
	for (i=0; i<n-1; i++){
		minIdx=i;
		for (j=i+1; j<n; j++)
			if (a[j] < a[minIdx]) minIdx=j;
		if (i!=minIdx){
			int tmp=a[i]; a[i]=a[minIdx]; a[minIdx]=tmp;
		}	
	}
	printf("\n");
}

void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");	
}
