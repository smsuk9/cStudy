#include <stdio.h>
#define true 1

typedef struct Person
{
	char name[30];
	int age;
}P;
void main() {
	//int arr[3] ������ 3�� ������ �� �ִ� �迭
	//P parr[3] ����� ������ 3�� ������ �� �ִ� �迭

	//���̰� 3�� ����ü �迭�� �ʱ�ȭ
	P pArr[3] = { {"ȫ�浿",30},
						{"��浿",25},
						{"�ڱ浿",29}
					};
	printf("%s\n", pArr[0].name);
	
	P pArr2[3];
	strcpy(pArr2[0].name, "���ڵ�");
	strcpy(pArr2[1].name, "����");
	strcpy(pArr2[2].name, "��ȣ");

	pArr2[0].age = 28;
	pArr2[1].age = 84;
	pArr2[2].age = 29;

	(*(pArr2 + 2)).age = 30;

	for (int i = 0; i < 3; i++)
	{
		printf("�̸��� %s�̰�, ���̴� %d���Դϴ�.\n", pArr2[i].name, pArr2[i].age);
	}
}