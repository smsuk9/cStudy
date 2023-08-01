#include <stdio.h>

void swapNumber(int, int);

void main() {
	//함수를 정의할 때 매개 변수를 기본 형태의 변수로
	//지정하면 함수를 호출할 때 단순히 값을 복사해서
	//전달을 한다.
	//이러한 방식을 Call-By-Value라고 한다.
	//값을 복사하여 전달하기 때문에 해당 값은 함수 내에서만
	//사용되고 이후에는 소멸된다.

	int number1 = 33;
	int number2 = 99;
	swapNumber(number1, number2);
	printf("함수 호출 후 확인한 결과, num1 : %d, num2 : %d\n", number1, number2);
}

void swapNumber(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
	printf("함수 안에서 확인한 결과, num1 : %d, num2 : %d\n", num1, num2);
}