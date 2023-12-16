#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r, x;
	int a, b, c;
	while (1)
	{
		scanf("%c ", &r);
		printf("%c\n", r);
		if (r == 'q')
			break;
	}

	return 0;
}