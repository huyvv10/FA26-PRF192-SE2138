#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, n=10;
	srand(time(NULL));
	for (i=0; i<n; i++)
		printf("%d ", rand());
	return 0;
}
