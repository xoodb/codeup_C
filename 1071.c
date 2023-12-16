#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	//char r;
	int a;// , b, c;
relod:
	scanf("%d", &a);
	if (a != 0)
	{
		printf("%d\n", a);
		goto relod;
	}

	return 0;
}