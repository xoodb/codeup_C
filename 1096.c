#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	int a, b, x, y;
	int r[20][20] = { {0,},{0,} };
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		scanf("%d %d", &x, &y);
		r[x][y] = 1;
	}
	for (int i = 1; i <= 19; i++) //�� ��(������ �Ʒ���) ��
	{
		for (int j = 1; j <= 19; j++) //�� ��(���ʿ��� ����������) ��
		{
			printf("%d ", r[i][j]); //�� ���
		}
		printf("\n"); //�� �ٲٱ�
	}

	return 0;
}