#include <stdio.h>
#include <string.h>
#define true 1

void main() {
	//����ڷκ��� �� ���� �̸��� �Է¹޾� �� �̸��� ������ �Ǵ�
	//���� ������ �˷��ִ� ���α׷� �ۼ��ϱ�

	//����
	//���ȣ
	//���ȣ

	//�����ϴ�.
	/*char name1[100];
	char name2[100];
	printf("ù��° �̸� �Է� : ");
	gets(name1);

	printf("�ι�° �̸� �Է� : ");
	gets(name2);

	if (!strcmp(name1, name2)) {
		printf("�����ϴ�\n");
	}*/

	//�� ���� ���ڿ��� �Է¹޾� �� ���ڿ����� ������� ����ϴ�
	//���α׷� �ۼ��ϱ�

	//����
	//hello
	//I Love You

	//I Love You
	//hello

	/*char name1[100];
	char name2[100];
	printf("�Է� 1 : ");
	gets(name1);
	printf("�Է� 2 : ");
	gets(name2);

	if (strlen(name1) > strlen(name2)) {
		puts(name1);
		puts(name2);
	}
	else {
		puts(name2);
		puts(name1);
	}*/

	//������ ������ ���ڿ��� �Է¹޾Ƽ� �� �ȿ� �����ϴ� ����(1~9)��
	//������ ���ϴ� ���α׷� �ۼ��ϱ�
	//�Էµ� ���ڿ����� ����,����,��ȣ���� �������� �� �ִ�.
	//���ÿ� ���� ������ �ո� ���Ͽ� ����ϼ���

	//����
	//���ڿ� �Է� : aa9we2a3
	//���� : 14

	//�ƽ�Ű�ڵ� Ȱ���ϱ� : 1~9�� �ش��ϴ� �ƽ�Ű�ڵ� 49~57

	char stringCode[100];
	gets(stringCode);
	int i = 0;
	int temp = 0;
	while (i < strlen(stringCode))
	{
		if (stringCode[i] >= 49 && stringCode[i] <= 57) {
			switch (stringCode[i])
			{
			case 49:
				temp += 1;
				break;
			case 50:
				temp += 2;
				break;
			case 51:
				temp += 3;
				break;
			case 52:
				temp += 4;
				break;
			case 53:
				temp += 5;
				break;
			case 54:
				temp += 6;
				break;
			case 55:
				temp += 7;
				break;
			case 56:
				temp += 8;
				break;
			case 57:
				temp += 9;
				break;
			}
		}
		i++;
	}
	printf("���� : %d\n", temp);

}