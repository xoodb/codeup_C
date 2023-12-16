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
	c = r[0];
	for (int i = a - 1; i >= 0; i--)
	{
		if (c > r[i])
			c = r[i];
	}
	printf("%d", c);

	return 0;
}