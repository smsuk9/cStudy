#include <stdio.h>
#include <stdlib.h>
//문자열 형태의 이름, 문자열 형태의 전화번호,
//정수 형태의 급여를 저장할 수 있는 worker라는 이름의 구조체를 정의하세요.
//길이가 3인 구조체 배열을 만들고 세 명의 정보를
//사용자로부터 입력받아 배열에 저장하고 출력하세요.

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

		printf("이름 입력 : ");
		scanf_s("%s", humen[i].name, length);
		printf("전화번호 입력 : ");
		scanf_s("%s", humen[i].phoneNumber, length);
		printf("급여 입력 : ");
		scanf_s("%d", &humen[i].money);
	}
	for (int i = 0; i < 3; i++) {
		printf("이름 : %s, 전화번호 : %s, 급여 : %d\n", humen[i].name, humen[i].phoneNumber, humen[i].money);
		free(humen[i].name);
		free(humen[i].phoneNumber);
	}

}