#include <stdio.h>
typedef struct
{
	char name[30];
	int age;
}Person;

//����ü�� ����Ǽ��� ����� ������ ����
typedef struct 
{
	int x;
	int y;
}Point;

typedef struct 
{
	Point* start;	//Point�� ����ü ������ �ּҸ� ���� �� �ִ�
	Point* end;	// �����ͺ���
}Line;

void main() {
	int num = 30;
	//������ �����ͺ��� ptr�� num�ּҸ� ����
	int* ptr = &num;

	Person p1 = { "ȫ�浿",35 };

	Person* ptr2 = &p1;
	printf("%s %d\n", (*ptr2).name, (*ptr2).age);
	//-> (ȭ��ǥ ������) : .�����ڿ� ���� ������ �ϴ� ������
	//��ȣ�� �� ���� �������̹Ƿ� �ſ� ���ϴ�.
	printf("%s %d\n", ptr2->name, ptr2->age);

	Point p3 = { 10,8 };
	Point p4 = {20,40};

	Line line = {&p3,&p4};

	printf("���� ������ : [%2d,%2d]\n", line.start->x, line.start->y);
	printf("���� ���� : [%2d,%2d]\n", line.end->x, line.end->y);

}