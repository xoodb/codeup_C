#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	long int a, b, c;
	scanf("%ld", &a);
	if (90 <= a && a <= 100)
	{
		printf("A\n");
	}
	else if (70 <= a && a <= 89)
	{
		printf("B\n");
	}
	else if (40 <= a && a <= 69)
	{
		printf("C\n");
	}
	else if (0 <= a && a <= 39)
	{
		printf("D\n");
	}
	
	return 0;
}