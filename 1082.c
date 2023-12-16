#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r, x;
	int a, b, c;
	scanf("%X", &a);
	for (int i = 1; i <=15; i++)
	{
		printf("%X*%d=%X", a, i, a * i);
	}

	return 0;
}