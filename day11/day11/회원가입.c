#include <stdio.h>
#include <stdlib.h>
void main() {
	char id[30];
	char pw[30];
	char name[30];
	int age;

	printf("id를 입력하세요 : ");
	scanf_s(" %s", id, sizeof(id));
	printf("pw를 입력하세요 : ");
	scanf_s(" %s", pw, sizeof(pw));
	printf("이름을 입력하세요 : ");
	scanf_s(" %s", name, sizeof(name));
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);

	FILE* fp1 = NULL;
	fp1 = fopen("회원가입.txt", "w");

	//2. 파일작업
	if (fp1 == NULL) {
		printf("파일열기 실패\n");
	}
	else
	{
		printf("파일열기 성공\n");
		//fputs(id, fp1);
		//fputs(pw, fp1);
		//fputs(name, fp1);
		fprintf(fp1, "id : %s\npw:%s\n", id, pw);
		fprintf(fp1, "name : %s\nage:%d\n", name, age);
	}
	fclose(fp1);
}

//읽기 작업

//문자 단위 읽기
//- 지정된 스트림으로부터 하나의 문자를 읽어 들이는 함수

//int fgetc(스트림); 스트림 = 파일포인터

//문자열 단위 읽기
//- 첫번째 매개변수는 파일에서 읽어온 문자열을 저장할 메모리 주소를 넘겨준다.
//- 두번째 매개변수는 저장할 문자의 최대 개수
//- 세번째 매개변수는 파일포인터를 넣어준다.
//int fgets(char* str, int numChars, File* stream);