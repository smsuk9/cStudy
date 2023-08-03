#include <stdio.h>
#include <stdlib.h>

void main() {
	//회원가입.txt를 읽기 전용으로 text모드로 열기
	FILE* fp1 = NULL;
	fp1 = fopen("회원가입.txt", "rt");

	if (fp1 != NULL) {
		char str[128];
		if (fgets(str, 128, fp1) != NULL) {
			//읽어온 문자열을 화면에 출력한다.
			printf("%s", str);
		}
		else
		{
			printf("파일에서 문자열을 읽지 못했습니다.");
		}
		//파일을 다 사용했으니, 파일을 닫는다.
		fclose(fp1);
	}
}