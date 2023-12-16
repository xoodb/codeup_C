#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r, x;
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int s = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			for (int k = 0; k < c; k++)
			{
				printf("%d %d %d\n", i, j, k);
				s++;
			}
		}
	}
	printf("%d", s);

	return 0;
}