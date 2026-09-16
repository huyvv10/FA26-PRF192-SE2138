#include <stdio.h>

int main() {
	int n;
	printf("Nhap giai thuong ban nhan duoc: ");
	scanf("%d", &n);
	switch (n) {
		case 1:
			printf("Ban dat giai nhat, gia tri giai thuong 1000000"); break;
		case 2:
			printf("Ban dat giai nhi, gia tri giai thuong 500000"); break;
		case 3:
			printf("Ban dat giai ba, gia tri giai thuong 200000"); break;
		case 4:
			printf("Ban dat giai khuyen khich, gia tri giai thuong 50000"); break;
		default:
			printf("Chuc ban may man lan sau.");
	}
}
