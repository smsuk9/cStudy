#include <stdio.h>
#include <stdlib.h>

void main() {

	FILE* fp1 = NULL;

	//1. 파일열기
	fp1 = fopen("D:/C12_SMS/work/folder/file1.txt", "w");

	//2. 파일작업
	if (fp1 == NULL) {
		printf("파일 작업 실패\n");
	}
	else
	{
		printf("파일열기 성공\n");
		fputs("hello", fp1);
	}

	//3. 파일닫기
	fclose(fp1);


	//파일
	//C언어에서 파일은 바이트로 이루어진 집합으로 취급

	//파일의 종류
	//1. 바이너리파일(binary file)
	//- 바이너리 파일은 데이터의 저장과 처리를 목적으로
	//	0과 1의 이진형식으로 인코딩된 파일

	//2. 텍스트 파일
	//- 사람이 알아볼 수 있는 문자열로 이루어진 파일
	//- 프로그램이 이 파일의 데이터를 읽거나 쓸 때는
	//	포맷 형식에 따라 데이터의 변환이 일어난다.

	//파일의 입출력
	//- C언어에서 파일에 대한 입출력은 다음과 같은 순서에 따라 진행된다.

	//1. 파일과의 스트림 생성
	//2. FILE 구조체 변수의 포인터를 이용한 작업 진행
	//3. 파일과의 스트림 종결

	//※ 스트림 : 운영체제에 의해 생성되는 가상의 연결고리를 의미

	//파일 열기 작업
	//1. FILE형 포인터 변수 생성
	//2. FILE 포인터를 사용해 파일 스트림 생성

	//fopen()함수
	//- 파일을 열어주는 함수
	//- 파일을 연다는 것은 파일과의 입출력을 위한 스트림을 생성한다는 의미이다.

	//함수의 원형
	//FILE* fopen(const char* restrict filename, const char* restrict mode);

	//- 첫 번째 매개변수는 열고자 하는 파일의 이름과 경로를 가지는 문자열

	//- 두 번재 매개변수는 파일을 여는데 사용할 모드를 지정하는 문자열

	//모드 문자열
	//- 파일이 열린 다음 파일의 사용 용도를 결정하고 파일의 데이터를 어떤 방식으로 입출력 할지를 결정한다.

	//r(read mode) : 읽기 전용 모드
			//- 파일이 없으면 NULL을 반환
	//w(write mode) : 쓰기 전용 모드
			//- 파일이 없으면 새로 생성
			//- 파일이 있으면 이전 내용을 지우고 새로 만듬
			//- 여는 순간 내용 다 날아감
	//a(append) : 추가 모드
			//- 파일이 없으면 새로 생성
			//- 파일이 있으면 내용을 그대로 두고 뒤에 추가로 쓰게 된다.

	//파일형식과 관련된 모드 문자열
	//t(text mode) : 해당 파일의 데이터를 텍스트 파일로 인식하고 입출력함.

	//b(binary mode) : 해당 파일의 데이터를 바이너리 파일로 인식하고 입출력함.

	//쓰기 작업
	//문자 단위 쓰기 작업
	//- 정수형으로 입력받아, 해당 값의 아스키코드문자로 파일에 쓰기

	//int fputs(int c, FILE* fp);

	//문자열 단위 쓰기 작업

	//int fputs(char* ch, FILE* fp);

	//fclose()함수
	//파일을 닫아주는 함수
	//파일을 닫는다는 것은 파일과의 입출력을 위해 생성한 스트림을 소멸시키는 것
	//C언어에서 다 사용한 파일은 반드시 fclose()함수를 사용하여 닫아줘야 한다.

	//fclose(포인터)

}