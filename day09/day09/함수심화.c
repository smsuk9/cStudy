#include <stdio.h>

void readArray(int*, int);

void main() {
	//�迭�� ���޹޴� �Լ�
	//�迭�� �̸��� �迭�� ���� �ּҰ��� ������ �ִٴ� ���� �����ϰ� �־�� �Ѵ�.

	int arr[3] = { 3,6,9 };
	readArray(arr, 3);
	//�����ͺ����� �Ű������� ������ ���� ���� �ƴ� �ּҰ���
	//���� �����Ƿ� �Լ� ������ ���� ������ ������ ��� ��������
	//�迭�� �Բ� ������ �ȴ�.
}
//�迭�� ���޹��� �� �ִ� int�� �����ͺ��� arr
					//int* arr or int arr[]
void readArray(int* arr, int length) {
	printf("�迭�� ��� �о�� : [");
	for (int i = 0; i < length; i++) {
		printf("%d", arr[i]);
		if (i + 1 < length) {
			printf(",");
		}
		else {
			printf("");
		}
	}
	printf("]\n");
}