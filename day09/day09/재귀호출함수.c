#include <stdio.h>

//���ȣ���Լ�
//�Լ��� ��ü ������ �ڱ� �ڽ��� ȣ���ϴ� ��


void sayHello(int);

void main() {
	sayHello(1);
}
void sayHello(int count) {
	printf("Hello\n");
	if (count != 3) {
	sayHello(++count);
	}
}