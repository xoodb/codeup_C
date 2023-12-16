#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	int h, m, i;
	scanf("%d.%d.%d", &h, &m, &i);
	printf("%04d.%02d.%02d", h, m, i);
	return 0;
}