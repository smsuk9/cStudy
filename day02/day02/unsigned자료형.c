#include <stdio.h>

void main() {
	//unsigned : ��ȣ�� ����
	//������ ǥ���� �� ���� ǥ���� �� �ִ� ����� ����
	//2�谡 �ȴ�.

	//��ȣ�� ���� ������
	//char -> 1byte -> -128 ~ 127

	//unsigned char -> 0~ 255

	char cnum = 128; //char���� �ִ밪�� 127
	printf("%d\n", cnum); //���� ����� ������ ����
	unsigned char unum = 128;
	printf("%d\n", unum);
	short snum = 32768;//short�� �ִ밪 32767;
	printf("%d\n", snum);
	unsigned short usnum = 32768;
	printf("%d\n", usnum);
	//���� �ڷ����� �ִ밪���� ū ���� ������ �� �ִ�.


}