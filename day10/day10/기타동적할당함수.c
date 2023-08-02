#include <stdio.h>
#include <stdlib.h>
#define true 1

void main() {
	//메모리를 동적 할당을 할 때는 malloc을 가장 많이 사용하지만
	//malloc외에도 다른 동적 할당 함수들이 있다.

	//calloc함수
	//calloc()함수는 인자로 할당하고자 하는 메모리 공간의 개수와
	//각 메모리별 공간의 크기를 전달받는다.

	//malloc(sizeof(int)*30); 120byte
	//calloc(30, sizeof(int)); 120byte

	//realloc함수
	//malloc함수나 calloc함수와 목적이 조금 다른 동적 할당 함수이다.
	//realloc함수는 힙 영역에 할당 되어있는 메모리 공간의 크기를 조절하는
	//을 가지고 있다.

	//realloc(포인터 변수, 새로운 크기);

	int* ptr; //할당된 메모리의 주소를 저장할 포인터
	int count = 0; //입력받은 데이터의 개수
	int maxSize = 3; //할당받은 메모리의 크기
	int num;

	ptr = (int*)calloc(maxSize, sizeof(int)); // 12byte
	while (true)
	{
		printf("정수를 입력하세요(-1입력시 종료 : ");
		scanf_s("%d", &num);
		if (num == -1) {
			break;
		}

		//입력한 정수의 개수가 메모리 만큼 찼을 경우
		if (count == maxSize) {
			maxSize += maxSize;
			//재할당을 통한 메모리 영역확장
			ptr = (int*)realloc(ptr, maxSize * sizeof(int));
		}

		//사용자가 입력한 정수로 힙 영역 메모리에 대입
		ptr[count++] = num;

		for (int i = 0; i < count; i++) {
			printf("%d ", ptr[i]);
		}
		printf("\n");
	}
		free(ptr);

}