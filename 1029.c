#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	double d;
	scanf("%lf", &d); // double(long float) 형식으로 입력
	printf("%.11lf", d);
	return 0;
}