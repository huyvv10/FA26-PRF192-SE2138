#include <stdio.h>

int main(){
	int d, y;
	printf("Input a month: "); scanf("%d", &d);
	switch(d){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("The month %d has 31 days", d); 
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("The month %d has 30 days", d); 
			break;
		case 2:
			printf("Input year: "); scanf("%d", &y);
			if ((y%400==0) || (y%4==0 && y%100!=0))
				printf("The month %d has 29 days", d); 
			else
				printf("The month %d has 28 days", d); 
			break;
		default:
			printf("%d is not a month of the year.");	
	}
	return 0;
}
