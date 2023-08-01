#include <stdio.h>
#define true 1
void main() {
	//문자 단위 입출력 함수
	//getchar() : 키보드에서 문자를 하나 입력받아 데이터를 반환해주는 함수
	//putchar() : 전달된 문자 정보를 출력하는 표준 출력 함수
	/*int ch1, ch2;
	
	ch1 = getchar();
	ch2 = getchar();

	putchar(ch1), putchar(ch2);*/

	//문자 입력 종료하기
	//c언어에는 EOF라는 상수가 존재한다. End Of File을 의미하며, 표준 상수로
	//문자를 입력할 때 입력이 종료되었음을 나타낸다.

	/*int ch;

	while (true)
	{
		ch = getchar();

		if (ch == EOF) {
			break;
		}
		putchar(ch);
	}*/

	//문자열 단위 입출력 함수
	//gets(변수) : 키보드에서 문자열 입력받는다.
	//puts(변수) : 전달된 값을 출력

	char ch[30];
	/*scanf_s("%s", ch,sizeof(ch));
	printf("이름 : %s\n", ch);*/
	//gets(ch);
	//puts(ch);//자동으로 줄 바꿈
	//printf("이 문자열은 다음 줄에서 출력됩니다.\n");

	//문자열 처리 함수
	//strlen(str) : 널문자를 제외한 문자열의 길이를 반환
	// 
	//strcpy(str1,str2) : str2의 주소의 문자열을 str1의 주소에 복사
	//strncpy(str1,str2,count) : 원하는 개수만큼 복사
	// 
	//strcat(str1,str2) : str2의 주소의 문자열을 str1의 주소의 문자열에 이어 붙이기
	//strncat(str1,str2,count) : 원하는 개수만큼 이어붙히기
	// 
	//strcmp(str1,str2) : 인자로 전달된 두 문자열을 비교하여 같으면 0, 다르면 0이 아닌 값을 반환
	//strncmp(str1,str2,count) : 앞에서 부터 내가 원하는 개수만큼 비교를 한다.

	char str1[50] = "apple is good";
	char str2[50] = "berry is good";
	char str3[50];
	printf("str1의 길이 : %d, str2의 길이 : %d\n", strlen(str1),strlen(str2));

	//str3에 str1의 내용 복사하기
	strcpy(str3, str1);

	//str2에 str1의 다섯글자를 복사하기
	strncpy(str2, str1, 5);

	printf("%s\n%s\n%s\n", str1, str2, str3);

	char str4[50] = "Michael";
	char str5[50] = "Michael";

	//str4에 문자열 이어붙히기
	strcat(str4, "Bolton");
	printf("%s\n", str4);
	
	//str5에 7개의 문자열 붙이기
	strncat(str5, "Jackson Five", 7);
	printf("%s\n", str5);

	//str4와 str5 비교
	printf("비교 결과 : %d\n", strcmp(str4, str5));

	//str4와 str5의 앞의 7개 문자만 비교
	printf("비교 결과 : %d\n", strncmp(str4, str5, 7));

}