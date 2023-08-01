#include <stdio.h>

//포인터 변수를 사용할 때 *연산자를 한번만 쓰면
//'싱글 포인터', 두 번 사용하면 '더블 포인터'
//기본적으로 *연산자를 쓸 수 있는 횟수가 제한이
//되어있는 것은 아니다.

//* 연산자가 두 개 이상 붙는 포인터 변수를
//다중 포인터 변수 라고 한다.
void main() {
	int num = 999;
	int* ptr = &num;
	int** dptr = &ptr;
	int*** tptr = &dptr;

	printf("%d %d %d %d\n", num, *ptr, **dptr, ***tptr);
}