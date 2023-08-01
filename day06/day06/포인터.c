#include <stdio.h>

void main() {
	////포인터란?
	////메모리의 주소값을 의미하며 주소값을 저장하는 변수를 가리켜
	////포인터 변수라고 합니다.

	////일반적인 변수를 선언이나 초기화를 하게 되면 메모리에 변수의
	////자료형에 해당하는 만큼 공간이 할당이 되는데 메모리 공간으로
	////접근할 수 있는 주소가 있다.

	////포인터 변수의 선언
	////자료형* 포인터변수명;
	//int num = 30; //30이라는 값을 메모리에 할당한다.
	//int* pNum = &num; //& : 피연산자의 주소값을 반환하는 연산자

	//char cnum = 5; //1byte
	//int inum = 999; //4byte
	//double dnum = 3.14; //8byte

	//char* pCnum = &cnum;
	//int* pInum = &inum;
	//double* pDnum = &dnum;

	//printf("%p\n", pCnum);
	//printf("%p\n", pInum);
	//printf("%p\n", pDnum);

	//printf("포인터 변수의 크기\n");
	////모든 포인터 변수의 크기는 동일하다.
	//printf("sizeof(pcnum) : %d\n", sizeof(pCnum));
	//printf("sizeof(pInum) : %d\n", sizeof(pInum));
	//printf("sizeof(pDnum) : %d\n", sizeof(pDnum));

	////포인터 연산자
	////& : 변수의 주소값을 반환하는 연산자
	////* : 포인터가 가리키는 메모리를 참조하는 연산자

	////참조연산자 *를 사용하면 해당 메모리주소(num)에 저장되어 있는
	////값을 반환한다.
	//printf("num : %d\n", *pNum);

	////포인터를 사용하는 이유
	////임베디드 프로그래밍에서 메모리를 제어하는 경우
	////동적 할당 선언 및 동적 할당 메모리에 대한 접근을 시도하는 경우

	////정수 + 정수 (o)
	////실수 + 정수 (o)
	////실수 + 실수 (o)

	////주소 + 주소 (x)

	////자기 자신의 주소에 숫자를 증감하는 연산은 가능하다
	////주소 +1, 주소++, 주소 -1, 주소--;
	//int num1 = 40;
	//int* pNum1 = &num1;
	//printf("pNum : %d\n", num);
	//printf("pNum +1 : %d\n", *(pNum + 1));
	//printf("pNum +2 : %d\n", *(pNum + 2));
	//printf("----------------------\n");
	//printf("pCnum : %p\n", pCnum);
	//printf("pCnum+1 : %p\n", pCnum+1);
	//printf("pCnum+2 : %p\n", pCnum+2);

	//정수 10을 저장하는 변수 number를 초기화를 하고, number가 저장된 메모리 주소
	//를 저장하는 포인터변수 pNumber를 만든다. 그리고 printf를 호출하여 정수10과
	//변수 number의 주소를 출력하세요
	//단, 포인터변수 pNumber만 사용해야 한다.

	int number = 10;
	int* pNumber = &number;
	printf("num의 정수 : %d\n", *pNumber);
	printf("num의 주소 : %p\n", pNumber);
	*pNumber = 20;
	printf("num의 정수 : %d\n", *pNumber);
	printf("num의 주소 : %p\n", pNumber);
	//포인터 변수를 통해서 원본 변수에 새로운 값을 대입할 수 있다.

}