#include <stdio.h>
#include <stdlib.h>
#define true 1

void main() {
	//�޸𸮸� ���� �Ҵ��� �� ���� malloc�� ���� ���� ���������
	//malloc�ܿ��� �ٸ� ���� �Ҵ� �Լ����� �ִ�.

	//calloc�Լ�
	//calloc()�Լ��� ���ڷ� �Ҵ��ϰ��� �ϴ� �޸� ������ ������
	//�� �޸𸮺� ������ ũ�⸦ ���޹޴´�.

	//malloc(sizeof(int)*30); 120byte
	//calloc(30, sizeof(int)); 120byte

	//realloc�Լ�
	//malloc�Լ��� calloc�Լ��� ������ ���� �ٸ� ���� �Ҵ� �Լ��̴�.
	//realloc�Լ��� �� ������ �Ҵ� �Ǿ��ִ� �޸� ������ ũ�⸦ �����ϴ�
	//�� ������ �ִ�.

	//realloc(������ ����, ���ο� ũ��);

	int* ptr; //�Ҵ�� �޸��� �ּҸ� ������ ������
	int count = 0; //�Է¹��� �������� ����
	int maxSize = 3; //�Ҵ���� �޸��� ũ��
	int num;

	ptr = (int*)calloc(maxSize, sizeof(int)); // 12byte
	while (true)
	{
		printf("������ �Է��ϼ���(-1�Է½� ���� : ");
		scanf_s("%d", &num);
		if (num == -1) {
			break;
		}

		//�Է��� ������ ������ �޸� ��ŭ á�� ���
		if (count == maxSize) {
			maxSize += maxSize;
			//���Ҵ��� ���� �޸� ����Ȯ��
			ptr = (int*)realloc(ptr, maxSize * sizeof(int));
		}

		//����ڰ� �Է��� ������ �� ���� �޸𸮿� ����
		ptr[count++] = num;

		for (int i = 0; i < count; i++) {
			printf("%d ", ptr[i]);
		}
		printf("\n");
	}
		free(ptr);

}