#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	int w, h, x, y, a, l, d;
	int r[101][101] = { {0,},{0,} }; //���� �����ϱ� ���� 0,0�� �����ϰ� 1~100���
	scanf("%d %d", &w, &h); //���� ���� ���� ���� ����
	scanf("%d", &a); //��� ���븦 ������
	for (int i = 1; i <= a; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y); //���� ���� ���� ��ǥ �Է�
		if (d == 1) { //���ι����� �����϶� ��ǥ����
			for (int i = 0; i < l; i++)
			{
				if (r[x + i][y] == 0) r[x + i][y] = 1;
			}
		}
		else if (d == 0) { //���ι����� �����϶� ��ǥ����
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
			printf("%d ", r[i][j]); //������ ���
		}
		printf("\n");
	}

	return 0;
}