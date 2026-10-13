#include <stdio.h>
void display(int a[], int n);
void sortAsc(int a[], int n);
void sortDesc(int a[], int n);
void bubbleSortAsc(int a[], int n);
void bubbleSortDesc(int a[], int n);
void sortInRange(int a[], int n, int pos1, int pos2);
int getPos(int a[], int n, int x, int theK);
int getMax(int a[], int n);
int getMin(int a[], int n);
int main(){
	int n=17;
	int a[]={2,6,5,4,8,1,5,3,2,9,8,5,4,9,5,6,8};
	display(a, n);
//	sortAsc(a, n);		//Call sort array in asceding order
//	sortDesc(a,n);		//Call sort array in desceding order
//	bubbleSortAsc(a, n);
//	bubbleSortDesc(a,n);
//	display(a, n);
	sortInRange(a, n, getPos(a, n, getMin(a, n), 1), getPos(a, n, getMax(a, n),2));
	display(a, n);
	return 0;
}
int getMax(int a[], int n){
	int i, max=a[0];
	for (i=1; i<n; i++)
		if (a[i]>max) max=a[i];
	return max;	
}
int getMin(int a[], int n){
	int i, min=a[0];
	for (i=1; i<n; i++)
		if (a[i]<min) min=a[i];
	return min;	
}

//Return the position the-k of x within the array
//Return -1 in case find not found x or the-k is our of range
int getPos(int a[], int n, int x, int theK){
	int i, count=0, pos=-1;
	if (theK<0 || theK>=n) return pos;
	for (i=0; i<n; i++)
		if (a[i]==x){
			count++;
			if (count==theK){
				pos=i; break;
			}
		}
	return pos;	
}

//Sort in Asc from pos1 to pos2 inclusive
//Keep the remain unchange
void sortInRange(int a[], int n, int pos1, int pos2){
	int i, j;
	for (i=pos1; i<pos2; i++)
		for (j=pos2; j>i; j--)
			if (a[j-1] > a[j]){
				int tmp=a[j-1]; a[j-1]=a[j]; a[j]=tmp;
			}
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
