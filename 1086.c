#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r, x;
	float a, b, c, d;
	float mb;

	scanf("%f %f %f", &a, &b, &c);
	mb = ((a * b * c) / 8) / 1024 / 1024;
	printf("%.2f MB", mb);
	return 0;
}