#include <stdio.h>
#include <stdlib.h>

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

}