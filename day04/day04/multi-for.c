#include<stdio.h>

void main() {
	//for문의 중첩
	//for문 안에 for문이 들어가 있는 형태
	//두번 겹치면 이중 for문, 세번 겹치면 삼중 for문

	//for(초기식; 조건식; 증감식) {
	//		for(초기식; 조건식; 증감식) {
	//			조건식이 참일 때 반복할 명령
	//		}
	//}
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++) {
			printf("%d %d\n", i, j);
		}
		printf("\n");
	}

	printf("-------------------------------\n");
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 4; i++) {
			printf("%d ", i + 1);
		}
		printf("\n");
	}
	printf("-------------------------------\n");
	int row = 4;
	int column = 3;
	for (int j = 0; j < column; j++) {
		for (int i = 0; i < row; i++) {
			printf("%2d ", (row *j)+(i+1));
		}
		printf("\n");
	}
	printf("-------------------------------\n");
	row = 4;
	column = 3;
	const int FIRST = 65;
	for (int j = 0; j < column; j++) {
		for (int i = 0; i < row; i++) {
			printf("%2c ", (row * j) +(i+ FIRST));
		}
		printf("\n");
	}
}