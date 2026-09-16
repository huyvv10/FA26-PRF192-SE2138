#include <stdio.h>

int main(){
	float m, ph, ch, gpa;
	scanf("%f%f%f", &m, &ph, &ch);
	gpa = (m+ph+ch)/3;
	if (gpa>=9)
		printf("GPA = %.2f. You are excellence.", gpa);
	else if (gpa>=8)	
		printf("GPA = %.2f. You are good.", gpa);
	else if (gpa>=7)	
		printf("GPA = %.2f. You are well.", gpa);
	else if (gpa>=5)	
		printf("GPA = %.2f. You are fair.", gpa);
	else 
		printf("GPA = %.2f. You are poor.", gpa);
		
	return 0;
}
