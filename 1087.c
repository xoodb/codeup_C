#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r, x;
	int a, b, c;
	scanf("%d", &a);
	int s = 0;
	for (int i = 1; s < a; i++)
	{
		s += i;
	}
	printf("%d", s);

	return 0;
}