#include <stdio.h>
#include <stdlib.h>
//���ڿ� ������ �̸�, ���ڿ� ������ ��ȭ��ȣ,
//���� ������ �޿��� ������ �� �ִ� worker��� �̸��� ����ü�� �����ϼ���.
//���̰� 3�� ����ü �迭�� ����� �� ���� ������
//����ڷκ��� �Է¹޾� �迭�� �����ϰ� ����ϼ���.

typedef struct worker {
	char* name;
	char* phoneNumber;
	int money;
}W;
void main() {
	W humen[3];
	int length = 100;
	for (int i = 0; i < 3; i++) {
		humen[i].name = (char*)calloc(length, sizeof(char));
		humen[i].phoneNumber = (char*)calloc(length, sizeof(char));

		printf("�̸� �Է� : ");
		scanf_s("%s", humen[i].name, length);
		printf("��ȭ��ȣ �Է� : ");
		scanf_s("%s", humen[i].phoneNumber, length);
		printf("�޿� �Է� : ");
		scanf_s("%d", &humen[i].money);
	}
	for (int i = 0; i < 3; i++) {
		printf("�̸� : %s, ��ȭ��ȣ : %s, �޿� : %d\n", humen[i].name, humen[i].phoneNumber, humen[i].money);
		free(humen[i].name);
		free(humen[i].phoneNumber);
	}

}