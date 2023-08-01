#include <stdio.h>

void main() {
	//문자열은 문자로 이루어진 배열
	//char greet[] = "Hello";

	//메모리 공간에 문자열 "Hello가 저장되고", 문자열의 첫번째 글자
	//H의 주소가 포인터 변수 pGreet에 저장된다.

	//char* pGreet = "Hello";

	//printf("%s", pGreet);

	char good[] = "Good";
	char* bad = "Bad";

	printf("%s %s\n", good,bad);

	//배열기반의 문자열 변수
	good[0] = 'H';//가능
	printf("%s\n", good);
	//good = "New Good"; 불가능
	//배열의 이름은 상수이기 때문에 값을 다시 대입하는것이 불가능하다.
	//새로운 주소값을 할당 할 수 없다.
	
	//포인터 기반 문자열 변수
	//bad[0] = 'S';//불가능
	//포인터 기반 문자열은 개별 요소값 할당 불가능
	bad = "New Bad";
	printf("%s\n", bad);

}