#include <stdio.h>
void main() {
	//switch문은 다양한 조건을 검사할 수 있게 만들어 놓은 문법

	//기본형
	//switch (비교값) {
	//case 조건값1 :
	//		비교값과 조건값이 일치할 때 실행할 명령
	//		break;
	//case 조건값2 :
	//		비교값과 조건값이 일치할 때 실행할 명령
	//		break;
	//case 조건값3 :
	//		비교값과 조건값이 일치할 때 실행할 명령
	//		break;
	//default :
	//		break;
	//}

	/*	int num = 1;
		//printf("양의 정수를 입력하세요 : ");
		//scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			printf("num은 1\n");
			break;
		case 2:
			printf("num은 2\n");
			break;
		case 3:
			printf("num은 3\n");
			break;
		default:
			printf("일치하는 값이 없습니다.\n");
			break;
		}*/

		//switch의 비교값으로 올 수 있는 자료형
		//1. 정수
		//2. 문자형


	printf("-----------------------------------------\n");

	//사용자로부터 정수를 입력받아, 홀수인지 짝수인지 판별하는 프로그램 작성하기
	//정수를 입력하세요 : 3
	//입력한 정수는 홀수 입니다.

/*	int num2;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num2);*/
	/*
	if (num2 % 2 == 0) {
		printf("입력한 정수는 짝수 입니다.\n");
	}
	else
	{
		printf("입력한 정수는 홀수 입니다.\n");
	}
	*/
	//	printf("%s", num2 % 2 == 0 ? "입력한 정수는 짝수 입니다.\n" : "입력한 정수는 홀수 입니다.\n"); 

		//사용자로부터 임의의 정수 두개와 산술연산자(+,-,*,/) 총 세개를 입력받는다.
		//산술연산자에 따라 두 개의 정수를 연산하여 출력하기

		//첫번째 수 : 10
		//두번째 수 : 7
		//연산자 : +

		//결과 : 10 + 7 = 17
/*
		int value1;
		int value2;
		char cal;
		printf("첫번째 수 : ");
		scanf_s("%d", &value1);
		printf("두번째 수 : ");
		scanf_s("%d", &value2);
		printf("연산자 : ");
		scanf_s(" %c", &cal);
		switch (cal)
		{
		case '+':
			printf("%d %c %d = %d", value1, cal, value2, value1 + value2);
			break;
		case '-':
			printf("%d %c %d = %d", value1, cal, value2, value1 - value2);
			break;
		case '*':
			printf("%d %c %d = %d", value1, cal, value2, value1 * value2);
			break;
		case '/':
			printf("%d %c %d = %d", value1, cal, value2, value1 / value2);
			break;
		default:
			printf("error");
			break;
		}
	*/
	//정수형 변수month에 달을 하나 입력받는다.
	//해당 달이 몇일이 있는지 출력하는 코드 작성하기

	//입력 : 3 
	//결과 : 3월은 31일까지 있습니다.
	while (1)
	{
		int month;
		printf("입력 : ");
		scanf_s("%d", &month);
		if (month > 12 || month <1) {
			printf("Error\n");
			continue;
		}
		int result = month>7 ? month+1 : month;
		int var = 
			result % 2 != 0 ? 1 : 
			result == 2 ? 2 : 3;
		switch (var)
		{
		case 1:
			printf("%d월은 31일까지 있습니다.\n", month);
			break;
		case 2:
			printf("%d월은 28일까지 있습니다.\n", month);
			break;
		case 3:
			printf("%d월은 30일까지 있습니다.\n", month);
			break;
		}
	}


}