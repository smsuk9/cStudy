#include <stdio.h>

void main() {
	int myArr[3] = { 10,20,30 };
	printf("배열의 각 요소의 주소 확인\n");
	printf("배열의 이름 : %p\n", myArr);
	printf("myArr[0] = %p\n", &myArr[0]);
	printf("myArr[0] = %d\n", *(myArr+0));
	printf("myArr[0] = %d\n", myArr[0]);

	//배열의 이름은 배열의 첫번째 주소를 가지고 있다.
	//배열의 이름은 배열의 첫번째 주소를 가리키는 포인터 변수이다.

	//하지만 배열의 이름은 다른 포인터 변수들과는 달리 값의
	//저장이 불가능한 상수 형태의 포인터이다.

	//포인터를 이용한 배열의 연산


	for (int i = 0; i < 3; i++) {
		printf("myArr[%d] : %d\n", i, *(myArr + i));
	}
}