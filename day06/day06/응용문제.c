#include <stdio.h>
void main() {
	//길이가 5인 배열 arr을 선언하고 10,20,30,40,50으로
	//초기화한다. 이 배열의 첫번째 요소를 가리키는 포인터변수
	//ptr을 선언한다. 포인터 변수 ptr에 저장된 값을 증가시키는
	//방식으로 배열의 요소에 접근하여 배열의 모든 요소를 출력하세요

	//출력결과
	//10 20 30 40 50
	//int arr[5] = { 10,20,30,40,50 };
	//int* ptr = arr;
	////ptr = &arr[0];
	//for (int i = 0; i < 5; i++) {
	//	printf("arr[%d]=%d\n",i,*(ptr+i));
	//}
	//printf("----------------------\n");
	//길이가 8인 배열 iArr을 선언하고 1,2,3,4,5,6,7,8로 초기화한다.
	//이 배열의 마지막 요소를 가리키는 포인터 변수 iptr을 선언한다.
	//포인터 변수 iptr에 저장된 값을 감소시키는 방식으로 배열의 모든 요소에
	//접근하여 홀수들의 총합만 구하기

	//int iArr[8] = { 1,2,3,4,5,6,7,8 };
	//int* iptr = iArr + 7;
	//int total = 0;
	//for (int i = 0; i < 8; i++) {
	//	if (*(iptr - i) % 2 == 1) {
	//	total += *(iptr - i);
	//	}
	//}
	//printf("total : %d", total);

	//길이가 8인 배열 arr를 선언하고 이를 1,2,3,4,5,6,7,8로 초기화합니다.
	//이 배열의 첫 번째 요소를 가리키는 포인터 변수와 마지막 요소를 가리키는 포인터 변수를 선언한 뒤, 두 포인터
	//변수를 활용하여 arr의 요소가 역순으로 나열되도록 변경해 보세요.
	//1 2 3 4 5 6 7 8
	//8 7 6 5 4 3 2 1

	int arr[8] = { 1,2,3,4,5,6,7,8 };
	int* firstParr = arr;
	int* finalParr = arr + 7;
	int reverseArr[8] = { 0, };
	const int MAX = 8;
	for (int i = 0; i < MAX; i++) {
		*(reverseArr + i) = *(finalParr - i);
	}
	for (int i = 0; i < MAX; i++) {
		*(firstParr + i) = *(reverseArr + i);
	}
	for (int i = 0; i < MAX; i++){
		printf("%d ", *(arr+i));
	}
}