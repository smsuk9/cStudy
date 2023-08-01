#include <stdio.h>

void main() {
	//제어문 : 코드의 흐름을 제어하는 문장
	//1. 조건문 : 조건에 따라 코드를 실행할지, 실행하지 않을지 결정하는 문장
	//			- if,switch
	//2. 반복문 : 조건에 따라 명령을 반복할지, 반복하지 않을지 결정하는 문장
	//			- for,while

	//조건문
	//if문
	//기본형
	//if(조건식) {
	//		조건식이 참일 때 실행할 명령;
	//		조건식이 참일 때 실행할 명령;
	//		조건식이 참일 때 실행할 명령;
	//}

	int num = 3;

	if (num < 3) {
		printf("num은 3보다 작습니다.\n");
	}
	if (num == 3) {
		printf("num은 3입니다.\n");
	}
	if (num > 3) {
		printf("num은 3보다 큽니다.\n");
	}

	//if - else
	//참일 때 실행할 명령, 거짓일때 실행할 명령

	//기본형
	//if(조건식) {
	//		조건식이 참일 때 실행할 명령;
	//} else {
	//		조건식이 거짓일 때 실행할 명령;
	//}

	char alpha = 'A';

	if (alpha == 'B') {
		printf("alpha is B\n");
	}
	else {
		printf("alpha is A\n");
	}

	//if - else if - else
	//비교하고자 하는 조건이 여러개일 때
	//기본형
	//if(조건식1) {
	//		조건식1이 참일 때 실행할 명령;
	//} else if(조건식2) {
	//		조건식1이 거짓이고 조건식2가 참일 때 실행할 명령;
	//} else if(조건식3) {
	//		조건식2이 거짓이고 조건식3가 참일 때 실행할 명령;
	//} else if(조건식4) {
	//		조건식3이 거짓이고 조건식4가 참일 때 실행할 명령;
	//} else {
	//		조건식1,2,3,4가 모두 거짓일 때 실행할 명령;
	// }
	
	alpha = 'A';

	if (alpha == 'A') {
		printf("alpha is A\n");
		printf("I like Apple\n");
	}
	else if (alpha == 'B') {
		printf("alpha is B\n");
		printf("I like Banana\n");
	}
	else if (alpha == 'C') {
		printf("alpha is C\n");
		printf("I like Carrot\n");
	}
	else
	{
		printf("I hate fruit & vegetable\n");
	}

	//사용자에게 점수를 입력받고
	//점수가 100~90이라면 성적은 A입니다.
	//점수가 89~80점이라면 "성적은 B입니다."
	//점수가 79~70점이라면 "성적은 C입니다."
	//점수가 69~60점이라면 "성적은 D입니다."
	//점수가 59점 이하라면 "성적은 F입니다." 라고 출력하기

	int point;
	while (1)
	{
	printf("점수 입력 : ");
	scanf_s("%d", &point);
	if (point>=90 && point<=100) {
		printf("성적은 A입니다.\n");
	}
	else if (point >= 80 && point <= 89) {
		printf("성적은 B입니다.\n");
	}
	else if (point >= 70 && point <= 79) {
		printf("성적은 C입니다.\n");
	}
	else if (point >= 60 && point <= 69) {
		printf("성적은 D입니다.\n");
	}
	else
	{
		printf("성적은 F입니다.\n");
		break;
	}
	}
}