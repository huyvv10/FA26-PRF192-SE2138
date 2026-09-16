#include <stdio.h>

int main(){
	float m, ph, ch, gpa;
	scanf("%f%f%f", &m, &ph, &ch);
	gpa = (m+ph+ch)/3;
	if (gpa>=5)
		printf("Your gpa = %.2f. You are pass", gpa);
	else
		printf("Your gpa = %.2f. You are fail", gpa);
		
	return 0;
}
