#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r, x;
	int a, b, c;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		if (i % 3 == 0)
			printf("X ");
		else
			printf("%d ", i);
	}

	return 0;
}