#include <stdio.h>

void main() {
	//unsigned : 부호가 없는
	//음수를 표현할 수 없고 표현할 수 있는 양수의 양이
	//2배가 된다.

	//부호가 없는 데이터
	//char -> 1byte -> -128 ~ 127

	//unsigned char -> 0~ 255

	char cnum = 128; //char형의 최대값은 127
	printf("%d\n", cnum); //값이 제대로 나오지 않음
	unsigned char unum = 128;
	printf("%d\n", unum);
	short snum = 32768;//short의 최대값 32767;
	printf("%d\n", snum);
	unsigned short usnum = 32768;
	printf("%d\n", usnum);
	//원래 자료형의 최대값보다 큰 값을 저장할 수 있다.


}