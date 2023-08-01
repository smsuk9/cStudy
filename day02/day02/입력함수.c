#include <stdio.h>

void main() {
	//입력함수
	//키보드에서 값을 입력받아 변수에 값을 저장할 수
	//있게 해주는 기능

	//입력한 데이터를 저장할 변수 만들기
	//sanf()함수 이용해서 변수에 값 저장하기

	//사용법
	//scanf("형식문자",&변수명);
	//							변수의 주소 의미 &

	char ch;
	int inum;
	float fnum;
	printf("정수 입력 : ");
	scanf("%d", &inum);

	printf("문자 입력 : ");
	scanf(" %c ", &ch);

	printf("실수 입력 : ");
	scanf("%f",&fnum);

	printf("출력값 : %c %d %.2f\n", ch,inum,fnum);

}