#include <stdio.h>

typedef struct 
{
	char title[100];
	int pulbished;
}Book;

typedef struct 
{
	Book book; //멤버 변수로 구조체 변수를 선언
}Bag;
void main() {
	//구조체의 멤버로 다른 구조체를 사용할 수 있다.
	//새로운 구조체를 멤버로 선언할 때 멤버 변수로
	//기존에 선언되어 있는 구조체를 사용해 구조체 변수를
	//선언하는 방식이다.

	//구조체 변수를 초기화
	//이때 멤버변수로 또한 초기화
	Bag myBag = { {"홍길동전",2000}};

	printf("책 제목 : %s\n", myBag.book.title);
	printf("출간년도 : %d\n", myBag.book.pulbished);

}