#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r, x;
	int a, b, c;
	scanf("%d", &a);
	c = 0;
	b = 0;
	while (1)
	{
		b++;
		c += b;
		if (c >= a)
			break;
	}
	printf("%d", b);

	return 0;
}