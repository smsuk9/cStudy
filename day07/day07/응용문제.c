#include <stdio.h>
#include <string.h>
#define true 1

void main() {
	//사용자로부터 두 개의 이름을 입력받아 두 이름이 같은지 또는
	//같지 않은지 알려주는 프로그램 작성하기

	//예시
	//김민호
	//김민호

	//같습니다.
	/*char name1[100];
	char name2[100];
	printf("첫번째 이름 입력 : ");
	gets(name1);

	printf("두번째 이름 입력 : ");
	gets(name2);

	if (!strcmp(name1, name2)) {
		printf("같습니다\n");
	}*/

	//두 개의 문자열을 입력받아 긴 문자열부터 순서대로 출력하는
	//프로그램 작성하기

	//예시
	//hello
	//I Love You

	//I Love You
	//hello

	/*char name1[100];
	char name2[100];
	printf("입력 1 : ");
	gets(name1);
	printf("입력 2 : ");
	gets(name2);

	if (strlen(name1) > strlen(name2)) {
		puts(name1);
		puts(name2);
	}
	else {
		puts(name2);
		puts(name1);
	}*/

	//적당한 길이의 문자열을 입력받아서 그 안에 존재하는 숫자(1~9)의
	//총합을 구하는 프로그램 작성하기
	//입력된 문자열에는 문자,숫자,기호등이 섞여있을 수 있다.
	//예시와 같이 숫자의 합만 구하여 출력하세요

	//예시
	//문자열 입력 : aa9we2a3
	//총합 : 14

	//아스키코드 활용하기 : 1~9에 해당하는 아스키코드 49~57

	char stringCode[100];
	gets(stringCode);
	int i = 0;
	int temp = 0;
	while (i < strlen(stringCode))
	{
		if (stringCode[i] >= 49 && stringCode[i] <= 57) {
			switch (stringCode[i])
			{
			case 49:
				temp += 1;
				break;
			case 50:
				temp += 2;
				break;
			case 51:
				temp += 3;
				break;
			case 52:
				temp += 4;
				break;
			case 53:
				temp += 5;
				break;
			case 54:
				temp += 6;
				break;
			case 55:
				temp += 7;
				break;
			case 56:
				temp += 8;
				break;
			case 57:
				temp += 9;
				break;
			}
		}
		i++;
	}
	printf("총합 : %d\n", temp);

}