#include<stdio.h>
int main() {
	int i, j, k;
	scanf("%d %d %d", &i, &j, &k);
	printf("%d", ((i < j ? i : j) < k ? (i < j ? i : j) : k));
	// i가 j보다 작다면 i랑 k랑 비교한다.
	// j가 i보다 작거나같다면 j랑 k랑 비교한다. 
}