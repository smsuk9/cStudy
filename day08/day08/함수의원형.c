#include <stdio.h>
int add(int, int);
int sub(int, int);
//�Լ��� ���� (proto type)
//��ȯ�� �Լ���(�Ű�����, �Ű�����);

void main() {
	//�Լ��� ȣ��
	printf("add(1,2) : %d\n", add(1, 2));
}

//�Լ��� ����
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}