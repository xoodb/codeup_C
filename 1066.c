#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	long int a, b, c;
	scanf("%ld %ld %ld", &a, &b, &c);
	if (a % 2 == 0)
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}
	if (b % 2 == 0)
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}
	if (c % 2 == 0)
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}

	return 0;
}