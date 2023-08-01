#include <stdio.h>

//함수의 정의는 main 위에서 한다.
//두 수를 더하는 함수
int add(int, int);
void println();
int sumTotal();
int value(int, int);
void f4(int);
int f5(int, int);
void f6(int);
void main() {
	//표준함수 : c언어에서 기본적으로 제공하는 함수
	//		- printf(), scanf(), sizeof(), strcpy(), strcat(), strcmp()

	//사용자 정의 함수 : 많은 표준함수가 있지만 표준함수만으로는 모든 기능을
	//구현할 수 없기 때문에 개발자의 명령들을 담은 기능

	//함수의 구성
	//1. 선언부 : 함수의 정의를 적는 부분
	//			- 함수의 정의는 함수 밖에서 해야 한다.
	//2. 호출부 : 정의된 함수를 호출하는 부분
	//			- 함수의 호출은 함수 안에서 해야 한다.

	//함수의 선언(기본형)
	//반환형 함수명(매개변수,매개변수){
	//			명령들의 모음;
	//			return 반환값;
	//}

	//반환형 : 함수롤부터 반환될 데이터의 자료형과 일치하게 적는다.
	//함수명 : 함수를 호출할 때 사용하는 함수의 이름
	//매개변수(파라미터,인자) : 함수를 호출할 때 전달한 값을 받아서 함수 내부로
	//										전달해주는 역할을 하는 변수(일반 변수의 선언처럼 사용)


	//함수의 4가지 형태
	//- 매개변수가 있고, 반환값이 있는 형태
	//- 매개변수가 있고, 반환값이 없는 형태
	//- 매개변수가 없고, 반환값이 있는 형태
	//- 매개변수도 없고, 반환값도 없는 형태

	int c = add(1, 2);//함수의 호출
	printf("%d\n", c);


	//1~10까지 출력하는 f1()함수 작성하기
	//1 2 3 4 5 6 7 8 9 10
	println();

	//1 ~ 10까지 총합을 구하는 f2 함수 작성하기
	printf("1~10까지 총합 : %d\n", sumTotal());

	//두 수를 비교해서 더 큰 수를 반환하는 함수 f3() 만들기
	//두 수는 매개변수로 전달하기

	int num1 = 4;
	int num2 = 3;
	printf("%d와 %d 비교 : %d\n", num1, num2, value(num1, num2));

	//매개볏수로 dan을 입력받아 해당 구구단을 출력하는 f4함수 만들기
	f4(2);

	//s~e까지의 총합을 구하는 함수f5 만들기
	//s> e일경우에도 정상적으로 총합을 구하기

	int value1;
	int value2;
	printf("입력 1 : ");
	scanf_s("%d", &value1);
	printf("입력 2 : ");
	scanf_s("%d", &value2);

	printf("%d와 %d의 총합 : %d\n", value1, value2, f5(value1, value2));

	f6(9876);

	//매개변수 num으로 4자리 숫자가 주어졌을 때 각 자리수의 값을
	//출력하는 f6함수 만들기
}

int add(int num1, int num2) {
	return num1 + num2;
}

void println() {
	for (int i = 1; i <= 10; i++) {
		printf("%d  ", i);
	}
	printf("\n");
}

int sumTotal() {
	int total = 0;
	for (int i = 1; i <= 10; i++) {
		total += i;
	}
	return total;
}
int value(int num1, int num2) {
	int value = 0;
	if (num1 > num2) {
		value = num1;
	}
	else if (num1 < num2) {
		value = num2;
	}
	else {
		value = -1;
	}
	return value;
}

void f4(int num) {
	for (int i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", num, i, num * i);
	}
}

int f5(int s, int e) {
	int total = 0;
	if (s > e) {
		int exValue = e;
		e = s;
		s = exValue;
	}
	for (int i = s; i <= e; i++) {
		total += i;
	}
	return total;
}

void f6(int num) {
	int num1 = num / 1000;
	int num2 = num / 100 - num1 * 10;
	int num3 = num / 10 - num1 * 100 - num2 * 10;
	int num4 = num - num1 * 1000 - num2 * 100 - num3 * 10;

	printf("%d의 천의 자리는 %d\n", num, num1);
	printf("%d의 백의 자리는 %d\n", num, num2);
	printf("%d의 십의 자리는 %d\n", num, num3);
	printf("%d의 일의 자리는 %d\n", num, num4);
}