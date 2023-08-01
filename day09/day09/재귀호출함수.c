#include <stdio.h>

//재귀호출함수
//함수가 몸체 내에서 자기 자신을 호출하는 것

//첫번째 숫자와 두번째 숫자가 주어지고 다음 값은 두개를 더한값 

void sayHello(int);
int fibonacci(int);
int factorial(int);
int recursiveSum(int);
void main() {
	//sayHello(1);
	//for (int i = 0; i <= 5; i++)
	//{
	//	printf("%d  \n", fibonacci(i));
	//}

	printf("값 : %d",recursiveSum(10));
}
void sayHello(int count) {
	printf("Hello\n");
	if (count != 3) {
		sayHello(++count);
	}
}
//피보나치 수열
int fibonacci(int num1) {
	if (num1 == 0) {
		return 0;
	}
	else if (num1 == 1) {
		return 1;
	}
	else {
		return fibonacci(num1 - 1) + fibonacci(num1 - 2);
	}
}

//팩토리얼
int factorial(int num) {
	if (num == 0) {
		return 1;
	}
	else {
		return num * factorial(num - 1);
	}
}

//1 ~ n 까지의 총합을 구하여 반환하는 재귀함수 recursiveSum
//작성하기

int recursiveSum(int n) {
	if (n == 0) {
		return 0;
	}
	else {
	return n + recursiveSum(n - 1);
	//n+ (n-1) + (n-2) +...

	}
}