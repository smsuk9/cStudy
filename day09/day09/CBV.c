#include <stdio.h>

void swapNumber(int, int);

void main() {
	//�Լ��� ������ �� �Ű� ������ �⺻ ������ ������
	//�����ϸ� �Լ��� ȣ���� �� �ܼ��� ���� �����ؼ�
	//������ �Ѵ�.
	//�̷��� ����� Call-By-Value��� �Ѵ�.
	//���� �����Ͽ� �����ϱ� ������ �ش� ���� �Լ� ��������
	//���ǰ� ���Ŀ��� �Ҹ�ȴ�.

	int number1 = 33;
	int number2 = 99;
	swapNumber(number1, number2);
	printf("�Լ� ȣ�� �� Ȯ���� ���, num1 : %d, num2 : %d\n", number1, number2);
}

void swapNumber(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
	printf("�Լ� �ȿ��� Ȯ���� ���, num1 : %d, num2 : %d\n", num1, num2);
}