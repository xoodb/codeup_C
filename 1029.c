#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	double d;
	scanf("%lf", &d); // double(long float) �������� �Է�
	printf("%.11lf", d);
	return 0;
}