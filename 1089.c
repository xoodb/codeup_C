#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r, x;
	int a, b, c, s;
	scanf("%d %d %d", &a, &b, &c);
	for (int i = 1; i < c; i++)
	{
		a += b;
	}
	printf("%d", a);

	return 0;
}