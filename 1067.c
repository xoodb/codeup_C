#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	long int a, b, c;
	scanf("%ld", &a);
	if (a < 0)
	{
		printf("minus\n");
	}
	else
	{
		printf("plus\n");
	}
	if (a % 2 == 0)
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}
	return 0;
}