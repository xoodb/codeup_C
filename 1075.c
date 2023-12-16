#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	//char r;
	int a;// , b, c;
	scanf("%d", &a);
	while (1)
	{
		a--;
		printf("%d\n", a);
		if (a == 0)
			break;
	}

	return 0;
}