#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int main() {
	int x, y;
	x = 1; y = 1; //개미 시작 지점
	int r[10][10] = { 0, }; //미로 크기 설정
	for (int i = 0; i < 10; i++) //이중 반복문을 이용 미로상자 벽 및 먹이 위치 설정
		for (int j = 0; j < 10; j++)
			scanf("%d", &r[i][j]);

	if (r[y][x] == 2) { //만약 개미의 시작위치에 먹이가 있다면
		r[y][x] = 9;	//해당 위치의 값을 9로 바꾸고  아래 반복문을 건너뜀
		goto pass;
	}

	while (1) {//개미가 이동할때 벽이 있는지 먹이가있는지 식별
		r[y][x] = 9; //개미의 해당위치를 9로 변경
		if (r[y][x + 1] == 0) { //오른쪽이 벽이 아니면 오른쪽으로 이동
			x += 1;
		}
		else if (r[y][x + 1] == 2) { //오른쪽이 먹이면 오른쪽으로 이동
			r[y][x + 1] = 9;
			x += 1;
			break;					 //반복문 탈출
		}
		else if (r[y + 1][x] == 0) { //아래쪽이 벽이아니면 아래쪽으로 이동
			y += 1;
		}
		else if (r[y + 1][x] == 2) { //아래쪽이 먹이면 아래쪽으로 이동
			r[y + 1][x] = 9;
			y += 1;
			break;
		}
		else { //모두 막혀서 이동할수 없는경우 탈출
			break;
		}
	}
pass:

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", r[i][j]); //값 출력
		}
		printf("\n");
	}

	return 0;
}