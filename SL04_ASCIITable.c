#include <stdio.h>

int main(){
	int i, n=255;
	for (i=0; i<=n; i++){
		printf("%d \t %c \t %o \t %x\n", i, i, i, i);		
		if (i>0 && i%25==0) getchar();
	}
	
	return 0;
}
