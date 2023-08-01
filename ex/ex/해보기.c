#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void mgr();

void main() {
	mgr();
}

void mgr() {
	char* numCode = (char*)calloc(100, sizeof(char));
	printf("정수 입력 : ");
	scanf("%s", numCode);
	int num = atoi(numCode);
	int square = strlen(numCode);
	int squareFirst = 1;
	for (int i = 0; i < square-1; i++) {
		squareFirst *= 10;
	}
	free(numCode);
	for (int i = squareFirst; i >= 1; i *= 0.1) {
		int numValue = num / i;
		num = num % i;
		printf("%9d의 자리의 숫자 : %d\n",i, numValue);
	}
}