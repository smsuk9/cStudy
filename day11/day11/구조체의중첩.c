#include <stdio.h>

typedef struct 
{
	char title[100];
	int pulbished;
}Book;

typedef struct 
{
	Book book; //��� ������ ����ü ������ ����
}Bag;
void main() {
	//����ü�� ����� �ٸ� ����ü�� ����� �� �ִ�.
	//���ο� ����ü�� ����� ������ �� ��� ������
	//������ ����Ǿ� �ִ� ����ü�� ����� ����ü ������
	//�����ϴ� ����̴�.

	//����ü ������ �ʱ�ȭ
	//�̶� ��������� ���� �ʱ�ȭ
	Bag myBag = { {"ȫ�浿��",2000}};

	printf("å ���� : %s\n", myBag.book.title);
	printf("�Ⱓ�⵵ : %d\n", myBag.book.pulbished);

}