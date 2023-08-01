#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define true 1

void main() {
	//시간정보를 이용하여 난수 생성
	srand((unsigned int)time(NULL));

	

	//for (int i = 0; i < 9; i++)
	//{
	//	int ranNum = rand() % 10 + 1;
	//	printf("난수 : %d\n", ranNum);
	//}
	//1~10사이의 난수를 생성하고 사용자가 난수를 맞출때
	//까지 입력을 반복하는 프로그램 작성하기
	int ranNum = rand() % 10 + 1;
		int num = 0;
	while (true)
	{
		printf("1~10까지 정수 입력 : ");
		scanf_s("%d", &num);
		if (num == ranNum) {
			printf("정답\n");
			break;
		}
		else
		{
			printf("오답\n");
		}
	}


}