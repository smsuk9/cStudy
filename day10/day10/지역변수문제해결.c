#include <stdio.h>
#include <stdlib.h>

char* getString() {
	char* str = (char*)malloc(sizeof(char) * 100);
	printf("�����ϴ� �ܾ��?\n");
	gets(str); //���ڿ� �Է��Լ�
	return str;
}
void main() {
	char* result = getString();
	printf("����� �����ϴ� �ܾ�� : %s", result);
	if (result != NULL) {
		free(result);
	}
}