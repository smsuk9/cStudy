#include <stdio.h>

void main() {
	//for 문 : 반복횟수가 정해져 있을 때 사용하는 반복문

	//for (초기값; 조건식; 증감식) {
	//		조건식이 참일 때 반복할 명령
	//}

	//초기식 : 시작값을 넣은 변수 하나 초기화
	//조건식 : 몇번 반복을 할지 조건을 검사하는 식
	//증감식 : 시작값을 증감시켜주는 식

	/*for (int i = 0; i < 3; i++)
	{
		printf("%d ", i);
	}*/

	//1 ~ 10까지 출력하기
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", i+1);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", 10 - i);
	}
	printf("\n");
	//1~ 10까지 총합 출력하기
	int total = 0;
	for (int i = 1; i <= 10; i++)
	{
		total += i;
	}
	printf("1~10까지 총합은 : %d", total);
	printf("\n");
	//임의의 정수를 변수n에 입력받아
	//1 ~ n까지의 총합을 구하세요.
	int n;
	printf("n 값 입력 : ");
	scanf_s("%d", &n);
	int total2 = 0;
	for (int i = 1; i <= n; i++)
	{
		total2 += i;
	}
	printf("1~n까지 총합은 : %d", total2);
	printf("\n");
	printf("--------------------------------\n");

	//1 ~ 20까지 4의 배수만 출력하기
	int total3 = 20;
	int var = 4;
	for (int i = 1; i <=total3/var; i++)
	{
		printf("%d ", i * 4);
	}
	printf("\n");
	// 사용자에게 정수 하나를 입력받아
	//해당 구구단 출력하기
	int number;
	printf("구구단 입력 : ");
	scanf_s("%d", &number);
	for (int i = 1; i <= 9; i++)
	{
		printf("%2d X %2d = %2d\n", number, i, number * i);
	}

	
}