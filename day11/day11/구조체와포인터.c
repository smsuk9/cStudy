#include <stdio.h>
typedef struct
{
	char name[30];
	int age;
}Person;

//구조체의 멤버션수로 선언된 포인터 변수
typedef struct 
{
	int x;
	int y;
}Point;

typedef struct 
{
	Point* start;	//Point형 구조체 변수의 주소를 담을 수 있는
	Point* end;	// 포인터변수
}Line;

void main() {
	int num = 30;
	//정수형 포인터변수 ptr에 num주소를 저장
	int* ptr = &num;

	Person p1 = { "홍길동",35 };

	Person* ptr2 = &p1;
	printf("%s %d\n", (*ptr2).name, (*ptr2).age);
	//-> (화살표 연산자) : .연산자와 같은 역할을 하는 연산자
	//기호가 더 적고 직관적이므로 매우 편리하다.
	printf("%s %d\n", ptr2->name, ptr2->age);

	Point p3 = { 10,8 };
	Point p4 = {20,40};

	Line line = {&p3,&p4};

	printf("선의 시작점 : [%2d,%2d]\n", line.start->x, line.start->y);
	printf("선의 끝점 : [%2d,%2d]\n", line.end->x, line.end->y);

}