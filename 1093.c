#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	int a, b, c, d, s;
	scanf("%d", &a);
	int r[23] = {0,};
	for (int i = 1; i <= a; i++) 
	{
		scanf("%d", &b); 
		r[b - 1] += 1; 
	}
	for (int i = 0; i < 23; i++)
	{
		printf("%d ", r[i]);
	}

	return 0;
}