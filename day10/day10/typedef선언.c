#include <stdio.h>

//typedef�� ������ �����ϴ� �ڷ����� �� �̸��� �ο��ϴ� ���
//������ �̸��� �������°� �ƴϰ� �� �̸��� �߰��� ���ִ� ��

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

	//���ǵ� ����ü�� ����  typedef����
	typedef struct Person Person;

	Person p1 = { "ȫ�浿",30 };

	printf("x : %d, y : %d\n", point.x, point.y);
	printf("�̸� : %s, ���� : %d\n", p1.name, p1.age);
}