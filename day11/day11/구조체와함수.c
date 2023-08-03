#include <stdio.h>

typedef struct
{
	int s_id;
	int age;
}Student;

Student setStudent(int s_id, int age) {
	Student s = { s_id,age };
	return s;	//구조체변수를 반환하는 함수
}

//학생의 정보를 출력하는 함수
void printStudent(Student s) {
	printf("학번 : %d 나이 : %d\n", s.s_id, s.age);
}

typedef struct {
	int xpos;
	int ypos;
}Point;

void setPosSameValue(Point* ptr) {
	if (ptr->xpos > ptr->ypos) {
		ptr->ypos = ptr->xpos;
	}
	else {
		ptr->xpos = ptr->ypos;
	}
}

void printPoint(Point point) {
	printf("x : %d, y : %d\n", point.xpos, point.ypos);
}

void main() {
	//구조체 변수를 함수의 매개변수로 전달하거나
	//함수로부터 반환받을 수 있습니다.


	Student humen = setStudent(20230803, 10);
	printStudent(humen);

	Point p1 = { 33,66 };
	Point p2 = { 6,3 };
	setPosSameValue(&p1);
	printPoint(p1);
	setPosSameValue(&p2);
	printPoint(p2);


}