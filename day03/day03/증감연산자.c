#include <stdio.h>

void main() {
	//증감연산자
	//데이터를 1씩 증가시키거나 감소시키는 연산자

	//1. 전위형
	//  - 변수 앞에서 사용 ex) ++a, --a
	//2. 후위형
	// - 변수 뒤에서 사용 ex) a++, a--

	int a = 10;
	int b = 10;

	printf("a : %d\n", a);
	printf("a : %d\n", ++a); //a+=1
	printf("a : %d\n", a);

	printf("b : %d\n", b);
	printf("b : %d\n", b++);
	printf("b : %d\n", b);
	//후위형은 (+1), (-1)가지고 있는 형태
	//변수가 다시 한번 호출됐을 때 적용

	int c = 7;

	printf("c : %d\n", c++);//7
	printf("c : %d\n", c++);//8
	printf("c : %d\n", c);//9

	//후위형과 다른 연산을 같이할 때
	printf("a+c : %d\n", a++ + c);//20
	printf("a+c : %d\n", a + c);//21

	//연산자우선순위
	//1. ++, --
	//2. 부호연산자 +,-
	//3. 산술연산자 *, /, %
	//4. 산술연산자 +,-
	//5. 비교연산자 <, >, <=, >=
	//6. 비교연산자 ==, !=
	//7. 대입연산자 =, +=, -=, *=, /=, %=

	int num1 = 3, num2 = 5;

	int result = num1++ + num2 * 3;

	printf("result : %d\n", result);


}