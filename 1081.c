#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r, x;
	int a, b, c;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++) {
			printf("%d %d\n", i, j);
		}
	}

	return 0;
}