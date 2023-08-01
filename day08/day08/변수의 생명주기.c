#include <stdio.h>

//전역변수
int number = 0;

void printNumber() {
	printf("전역변수 Number는 %d를 저장하고 있다.\n", number);
}

void setNumber() {
	static int staticNum = 0;
	int Num = 0;
	staticNum++;
	Num++;

	printf("StaticNum : %d Num : %d\n", staticNum,Num);
}

void main() {
	//변수의 종류
	//1. 지역변수
	//- 중괄호 내에서 만들어진 변수
	//-for문의 초기값, 함수의 매개변수도 지역변수의 일종이다.
	//-지역변수는 자신이 선언된 지역 외에서는 사용될 수 없다.
	//-변수의 이름은 중복이 되면 안되지만, 선언된 지역이 다른 경우
	//	이름이 중복되어도 문제가 되지 않는다.

	//2. 전역변수
	//- 중괄호 밖에서 선언된 변수
	//-프로그램의 시작과 동시에 메모리 공간에 할당되어 종료될 때까지
	//	존재한다.
	//-프로그램의 모든영역에서 접근이 가능하다.
	//-전역변수와 동일한 이름으로 지역변수가 선언이 되면 해당 지역에서는
	//	지역변수가 우선으로 사용된다.

	//3.정적변수(static)
	//- 전역,지역 어느 위치에서든 선언할 수 있다.
	//- 지역변수가 가진 특징을 어느정도 보완하는 역할을 한다.
	//- 지역변수는 선언된 지역내에서 생성되고 종료되면 소멸되지만
	//- 정적변수는 선언된 지역 내에서 생성되지만, 종료된다고 소멸 x


	int number = 3; //지역변수
	printf("지역변수 number는 %d를 저장하고 있다\n", number);
	printNumber();
	setNumber();
	setNumber();
	setNumber();
	setNumber();
}