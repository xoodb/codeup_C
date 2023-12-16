#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	int a, b, x, y;
	int r[20][20] = { {0,},{0,} };
	for (int i = 1; i <= 19; i++) {
		for (int j = 1; j <= 19; j++) {
			scanf("%d", &r[i][j]);
		}
	}
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		scanf("%d %d", &x, &y);
		for (int j = 1; j <= 19; j++) //가로 줄 흑<->백 바꾸기
		{
			if (r[x][j] == 0) r[x][j] = 1;
			else r[x][j] = 0;
		}
		for (int j = 1; j <= 19; j++) //세로 줄 흑<->백 바꾸기
		{
			if (r[j][y] == 0) r[j][y] = 1;
			else r[j][y] = 0;
		}
	}

	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			printf("%d ", r[i][j]); //값 출력
		}
		printf("\n");
	}

	return 0;
}