#include <stdio.h>

typedef struct
{
	char title[100];
	int pulbished;
}Book;

typedef struct
{
	Book book[3]; //��� ������ ����ü ������ ����
}Bag;

void main() {
	Bag myBag = {
							{
								{"ȫ�浿��",2000},
								{"���ݼ���",2006},
								{"����",2010}
							} 
						};

	for (int i = 0; i < 3; i++)
	{
		printf("å ���� : %s\n", myBag.book[i].title);
		printf("�Ⱓ�⵵ : %d\n", myBag.book[i].pulbished);
	}
}