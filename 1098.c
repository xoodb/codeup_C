#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	int w, h, x, y, a, l, d;
	int r[101][101] = { {0,},{0,} }; //쉽게 생각하기 위해 0,0을 사용안하고 1~100사용
	scanf("%d %d", &w, &h); //격자 가로 세로 길이 설정
	scanf("%d", &a); //몇개의 막대를 놓을지
	for (int i = 1; i <= a; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y); //막대 길이 방향 좌표 입력
		if (d == 1) { //가로방향의 막대일때 좌표변경
			for (int i = 0; i < l; i++)
			{
				if (r[x + i][y] == 0) r[x + i][y] = 1;
			}
		}
		else if (d == 0) { //세로방향의 막대일때 좌표변경
			for (int i = 0; i < l; i++)
			{
				if (r[x][y + i] == 0) r[x][y + i] = 1;
			}
		}

	}

	for (int i = 1; i <= w; i++)
	{
		for (int j = 1; j <= h; j++)
		{
			printf("%d ", r[i][j]); //격자판 출력
		}
		printf("\n");
	}

	return 0;
}