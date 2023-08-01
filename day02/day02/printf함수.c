#include <stdio.h>

void main() {
	//이스케이프 문자 : 특수한 기능을 가지고 있는 문자.
	//\n : 개행(줄바꿈)
	//\t : 탭만큼 띄어쓰기
	//\' : '출력
	//\" : "출력
	//\\ : \출력
	printf("%03d\n", 5);
	printf("%.2f\n", 3.14);
	printf(" \'I am a boy\' ");
}