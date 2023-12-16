#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	//char r;
	int a;// , b, c;
	while (1)
	{
		scanf("%d", &a);
		if (a == 0) 
			break;
		printf("%d\n", a);
	}

	return 0;
}