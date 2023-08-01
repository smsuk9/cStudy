#include <stdio.h>

//재귀호출함수
//함수가 몸체 내에서 자기 자신을 호출하는 것


void sayHello(int);

void main() {
	sayHello(1);
}
void sayHello(int count) {
	printf("Hello\n");
	if (count != 3) {
	sayHello(++count);
	}
}