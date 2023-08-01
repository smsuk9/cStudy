#include<stdio.h>

void main() {
	//자료형이란
	//데이터 (값 혹은 변수) 를 표현하는 방법
	//데이터의 크기와 형태를 표현하는 역할

	//기본 자료형
	//문자형 : char		1byte
	//정수형 : short		2byte
	//			   int			4byte
	//			   long		4byte
	//			   longlong 8byte
	//실수형 : float		4byte
	//			  double	8byte

	//문자형 : ''안에다 사용을 한다. 한글자만 들어갈 수 있다.
	//(알파벳,한글자 짜리 한글, 기호) +,-,*,/,특수문자

	//정수 : 소수점이 없는 숫자 (양의 정수, 0, 음의 정수)
	//실수 : 소수점이 있는 숫자 (1.23, 3.14)

	//sizeof 연산자
	//각 자료형의 크기는 byte 단위로 정의되어 있다.
	//c언어는 다양한 자료형의 크기를 계산해서 정수형태로
	//반환하는 sizeof 연산자를 제공한다.

	//c언어에서 printf함수는 형식화된 출력을 수행한다.
	//f -> format

	//printf("형식문자",데이터);
	//정수형 형식문자 :%d
	//문자형 형식문자 :%c
	//실수형 형식문자 :%f

	//정수 및 실수의 표현
	int num; //정수형 변수의 선언
	num = 100;//정수형 변수 num에 100을 대입
	printf("num의 값 : %d\n", num);
	// \n : 개행기능이 있는 문자
	printf("num의 크기 : %dbyte\n", sizeof(num));

	float f = 3.14f; //실수형 변수의 초기화

	printf("f의 값 : %.2f\n", f);

	printf("f의 크기 : %d\n", sizeof(f));

	//문자의 표현
	//컴퓨터는 숫자를 통해서 데이터를 인식하고 표현한다.
	//이때 사용하는게 아스키코드이다.
	//아스키코드는 알파벳과 일부 특수 문자에 각각 대응하는
	//숫자를 지정을 해둔 것.

	char ch = 'A'; //char형 변수 ch를 A로 초기화
	printf("ch의 값 : %c\n", ch);
	printf("ch의 크기 : %d\n", sizeof(ch));

	char ch1 = 65;

	printf("ch1의 값 : %c\n", ch1);

	int il = 67;

	printf("il의 값 : %c\n", il);

	printf("제 이름은 %s입니다.\n", "이현준");

	char ch2[] = "이현준";

	printf("제 이름은 %s입니다.\n", ch2);

}