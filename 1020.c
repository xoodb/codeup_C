#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	int h, m;
	scanf("%d-%d", &h, &m);
	printf("%06d%07d", h, m);
	return 0;
}