#include <stdio.h>

void main() {
	//자료형의 변환
	//하나의 자료형에서 다른 자료형으로 데이터를 변환하는 것을 의미
	//1. 자동 형변환
	//2. 명시적 형변환(강제 형변환)

	double number = 10;

	printf("%f\n", number);

	int num = 1.2345;

	printf("%d\n", num);
	//int형은 소수점 이하를 표현할 수 없어서
	//소수점 이하는 버려지게 된다.
	//'소수부의 손실'이라고 한다.

	char ch = 65;
	printf("%c\n", ch);

	//강제형변환
	//자동으로 형변환이 일어나지 않을 때
	//강제로 형변환을 하는 것.

	//(자료형) 데이터;
	printf("%d\n", (int)3.1415);
	printf("%f\n", (double)10);
	byte a = 127;
	a++;

	printf(" % d\n", ch);
}