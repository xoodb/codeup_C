/*#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	char r, x;
	long int a, b, c, d, s; //ที
	scanf("%d %d %d %d", &a, &b, &c, &d);
	for (int i = 1; i < d; i++)
	{
		printf("%d %d %d %d", a,b,c,d)
		a = a * b + c;
	}
	printf("%ld", a);

	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 

int main() {
	long int a, b, c, d;
	scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
	for (int i = 1; i < d; i++)
	{
		a = a * b + c;
	}
	printf("%ld", a);

	return 0;
}