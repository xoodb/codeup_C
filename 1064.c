#include<stdio.h>
int main() {
	int i, j, k;
	scanf("%d %d %d", &i, &j, &k);
	printf("%d", ((i < j ? i : j) < k ? (i < j ? i : j) : k));
	// i�� j���� �۴ٸ� i�� k�� ���Ѵ�.
	// j�� i���� �۰ų����ٸ� j�� k�� ���Ѵ�. 
}