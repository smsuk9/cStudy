#include <stdio.h>

//���ȣ���Լ�
//�Լ��� ��ü ������ �ڱ� �ڽ��� ȣ���ϴ� ��

//ù��° ���ڿ� �ι�° ���ڰ� �־����� ���� ���� �ΰ��� ���Ѱ� 

void sayHello(int);
int fibonacci(int);
int factorial(int);
int recursiveSum(int);
void main() {
	//sayHello(1);
	//for (int i = 0; i <= 5; i++)
	//{
	//	printf("%d  \n", fibonacci(i));
	//}

	printf("�� : %d",recursiveSum(10));
}
void sayHello(int count) {
	printf("Hello\n");
	if (count != 3) {
		sayHello(++count);
	}
}
//�Ǻ���ġ ����
int fibonacci(int num1) {
	if (num1 == 0) {
		return 0;
	}
	else if (num1 == 1) {
		return 1;
	}
	else {
		return fibonacci(num1 - 1) + fibonacci(num1 - 2);
	}
}

//���丮��
int factorial(int num) {
	if (num == 0) {
		return 1;
	}
	else {
		return num * factorial(num - 1);
	}
}

//1 ~ n ������ ������ ���Ͽ� ��ȯ�ϴ� ����Լ� recursiveSum
//�ۼ��ϱ�

int recursiveSum(int n) {
	if (n == 0) {
		return 0;
	}
	else {
	return n + recursiveSum(n - 1);
	//n+ (n-1) + (n-2) +...

	}
}