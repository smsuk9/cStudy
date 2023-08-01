#include <stdio.h>
//2. 매크로 상수
//컴파일러는 가장 먼저 매크로 상수를 처리합니다.
//프로그램이 실행되기 전에 정의가 되는 것.
#define PI 3.14

void main() {
	//변수는 몇변이고 대입이 가능하다.
	//상수 한번 값을 넣어 놓으면 대입이 아예 불가능.

	//1. 심볼릭 상수
	const int LENGTH = 10;
	//constant(상수)

	//const = java의 final 기능

	//LENGTH = 5; 대입 불가능

	//PI = 1.23; 대입 불가능 출력 가능

	printf("%d\n", LENGTH);
	printf("%f\n", PI);

}