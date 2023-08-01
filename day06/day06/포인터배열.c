#include <stdio.h>

void main() {
	//포인터"배열"
	//배열"포인터"

	int arr[3]; //3의 크기를 가진 정수형 배열 arr선언
	//정수만 들어갈 수 있다.

	char cArr[3]; //3의 크기를 가진 문자형 배열 cArr
	//문자형만 들어갈 수 있다.

	int* pIarr[3]; //3의 크기를 가진 정수형 포인터 배열
	//주소만 들어갈 수 있다.

	int n1 = 3, n2 = 6, n3 = 9;
	int* ptr1 = &n1, ptr2 = &n2, ptr3 = &n3;

	//포인터배열 : 요소로서 주소값을 가지고 있다.

	int* pArr[3] = { ptr1,ptr2,ptr3 };

	printf("pArr배열의 요소의 값 : %d %d %d \n", *pArr[0], *pArr[1], *pArr[2]);
	printf("pArr배열의 요소의 값 : %d %d %d \n", **(pArr), **(pArr+1), **(pArr+2));

	//포인터배열의 이름은 배열의 첫번째요소의 주소와 같다.
	//포인터배열의 이름은 배열의 첫번째 요소가 갖고 있는 값과는 다르다. 

}