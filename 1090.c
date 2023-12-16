#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r, x;
	long int a, b, c, s; //ที
	scanf("%d %d %d", &a, &b, &c);
	for (int i = 1; i < c; i++)
	{
		a *= b;
	}
	printf("%ld", a);

	return 0;
}