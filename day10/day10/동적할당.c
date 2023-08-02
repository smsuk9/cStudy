#include <stdio.h>
#include<stdlib.h>
//지역변수, 전역변수, 정적변수와 같은 변수들은
//생명주기가 결정이 되어있다.

//사용자가 생성과 소멸의 시기를 결정할 수 있는 변수를
//선언하는 것이 '메모리를 동적할당 받는다'라고 한다.
void main() {
	//malloc()함수
	//malloc(size) : malloc()함수는 인자로 할당받고자 하는
	//메모리 공간의 크기를 바이트 단위로 전달받는다.
	//malloc() 함수는 메모리를 할당받고 주소를 반환한다.
	//malloc()함수로부터 반환받은 주소값을 담아줄 포인터 변수가
	//필요한데 void* 이기 때문에 형변환이 필요하다.
	//int* numPtr = (int*)malloc(sizeof(int));

	//사용자가 해제를 원한다면 힙 영역의 메모리 주소의 해제를
	//담당하는 free()함수를 호출하면 된다.
	//free(포인터 변수)

	int* iptr = (int*)malloc(sizeof(int) * 5);//int형 5만큼
	double* dptr = (double*)malloc(sizeof(double) * 3);//double형 3만큼

	//할당된 메모리 공간에 int형 크기만큼씩 순차적으로 접근하기
	for (int i = 0; i < 5; i++) {
		iptr[i] = 10 * (i + 1);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", iptr[i]);
	}
	printf("\n");

	dptr[0] = 3.14; dptr[1] = 1.23; dptr[2] = 8.54;
	printf("%.2f %.2f %.2f\n", dptr[0], dptr[1], dptr[2]);

	//힙 영역에 할당했던 메모리 해제
	free(iptr);
	free(dptr);

}