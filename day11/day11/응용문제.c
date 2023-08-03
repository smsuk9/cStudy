#include <stdio.h>
#define true 1

typedef struct 
{
	int xpos;
	int ypos;
}Point;

//두 멤버변수를 대상으로 저장된 값을 서로 바꾸는 함수를
//정의하고 이를 호출하는 프로그램 작성하기

void Reverse(Point* point1,Point* point2) {
	int temp = point1->xpos;
	point1->xpos = point2->xpos;
	point2->xpos = temp;
	temp = point1->ypos;
	point1->ypos = point2->ypos;
	point2->ypos = temp;
}

void PointPrint(Point point1,Point point2) {
	printf("xpos1 : %d , ypos1 : %d\n", point1.xpos, point1.ypos);
	printf("xpos2 : %d , ypos2 : %d\n", point2.xpos, point2.ypos);
}
void main() {
	Point p1 = { 3,6 };
	Point p2 = { 4,9 };
	Reverse(&p1, &p2);
	PointPrint(p1, p2);

}