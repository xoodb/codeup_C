#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	long int a, b;
	scanf("%ld %ld", &a, &b);
	printf("%ld\n", a + b);
	printf("%ld\n", a - b);
	printf("%ld\n", a * b);
	printf("%ld\n", a / b);
	printf("%ld\n", a % b);
	printf("%.2f\n", (float)a / b);


	return 0;
}