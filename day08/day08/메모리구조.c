#include <stdio.h>

int outer = 10; //전역변수

void main() {
	//프로그램을 실행하면 메모리 공간을 마련한다.
	//메모리 공간은 크게 4가지로 나눌 수 있다.
	//코드(Code)영역
	//		-	프로그램의 코드를 저장하는 영역
	//데이터 영역
	//		-	변수가 할당되는 공간
	//		-	전역변수, static(정적 변수)
	//스택 영역
	//		- 변수가 할당되는 공간
	//		- 지역변수, 매개변수(인자)
	//		- 함수가 종료되면 소멸되는 특징
	//힙 영역
	//		- 생성과 소멸의 시점이 정해진 변수

	int inner = 3; //지역변수
	inner++;
	printf("%d\n", inner);
	inner++;


}