#include <stdio.h>

void main() {
	//�Է��Լ�
	//Ű���忡�� ���� �Է¹޾� ������ ���� ������ ��
	//�ְ� ���ִ� ���

	//�Է��� �����͸� ������ ���� �����
	//sanf()�Լ� �̿��ؼ� ������ �� �����ϱ�

	//����
	//scanf("���Ĺ���",&������);
	//							������ �ּ� �ǹ� &

	char ch;
	int inum;
	float fnum;
	printf("���� �Է� : ");
	scanf("%d", &inum);

	printf("���� �Է� : ");
	scanf(" %c ", &ch);

	printf("�Ǽ� �Է� : ");
	scanf("%f",&fnum);

	printf("��°� : %c %d %.2f\n", ch,inum,fnum);

}