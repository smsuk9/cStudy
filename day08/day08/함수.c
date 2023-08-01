#include <stdio.h>

//�Լ��� ���Ǵ� main ������ �Ѵ�.
//�� ���� ���ϴ� �Լ�
int add(int, int);
void println();
int sumTotal();
int value(int, int);
void f4(int);
int f5(int, int);
void f6(int);
void main() {
	//ǥ���Լ� : c���� �⺻������ �����ϴ� �Լ�
	//		- printf(), scanf(), sizeof(), strcpy(), strcat(), strcmp()

	//����� ���� �Լ� : ���� ǥ���Լ��� ������ ǥ���Լ������δ� ��� �����
	//������ �� ���� ������ �������� ��ɵ��� ���� ���

	//�Լ��� ����
	//1. ����� : �Լ��� ���Ǹ� ���� �κ�
	//			- �Լ��� ���Ǵ� �Լ� �ۿ��� �ؾ� �Ѵ�.
	//2. ȣ��� : ���ǵ� �Լ��� ȣ���ϴ� �κ�
	//			- �Լ��� ȣ���� �Լ� �ȿ��� �ؾ� �Ѵ�.

	//�Լ��� ����(�⺻��)
	//��ȯ�� �Լ���(�Ű�����,�Ű�����){
	//			��ɵ��� ����;
	//			return ��ȯ��;
	//}

	//��ȯ�� : �Լ��Ѻ��� ��ȯ�� �������� �ڷ����� ��ġ�ϰ� ���´�.
	//�Լ��� : �Լ��� ȣ���� �� ����ϴ� �Լ��� �̸�
	//�Ű�����(�Ķ����,����) : �Լ��� ȣ���� �� ������ ���� �޾Ƽ� �Լ� ���η�
	//										�������ִ� ������ �ϴ� ����(�Ϲ� ������ ����ó�� ���)


	//�Լ��� 4���� ����
	//- �Ű������� �ְ�, ��ȯ���� �ִ� ����
	//- �Ű������� �ְ�, ��ȯ���� ���� ����
	//- �Ű������� ����, ��ȯ���� �ִ� ����
	//- �Ű������� ����, ��ȯ���� ���� ����

	int c = add(1, 2);//�Լ��� ȣ��
	printf("%d\n", c);


	//1~10���� ����ϴ� f1()�Լ� �ۼ��ϱ�
	//1 2 3 4 5 6 7 8 9 10
	println();

	//1 ~ 10���� ������ ���ϴ� f2 �Լ� �ۼ��ϱ�
	printf("1~10���� ���� : %d\n", sumTotal());

	//�� ���� ���ؼ� �� ū ���� ��ȯ�ϴ� �Լ� f3() �����
	//�� ���� �Ű������� �����ϱ�

	int num1 = 4;
	int num2 = 3;
	printf("%d�� %d �� : %d\n", num1, num2, value(num1, num2));

	//�Ű������� dan�� �Է¹޾� �ش� �������� ����ϴ� f4�Լ� �����
	f4(2);

	//s~e������ ������ ���ϴ� �Լ�f5 �����
	//s> e�ϰ�쿡�� ���������� ������ ���ϱ�

	int value1;
	int value2;
	printf("�Է� 1 : ");
	scanf_s("%d", &value1);
	printf("�Է� 2 : ");
	scanf_s("%d", &value2);

	printf("%d�� %d�� ���� : %d\n", value1, value2, f5(value1, value2));

	f6(9876);

	//�Ű����� num���� 4�ڸ� ���ڰ� �־����� �� �� �ڸ����� ����
	//����ϴ� f6�Լ� �����
}

int add(int num1, int num2) {
	return num1 + num2;
}

void println() {
	for (int i = 1; i <= 10; i++) {
		printf("%d  ", i);
	}
	printf("\n");
}

int sumTotal() {
	int total = 0;
	for (int i = 1; i <= 10; i++) {
		total += i;
	}
	return total;
}
int value(int num1, int num2) {
	int value = 0;
	if (num1 > num2) {
		value = num1;
	}
	else if (num1 < num2) {
		value = num2;
	}
	else {
		value = -1;
	}
	return value;
}

void f4(int num) {
	for (int i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", num, i, num * i);
	}
}

int f5(int s, int e) {
	int total = 0;
	if (s > e) {
		int exValue = e;
		e = s;
		s = exValue;
	}
	for (int i = s; i <= e; i++) {
		total += i;
	}
	return total;
}

void f6(int num) {
	int num1 = num / 1000;
	int num2 = num / 100 - num1 * 10;
	int num3 = num / 10 - num1 * 100 - num2 * 10;
	int num4 = num - num1 * 1000 - num2 * 100 - num3 * 10;

	printf("%d�� õ�� �ڸ��� %d\n", num, num1);
	printf("%d�� ���� �ڸ��� %d\n", num, num2);
	printf("%d�� ���� �ڸ��� %d\n", num, num3);
	printf("%d�� ���� �ڸ��� %d\n", num, num4);
}