#include <stdio.h>

typedef struct
{
	int s_id;
	int age;
}Student;

Student setStudent(int s_id, int age) {
	Student s = { s_id,age };
	return s;	//����ü������ ��ȯ�ϴ� �Լ�
}

//�л��� ������ ����ϴ� �Լ�
void printStudent(Student s) {
	printf("�й� : %d ���� : %d\n", s.s_id, s.age);
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
	//����ü ������ �Լ��� �Ű������� �����ϰų�
	//�Լ��κ��� ��ȯ���� �� �ֽ��ϴ�.


	Student humen = setStudent(20230803, 10);
	printStudent(humen);

	Point p1 = { 33,66 };
	Point p2 = { 6,3 };
	setPosSameValue(&p1);
	printPoint(p1);
	setPosSameValue(&p2);
	printPoint(p2);


}