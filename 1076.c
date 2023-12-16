#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r, x;
	int a, b, c;
	scanf("%c", &r);
	x = 'a';
	while (1)
	{
		printf("%c\n", x);
		if (x == r)
			break;
		x++;
	}

	return 0;
}