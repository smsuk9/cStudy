#include <stdio.h>

void readArray(int*, int);

void main() {
	//배열을 전달받는 함수
	//배열의 이름은 배열의 시작 주소값을 가지고 있다는 점을 인지하고 있어야 한다.

	int arr[3] = { 3,6,9 };
	readArray(arr, 3);
	//포인터변수를 매개변수로 지정할 때는 값이 아닌 주소값을
	//전달 받으므로 함수 내에서 값의 변경을 진행할 경우 전달해준
	//배열도 함께 변경이 된다.
}
//배열을 전달받을 수 있는 int형 포인터변수 arr
					//int* arr or int arr[]
void readArray(int* arr, int length) {
	printf("배열의 요소 읽어보기 : [");
	for (int i = 0; i < length; i++) {
		printf("%d", arr[i]);
		if (i + 1 < length) {
			printf(",");
		}
		else {
			printf("");
		}
	}
	printf("]\n");
}