#include <stdio.h>

void main() {
	//for �� : �ݺ�Ƚ���� ������ ���� �� ����ϴ� �ݺ���

	//for (�ʱⰪ; ���ǽ�; ������) {
	//		���ǽ��� ���� �� �ݺ��� ���
	//}

	//�ʱ�� : ���۰��� ���� ���� �ϳ� �ʱ�ȭ
	//���ǽ� : ��� �ݺ��� ���� ������ �˻��ϴ� ��
	//������ : ���۰��� ���������ִ� ��

	/*for (int i = 0; i < 3; i++)
	{
		printf("%d ", i);
	}*/

	//1 ~ 10���� ����ϱ�
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", i+1);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", 10 - i);
	}
	printf("\n");
	//1~ 10���� ���� ����ϱ�
	int total = 0;
	for (int i = 1; i <= 10; i++)
	{
		total += i;
	}
	printf("1~10���� ������ : %d", total);
	printf("\n");
	//������ ������ ����n�� �Է¹޾�
	//1 ~ n������ ������ ���ϼ���.
	int n;
	printf("n �� �Է� : ");
	scanf_s("%d", &n);
	int total2 = 0;
	for (int i = 1; i <= n; i++)
	{
		total2 += i;
	}
	printf("1~n���� ������ : %d", total2);
	printf("\n");
	printf("--------------------------------\n");

	//1 ~ 20���� 4�� ����� ����ϱ�
	int total3 = 20;
	int var = 4;
	for (int i = 1; i <=total3/var; i++)
	{
		printf("%d ", i * 4);
	}
	printf("\n");
	// ����ڿ��� ���� �ϳ��� �Է¹޾�
	//�ش� ������ ����ϱ�
	int number;
	printf("������ �Է� : ");
	scanf_s("%d", &number);
	for (int i = 1; i <= 9; i++)
	{
		printf("%2d X %2d = %2d\n", number, i, number * i);
	}

	
}