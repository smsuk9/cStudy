#include <stdio.h>
#include <stdlib.h>

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

}