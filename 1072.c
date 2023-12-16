#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r;
	int a, b, c;
	scanf("%d", &b);
relod:
	scanf("%d", &a);
	if (b != 0) {
		printf("%d\n", a);
		b--;
			goto relod;
	}



	return 0;
}