#include <stdio.h>
#include<stdlib.h>
//��������, ��������, ���������� ���� ��������
//�����ֱⰡ ������ �Ǿ��ִ�.

//����ڰ� ������ �Ҹ��� �ñ⸦ ������ �� �ִ� ������
//�����ϴ� ���� '�޸𸮸� �����Ҵ� �޴´�'��� �Ѵ�.
void main() {
	//malloc()�Լ�
	//malloc(size) : malloc()�Լ��� ���ڷ� �Ҵ�ް��� �ϴ�
	//�޸� ������ ũ�⸦ ����Ʈ ������ ���޹޴´�.
	//malloc() �Լ��� �޸𸮸� �Ҵ�ް� �ּҸ� ��ȯ�Ѵ�.
	//malloc()�Լ��κ��� ��ȯ���� �ּҰ��� ����� ������ ������
	//�ʿ��ѵ� void* �̱� ������ ����ȯ�� �ʿ��ϴ�.
	//int* numPtr = (int*)malloc(sizeof(int));

	//����ڰ� ������ ���Ѵٸ� �� ������ �޸� �ּ��� ������
	//����ϴ� free()�Լ��� ȣ���ϸ� �ȴ�.
	//free(������ ����)

	int* iptr = (int*)malloc(sizeof(int) * 5);//int�� 5��ŭ
	double* dptr = (double*)malloc(sizeof(double) * 3);//double�� 3��ŭ

	//�Ҵ�� �޸� ������ int�� ũ�⸸ŭ�� ���������� �����ϱ�
	for (int i = 0; i < 5; i++) {
		iptr[i] = 10 * (i + 1);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", iptr[i]);
	}
	printf("\n");

	dptr[0] = 3.14; dptr[1] = 1.23; dptr[2] = 8.54;
	printf("%.2f %.2f %.2f\n", dptr[0], dptr[1], dptr[2]);

	//�� ������ �Ҵ��ߴ� �޸� ����
	free(iptr);
	free(dptr);

}