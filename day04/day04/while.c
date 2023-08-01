#include <stdio.h>
void main() {
	//반복문
	//조건에 따라서 명령을 반복할지 반복하지 않을지 결정하는 문법
	//while, for

	//while(조건식){
	//		조건식이 참일 동안 반복할 명령
	//}

	int num = 0; // 시작값

	while (num < 3)
	{
		printf("%d\n", num++);
	}
	int num1 = 0;
	while (num1 != -1)
	{
		printf("숫자를 입력하세요(-1을 입력하면 종료) : ");
		scanf_s("%d", &num1);
		if (num1 == -1) {
			printf("종료합니다.\n");
		}
		else
		{
			printf("%d를 입력하셧습니다.\n",num1);
		}
	}

	//while문은 내가 몇번 반복할지 정확하게 알 수 없을 때도
	//사용이 가능하다.

	//while의 조건식에 1을 넣게 되면 무한루프가 가능하다. 
}