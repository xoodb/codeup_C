#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	long int a, b, c;
	scanf("%ld %ld %ld", &a, &b, &c);
	printf("%ld\n", a + b + c);
	printf("%.1f\n", ((float)a + b + c) / 3);


	return 0;
}