#include <stdio.h>
//����� �ô� �������� ���� ���� ������ �̷������
//�Ϸ��� �Լ��� ���ڷ� ���� ���� �����ؾ� �Ѵ�.
//�׸��� �� ���� ���� �޸𸮿� ������ �Ǿ� �ִ�.
//���� Call-By-Reference������� ���� ����Ǿ��ִ�
//�޸��� �ּҰ��� �������ָ� ���� ���� ������ �� �ִ�.

void swapNumber(int*, int*);
void main() {
	int number1 = 33;
	int number2 = 99;
	swapNumber(&number1, &number2);
	printf("�Լ� ȣ�� �Ϸ� �� Ȯ���� ���, number1 : %d number2 : %d\n", number1, number2);
}

void swapNumber(int* ptr1, int* ptr2) {
	//���� �ּҿ� ����� ���� ���� ��ȯ�մϴ�.
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("�Լ� �ȿ��� Ȯ���� ���, number1 : %d number2 : %d\n", *ptr1, *ptr2);
}