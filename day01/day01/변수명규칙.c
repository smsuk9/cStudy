#include<stdio.h>

void main() {
	//변수의 이름은 알파벳(대문자,소문자) , 언더바(_),숫자로만 구성할 수 있다.
	//변수의 이름은 숫자로 시작할 수 없으며 공백을 포함할 수 없다.
	//이미 기능을 가지고 있는 키워드를 변수명으로 사용할 수 없다.(printf)(main)
	//c언어는 알파벳 대소문자를 구별한다.
	//Apple, apple 다른 변수로 인식

	//사용가능한 변수명
	int num = 3; //int는 '정수'를 의미하는 자료형이다.
	int number5 = 5;
	int num_ber = 10;
	int Number = 15;

	//사용이 불가능한 변수명
	//int hello boy = 3; //공백 x
	//int hi#$ = 5; //특수문자
	//int 8number = 8; //숫자로 시작
	//int short = 3; //기능이 있는 키워드

}