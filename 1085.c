/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char r, x;
	int a, b, c, d;
	float mb;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	mb = ((double)(a * b * c * d) / 8) / 1024 / 1024;
	printf("%.1f MB", mb);
	//printf("%.1f MB", (((float)(a * b * c * d) / 8) / 1024) / 1024);
	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	float a, b, c, d;
	float mb;

	scanf("%f %f %f %f", &a, &b, &c, &d);
	mb = ((a * b * c * d) / 8) / 1024 / 1024;
	printf("%.1f MB", mb);
	return 0;
}