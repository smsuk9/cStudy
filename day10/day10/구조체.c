#include <stdio.h>
#define true 1

//구조체의 선언
//struct 구조체명 {
//		변수1,
//		변수2,
//		변수3
//};

typedef struct Person
{
	char name[30]; //이름
	int age; //나이
	//char* name;
}P;
void main() {
	//구조체는 하나 이상의 변수를 한꺼번에 묶어서 만드는
	//사용자 정의 자료형이라고 생각하면 된다.
	//각 변수는 각각의 메모리 공간을 할당 받지만
	//모두 구조체에 속하면서 하나의 정보를 표현하는
	//멤버변수의 역할을 수행한다.

	//구조체 변수의 선언
	//struct 구조체명 구조체변수명;
	P p1;

	//p1.name = "홍길동";
	//strcpy(str1, str2);
	//str2의 내용을 str1의 주소에 접근을 해서 복사를 한다.
	strcpy(p1.name, "홍길동");
	p1.age = 40;
	printf("이름 : %s\n", p1.name);
	printf("나이 : %d\n", p1.age);

	//구조체변수의 초기화
	P p2 = { "김코딩",30 };
	printf("이름 : %s\n", p2.name);
	printf("나이 : %d\n", p2.age);
}