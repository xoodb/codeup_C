#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	long int a, b, c;
	scanf("%ld %ld %ld", &a, &b, &c);
	if (a % 2 == 0)
	{
		printf("%ld\n", a);
	}

	if (b % 2 == 0)
	{
		printf("%ld\n", b);
	}

	if (c % 2 == 0)
	{
		printf("%ld\n", c);
	}

	return 0;
}