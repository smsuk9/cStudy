#include <stdio.h>
#define true 1

typedef struct Person
{
	char name[30];
	int age;
}P;
void main() {
	//int arr[3] 정수를 3개 저장할 수 있는 배열
	//P parr[3] 사람의 정보를 3개 저장할 수 있는 배열

	//길이가 3인 구조체 배열의 초기화
	P pArr[3] = { {"홍길동",30},
						{"김길동",25},
						{"박길동",29}
					};
	printf("%s\n", pArr[0].name);
	
	P pArr2[3];
	strcpy(pArr2[0].name, "김코딩");
	strcpy(pArr2[1].name, "구씨");
	strcpy(pArr2[2].name, "민호");

	pArr2[0].age = 28;
	pArr2[1].age = 84;
	pArr2[2].age = 29;

	(*(pArr2 + 2)).age = 30;

	for (int i = 0; i < 3; i++)
	{
		printf("이름은 %s이고, 나이는 %d살입니다.\n", pArr2[i].name, pArr2[i].age);
	}
}