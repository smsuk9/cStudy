#include<stdio.h>

void main() {
	//싱글포인터와 더블포인터
	//포인터 변수는 주소값을 저장하고 있다.
	//그런데 포인터도 변수이기 때문에 메모리 공간을
	//할당받아서 사용하고 있다.

	//포인터 변수의 주소값 자체를 저장하는 것이 가능하다.
	//이를 저장하는 변수를 두고 포인터를 저장한다고 하여
	//더블포인터라고 한다.

	int num = 3; //데이터를 저장하는 일반 정수형 변수 num
	int* ptr = &num; //변수 num의 주소를 저장하는 포인터 변수 ptr
	int** dptr = &ptr;
	int* ptr2;

	printf("%p %p\n", ptr, dptr);
	printf("%d %d\n", num, **dptr);

	ptr2 = *dptr;//dptr이 갖고 있는 ptr의 주소를 ptr2에 저장

	*ptr2 = 9;
	printf("num : %d **dptr : %d\n", num,**dptr);
}