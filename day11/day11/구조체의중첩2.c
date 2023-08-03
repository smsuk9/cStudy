#include <stdio.h>

typedef struct
{
	char title[100];
	int pulbished;
}Book;

typedef struct
{
	Book book[3]; //멤버 변수로 구조체 변수를 선언
}Bag;

void main() {
	Bag myBag = {
							{
								{"홍길동전",2000},
								{"연금술사",2006},
								{"개미",2010}
							} 
						};

	for (int i = 0; i < 3; i++)
	{
		printf("책 제목 : %s\n", myBag.book[i].title);
		printf("출간년도 : %d\n", myBag.book[i].pulbished);
	}
}