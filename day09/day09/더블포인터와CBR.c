#include <stdio.h>

void swapNum(int**, int**);

void main() {
	int num1 = 66, num2 = 99;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	printf("*prt1, *ptr2 : %d %d\n", *ptr1, *ptr2);
	swapNum(&ptr1, &ptr2);//값의 교환이 아닌 주소값의 교환
	printf("*prt1, *ptr2 : %d %d\n", *ptr1, *ptr2);
	printf("num1, num2 : %d %d\n", num1, num2);

}
void swapNum(int** dptr1, int** dptr2) {
	int* temp = *dptr1;
	*dptr1 = *dptr2;
	*dptr2 = temp;

}