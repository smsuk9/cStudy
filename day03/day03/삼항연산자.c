#include <stdio.h>

void main() {
	//���׿�����
	//������ ���� �̿��ϴ� ������

	//���� ? ���1 : ���2;
	//���ǿ����� ��� ���̸� ���1�� ��ȯ
	//���ǿ����� ��� �����̸� ���2�� ��ȯ
	int num;

	printf("�����Է� : ");
	scanf_s("%d", &num);

	int result = num > 0 ? num : num * -1;
	
	printf("���밪 : %d\n", result);
}