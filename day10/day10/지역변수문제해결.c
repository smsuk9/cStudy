#include <stdio.h>
#include <stdlib.h>

char* getString() {
	char* str = (char*)malloc(sizeof(char) * 100);
	printf("좋아하는 단어는?\n");
	gets(str); //문자열 입력함수
	return str;
}
void main() {
	char* result = getString();
	printf("당신이 좋아하는 단어는 : %s", result);
	if (result != NULL) {
		free(result);
	}
}