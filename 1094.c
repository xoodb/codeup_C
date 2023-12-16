#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	int a, b, c, d, s;
	scanf("%d", &a);
	int r[9999] = {};
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		r[i] = b;
	}
	for (int i = a-1; i >= 0; i--)
	{
		printf("%d ", r[i]);
	}

	return 0;
}