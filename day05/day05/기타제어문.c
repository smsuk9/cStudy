#include <stdio.h>
#define true 1
#define false 0
void main() {
	//기타제어문
	//반복문을 좀 더 세밀하게 조정하고 싶을 때 사용하는 문법
	//기타제어문은 반복문 안에서만 사용해야 한다.
	//1. break : 반복을 중단하고 반복문을 빠져나간다.
	//2. continue : 명령을 중단하고 다음 반복문의 증감식으로 돌아간다.

	/*int num;
	while (1)
	{
		printf("-1입력시 종료 : ");
		scanf_s("%d", &num);
		if (num == -1) {
			break;
		}
		printf("입력한 값 : %d\n", num);
	}*/

	/*for (int i = 0; i <= 5; i++) {
		if (i == 3) {
			continue;
		}
		printf("%d\n", i);
	}*/


}