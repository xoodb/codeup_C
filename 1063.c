#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	long int a, b, c;
	scanf("%ld %ld", &a, &b);
	printf("%ld", a > b ? a : b);


	return 0;
}