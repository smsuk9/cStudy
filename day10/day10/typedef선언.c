#include <stdio.h>

//typedef는 기존의 존재하는 자료형에 새 이름을 부여하는 기능
//이전의 이름이 없어지는건 아니고 새 이름을 추가를 해주는 것

typedef int INTEGER;
typedef int* PINT;
typedef unsigned int UINT;

typedef struct point 
{
	int x;
	int y;
}Point;

struct Person
{
	char name[30];
	int age;
};

typedef char* String;
void main() {
	INTEGER num = 3;
	PINT pnum = &num;
	UINT unum = 5;

	String str = "Hello";

	printf("%d %d %d\n", num, *pnum, unum);
	printf("%s\n", str);

	Point point = { 30,60 };

	//정의된 구조체에 대한  typedef선언
	typedef struct Person Person;

	Person p1 = { "홍길동",30 };

	printf("x : %d, y : %d\n", point.x, point.y);
	printf("이름 : %s, 나이 : %d\n", p1.name, p1.age);
}