#include <stdio.h>

void main() {
	//�񱳿�����
	// >, <, >=, <=, ==, !=
	//c���� �� -> 1, ���� -> 0
	/*
	int a = 10, b = 11;
	printf("a == b : %d\n",a == b);
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b : %d\n", a >= b);
	printf("a <= b : %d\n", a <= b);
	printf("a != b : %d\n", a != b);
	*/

	 unsigned short num;
	printf("������ �Է����ּ���\n");
	scanf_s("%d", &num);

	printf("2���� ��ȯ : ");
	//������ ���
	for (int i = 3; i >= 0; --i) { //8�ڸ� ���ڱ��� ��Ÿ��
		int result = num >> i & 1;
		printf("%d", result);
	}
}