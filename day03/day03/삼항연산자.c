#include <stdio.h>

void main() {
	//삼항연산자
	//세개의 항을 이용하는 연산자

	//조건 ? 결과1 : 결과2;
	//조건연산의 결과 참이면 결과1을 반환
	//조건연산의 결과 거짓이면 결과2를 반환
	int num;

	printf("정수입력 : ");
	scanf_s("%d", &num);

	int result = num > 0 ? num : num * -1;
	
	printf("절대값 : %d\n", result);
}