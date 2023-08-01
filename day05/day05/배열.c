#include <stdio.h>
#define true 1
#define false 0

int main() {
	//배열은 다수의 데이터를 저장하고 처리하기 위해
	//사용하는 데이터 표현 방법

	//여러개의 데이터를 하나의 묶음으로 관리할 수 있는
	//데이터 구조입니다.

	//변수를 여러개 만들지 않아도 된다는 장점이 있다.

	//배열의 사용법
	//배열의 선언

	//자료형 배열명[크기];

	/*int arr[3];*///크기가 3인 정수형 배열 arr의 선언

	//배열의 초기화
	//배열을 선언함과 동시에 값을 집어 넣어 놓는 것
	//자료형 배열명[크기] = { 값1, 값2, 값3, ... };

	//int iArr[3] = { 10, 20, 30 };
	//배열을 초기화 할 때는 크기를 생략할 수 있다.
	//컴파일러가 초기화 리스트에 들어있는 요소의 개수를
	//확인한 후 할당해야할 배열의 크기를 정해준다.
	/*int iArr[] = { 10,20,30,40,50,60,70 };*/

	//배열에 대한 접근
	//선언된 배열의 방에 값을 넣거나,
	//값이 들어있는 배열의 방에 접근해서 값을 꺼내오는
	//행위를 하기 위해서는 배열의 각각의 방에 접근할 수
	//있어야 한다.

	//배열의 특정 방에 접근하는법
	//배열명[index] -> 변수처럼 사용하면 된다.

	//대입
	//배열명[index] = 값;

	//출력
	//printf("형식문자", 배열명[index]);

	/*int odd[3];*/ //배열의 선언
	//선언을 하고 나면 초기화 리스트를 이용해 값을 넣는 것이
	//불가능 하다. 각각의 방에 접근하여 대입을 해야 한다.

	//int even[] = { 2,4,6,8,10 };//배열의 초기화

	//odd[0] = 1;
	//odd[1] = 3;
	//odd[2] = 5;

	//배열의 출력
	//printf("%d %d %d\n", odd[0], odd[1], odd[2]);
	//
	//for (int i = 0; i < sizeof(even) / sizeof(int); i++)
	//{
	//	printf("%d\n", even[i]);
	//}
	//printf("-------------------\n");
	//for (int i = 0; i < sizeof(odd) / sizeof(int); i++) {
	//	printf("odd[%d] : ", i);
	//	scanf_s("%d", odd+i);
	//}
	//for (int i = 0; i < sizeof(odd) / sizeof(int); i++) {
	//	printf("odd[%d] : %d\n", i,odd[i]);
	//}

	int nArr[] = { 1,2,3,4,5,6,7,8,9,10 };

	//배열의 모든 요소의 총 합 구하기
	int sum = 0;
	for (int i = 0; i < sizeof(nArr) / sizeof(int); i++) {
		sum += *(nArr + i);
	}
	printf("총합 : %d\n", sum);

}