#include <stdio.h>
void main() {
	//switch���� �پ��� ������ �˻��� �� �ְ� ����� ���� ����

	//�⺻��
	//switch (�񱳰�) {
	//case ���ǰ�1 :
	//		�񱳰��� ���ǰ��� ��ġ�� �� ������ ���
	//		break;
	//case ���ǰ�2 :
	//		�񱳰��� ���ǰ��� ��ġ�� �� ������ ���
	//		break;
	//case ���ǰ�3 :
	//		�񱳰��� ���ǰ��� ��ġ�� �� ������ ���
	//		break;
	//default :
	//		break;
	//}

	/*	int num = 1;
		//printf("���� ������ �Է��ϼ��� : ");
		//scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			printf("num�� 1\n");
			break;
		case 2:
			printf("num�� 2\n");
			break;
		case 3:
			printf("num�� 3\n");
			break;
		default:
			printf("��ġ�ϴ� ���� �����ϴ�.\n");
			break;
		}*/

		//switch�� �񱳰����� �� �� �ִ� �ڷ���
		//1. ����
		//2. ������


	printf("-----------------------------------------\n");

	//����ڷκ��� ������ �Է¹޾�, Ȧ������ ¦������ �Ǻ��ϴ� ���α׷� �ۼ��ϱ�
	//������ �Է��ϼ��� : 3
	//�Է��� ������ Ȧ�� �Դϴ�.

/*	int num2;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num2);*/
	/*
	if (num2 % 2 == 0) {
		printf("�Է��� ������ ¦�� �Դϴ�.\n");
	}
	else
	{
		printf("�Է��� ������ Ȧ�� �Դϴ�.\n");
	}
	*/
	//	printf("%s", num2 % 2 == 0 ? "�Է��� ������ ¦�� �Դϴ�.\n" : "�Է��� ������ Ȧ�� �Դϴ�.\n"); 

		//����ڷκ��� ������ ���� �ΰ��� ���������(+,-,*,/) �� ������ �Է¹޴´�.
		//��������ڿ� ���� �� ���� ������ �����Ͽ� ����ϱ�

		//ù��° �� : 10
		//�ι�° �� : 7
		//������ : +

		//��� : 10 + 7 = 17
/*
		int value1;
		int value2;
		char cal;
		printf("ù��° �� : ");
		scanf_s("%d", &value1);
		printf("�ι�° �� : ");
		scanf_s("%d", &value2);
		printf("������ : ");
		scanf_s(" %c", &cal);
		switch (cal)
		{
		case '+':
			printf("%d %c %d = %d", value1, cal, value2, value1 + value2);
			break;
		case '-':
			printf("%d %c %d = %d", value1, cal, value2, value1 - value2);
			break;
		case '*':
			printf("%d %c %d = %d", value1, cal, value2, value1 * value2);
			break;
		case '/':
			printf("%d %c %d = %d", value1, cal, value2, value1 / value2);
			break;
		default:
			printf("error");
			break;
		}
	*/
	//������ ����month�� ���� �ϳ� �Է¹޴´�.
	//�ش� ���� ������ �ִ��� ����ϴ� �ڵ� �ۼ��ϱ�

	//�Է� : 3 
	//��� : 3���� 31�ϱ��� �ֽ��ϴ�.
	while (1)
	{
		int month;
		printf("�Է� : ");
		scanf_s("%d", &month);
		if (month > 12 || month <1) {
			printf("Error\n");
			continue;
		}
		int result = month>7 ? month+1 : month;
		int var = 
			result % 2 != 0 ? 1 : 
			result == 2 ? 2 : 3;
		switch (var)
		{
		case 1:
			printf("%d���� 31�ϱ��� �ֽ��ϴ�.\n", month);
			break;
		case 2:
			printf("%d���� 28�ϱ��� �ֽ��ϴ�.\n", month);
			break;
		case 3:
			printf("%d���� 30�ϱ��� �ֽ��ϴ�.\n", month);
			break;
		}
	}


}