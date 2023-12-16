#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r, x;
	int a, b, c;
	scanf("%d", &a);
	c = 0;
	for (int i = 0; i <= a; i++)
	{
		if (i % 2 == 0)
			c += i;
	}
	printf("%d\n", c);

	return 0;
}