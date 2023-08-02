#include <stdio.h>
#include <stdlib.h>
#define true 1

void main() {
	//사용자로부터 문자열의 최대 길이를 입력받고
	//그만큼의 공간을 동적할당을 받는다.
	//그 다음 해당 공간에 저장할 문자열을 입력한다.
	//이때 반드시 알파벳 소문자로만 구성된 문자열을 입력하고
	//입력한 문자열안에 알파벳 소문자 a가 몇개나 포함되어 있는지
	//출력하는 프로그램 작성하기
	int length = 0;
	int count = 0;
	printf("문자열 길이 입력 : ");
	scanf_s("%d", &length);
	char* pstr = (char*)calloc(length,sizeof(char));
	printf("문자열 입력 : ");
	scanf_s("%s", pstr, length);
	for (int i = 0; i < length; i++) {
		if (pstr[i] == 'a') {
			count++;
		}
	}
	free(pstr);
	printf("문자열에 포함되어 있는 a의 개수 : %d\n", count);
}