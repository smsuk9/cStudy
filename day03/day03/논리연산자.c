#include <stdio.h>

void main() {
	//논리연산자는 참과 거짓을 연산하여
	//참과 거짓을 반환하는 연산자

	//&&(And) : 그리고의 의미를 갖는다.
	// 앞 뒤가 모두 참일 때 참을 반환한다.
	// 1 && 1 -> 1
	// 1 && 0 -> 0
	// 0 && 1 -> 0
	// 0 && 0 -> 0
	//||(Or) : 또는의 의미를 갖는다.
	// 앞 뒤 중 하나라도 참이면 참을 반환한다.
	// 1 || 1 -> 1
	// 1 || 0 -> 1
	// 0 || 1 -> 1
	// 0 || 0 -> 0
	// ! (Not) : 참을 거짓으로, 거짓을 참으로
	// !데이터

	int num1 = 20, num2 = 10;
	int result;

	result = 1 && 1;
	printf("result1 : %d\n", !result);

	result = num1 == 20 && num2 == 10;
	printf("result2 : %d\n", !result);

	result = num1 > num2 && num1 == num2;
	printf("result3 : %d\n", !result);
}