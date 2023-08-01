#include <stdio.h>

void main() {
	//비교연산자
	// >, <, >=, <=, ==, !=
	//c언어에서 참 -> 1, 거짓 -> 0
	/*
	int a = 10, b = 11;
	printf("a == b : %d\n",a == b);
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b : %d\n", a >= b);
	printf("a <= b : %d\n", a <= b);
	printf("a != b : %d\n", a != b);
	*/

	 unsigned short num;
	printf("정수를 입력해주세요\n");
	scanf_s("%d", &num);

	printf("2진수 변환 : ");
	//이진수 출력
	for (int i = 3; i >= 0; --i) { //8자리 숫자까지 나타냄
		int result = num >> i & 1;
		printf("%d", result);
	}
}