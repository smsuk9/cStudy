#include <stdio.h>
#define true 1
#define false 0

void main() {
	//c언어에서는 문자열을 저장하기 위해서는
	//char배열로 선언해야 한다.

	//문자열은 문자들이 1차원적으로 나열되어 있는 데이터이다.
	//char greet[] = "Hello, Guys!";

	//printf("배열 greet의 크기 : %d\n", sizeof(greet));

	//문자열의 맨 뒤에는 널문자(\0)이 삽입되기 때문에 크기가 13이 나온다.
	//원래는 데이터 없음을 의미하지만, 문자열에서 사용될 때는 문장의 끝 이라는 의미로 사용된다.

	//문자열을 저장하기 위해서는 char배열의 크기를 널문자까지 고려하여
	//작성해야 한다.
	//char goodbye[50] = "Good Bye!";

	//printf("goodbye의 크기 : %d\n", sizeof(goodbye));

	//문자열의 입력과 출력
	//1. printf함수를 통한 문자열의 출력
	//char mind[30] = "I Love Programming";
	//printf("%s\n", mind);
	//
	//mind[7] = '\0';
	//printf("%s\n", mind);

	//mind[1] = '\0';
	//printf("%s\n", mind);

	//2.scanf를 통한 문자열의 입력
	//scanf함수를 통한 입력은 공백문자(스페이스바, 탭, 엔터) 등으로 인해 종료된다.
	//문자열을 입력할 때는 &를 쓰지 않는다.
	//문자열의 입력이 종료되면 문자열의 끝에 자동으로 널문자가 삽입된다.

	//char str[50];

	//printf("문자열을 입력하세요 : ");
	//scanf_s("%s", str,sizeof(str));
	//printf("입력된 문자열 : %s\n", str);

	//문자형 배열 ch에 크기를 사용자에게 입력받는다.
	//배열에 알파벳이 들어간다.

	//배열의 크기 입력 : 5
	//ABCDE

	//배열의 크기 입력 : 2
	//AB

	//65~90

	int userValue;
	int first = 65;
	printf("배열의 크기 입력 : ");
	scanf_s("%d", &userValue);
	if (userValue > 26) {
		userValue = 26;
	}
	else if (userValue < 0) {
		userValue = 0;
	}
	char arr[27];
	for (int i = 0; i < sizeof(arr)-1; i++) {
		arr[i] = (char)(first+i);
	}
	arr[26] = '\0';
	for (int i = 0; i < userValue; i++) {
		printf("%c", arr[i]);
	}
}