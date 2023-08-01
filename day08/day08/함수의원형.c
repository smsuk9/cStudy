#include <stdio.h>
int add(int, int);
int sub(int, int);
//함수의 원형 (proto type)
//반환형 함수명(매개변수, 매개변수);

void main() {
	//함수의 호출
	printf("add(1,2) : %d\n", add(1, 2));
}

//함수의 정의
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}