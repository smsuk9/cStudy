#include <stdio.h>

//함수에도 메모리 주소가 존재한다.
//함수도 메모리 공간에 저장이 되어있다가
//필요한 순간에 호출하여 실행한다.
//C언어는 함수의 주소를 저장할 수 있는 포인터 변수를 제공하며
//이를 '함수 포인터'라고 부른다.

//반환형 (*포인터변수명) (인자,인자);

int myFunc(int num1, int num2) {
	return num1 + num2;
}
void main() {
	int (*fptr)(int num1, int num2);//함수 포인터의 선언
	fptr = myFunc;//함수 포인터에 저장
	int c = fptr(1, 2);
	printf("fptr : %d\n", c);

}