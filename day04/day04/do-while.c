#include <stdio.h>

void main() {
	//while문 : 선비교 후처리
	//do-while문 : 선처리 후비교
	//조건에 맞지 않아도 무조건 한번은 실행이 된다.
	//그 후에 조건을 다시 비교해서 거짓이면 그대로 빠져나간다.

	//do {
	//		조건식이 참일 때 반복할 명령;
	//} while (조건식);

	int num = 1;

	do
	{
		printf("%d\n", num++);
	} while (num < 3);

	printf("---------------\n");

	int n = -1;
	do
	{
		printf("-1입력시 종료 : ");
		scanf_s("%d", &n);
	} while (n != -1);
}