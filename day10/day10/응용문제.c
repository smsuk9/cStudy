#include <stdio.h>
#include <stdlib.h>
#define true 1

void main() {
	//����ڷκ��� ���ڿ��� �ִ� ���̸� �Է¹ް�
	//�׸�ŭ�� ������ �����Ҵ��� �޴´�.
	//�� ���� �ش� ������ ������ ���ڿ��� �Է��Ѵ�.
	//�̶� �ݵ�� ���ĺ� �ҹ��ڷθ� ������ ���ڿ��� �Է��ϰ�
	//�Է��� ���ڿ��ȿ� ���ĺ� �ҹ��� a�� ��� ���ԵǾ� �ִ���
	//����ϴ� ���α׷� �ۼ��ϱ�
	int length = 0;
	int count = 0;
	printf("���ڿ� ���� �Է� : ");
	scanf_s("%d", &length);
	char* pstr = (char*)calloc(length,sizeof(char));
	printf("���ڿ� �Է� : ");
	scanf_s("%s", pstr, length);
	for (int i = 0; i < length; i++) {
		if (pstr[i] == 'a') {
			count++;
		}
	}
	free(pstr);
	printf("���ڿ��� ���ԵǾ� �ִ� a�� ���� : %d\n", count);
}