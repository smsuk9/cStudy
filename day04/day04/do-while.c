#include <stdio.h>

void main() {
	//while�� : ���� ��ó��
	//do-while�� : ��ó�� �ĺ�
	//���ǿ� ���� �ʾƵ� ������ �ѹ��� ������ �ȴ�.
	//�� �Ŀ� ������ �ٽ� ���ؼ� �����̸� �״�� ����������.

	//do {
	//		���ǽ��� ���� �� �ݺ��� ���;
	//} while (���ǽ�);

	int num = 1;

	do
	{
		printf("%d\n", num++);
	} while (num < 3);

	printf("---------------\n");

	int n = -1;
	do
	{
		printf("-1�Է½� ���� : ");
		scanf_s("%d", &n);
	} while (n != -1);
}