#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define true 1

void main() {
	//�ð������� �̿��Ͽ� ���� ����
	srand((unsigned int)time(NULL));

	

	//for (int i = 0; i < 9; i++)
	//{
	//	int ranNum = rand() % 10 + 1;
	//	printf("���� : %d\n", ranNum);
	//}
	//1~10������ ������ �����ϰ� ����ڰ� ������ ���⶧
	//���� �Է��� �ݺ��ϴ� ���α׷� �ۼ��ϱ�
	int ranNum = rand() % 10 + 1;
		int num = 0;
	while (true)
	{
		printf("1~10���� ���� �Է� : ");
		scanf_s("%d", &num);
		if (num == ranNum) {
			printf("����\n");
			break;
		}
		else
		{
			printf("����\n");
		}
	}


}