#include <stdio.h>
//방금전 봤던 예제에서 실제 값이 변경이 이루어지게
//하려면 함수의 인자로 실제 값을 전달해야 한다.
//그리고 그 실제 값은 메모리에 저장이 되어 있다.
//따라서 Call-By-Reference방식으로 실제 저장되어있는
//메모리의 주소값을 전달해주면 실제 값을 변경할 수 있다.

void swapNumber(int*, int*);
void main() {
	int number1 = 33;
	int number2 = 99;
	swapNumber(&number1, &number2);
	printf("함수 호출 완료 후 확인한 결과, number1 : %d number2 : %d\n", number1, number2);
}

void swapNumber(int* ptr1, int* ptr2) {
	//실제 주소에 저장된 값을 서로 교환합니다.
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("함수 안에서 확인한 결과, number1 : %d number2 : %d\n", *ptr1, *ptr2);
}