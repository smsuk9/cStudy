#include <stdio.h>
#include <string.h>

void main() {
	char title[20] = "♨DS Cafe♨";
	char menu[100] = "①추가하기\n②수정하기\n③검색하기\n④삭제하기\n⑤목록보기\n⑥나가기";
	//메뉴 이름, 메뉴 가격
	char arName[200][100] = { "", };//arName 메뉴최대개수 200개 가격100개글자입력가능
	char temp[100] = "";//임시 데이터
	int arPrice[200] = { 0, };//가격
	int choice;//메뉴 선택 case
	int cnt = 0;//등록된 데이터의 개수
	int isDup = 0;

	while (1) {
		printf("%s\n%s\n", title, menu);
		scanf_s("%d", &choice);
		if (choice == 6) {
			break;
		}
		switch (choice)
		{
		case 1://추가하기
			printf("메뉴 이름 : ");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;

			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {//메뉴추가시 중복검사
					isDup = 1;
					break;
				}
			}
			if (!isDup) {
				printf("메뉴 가격 : ");
				scanf_s("%d", arPrice + cnt);
				strcpy_s(arName[cnt], sizeof(temp), temp);
				cnt++;
			}
			else
			{
				printf("이미 존재하는 상품입니다.");
			}
			break;
		case 2://수정하기
			printf("수정할 상품 명 입력 : ");
			scanf_s("%s", temp, sizeof(temp));
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {
					while (1)
					{
						int number;
						printf("상품명을 변경 하시겠습니까?\n1.예 2. 아니오 :");
						scanf_s("%d", &number);
						if (number == 1) {
							printf("%s의 변경할 상품명 입력 : ", temp);
							scanf_s("%s", temp, sizeof(temp));
							strcpy_s(arName[i], sizeof(arName[i]), temp);
							printf("%s의 변경 금액을 입력 : ", arName[i]);
							scanf_s("%d", &arPrice[i]);
							printf("변경되었습니다.\n");
							break;
						}
						else if (number == 2) {

							break;
						}
						else {
							printf("잘못 입력하셨습니다.\n다시 입력해 주세요\n");
						}
					}
				}
				else
				{
					printf("수정할 상품이 존재 하지 않습니다.\n");
				}
			}
			break;
		case 3://검색하기
			break;
		case 4://삭제하기
			break;
		case 5://목록보기
			printf("상품명(가격)\n");
			for (int i = 0; i < cnt; i++) {
				printf("%s(%d원)\n", *(arName + i), *(arPrice + i));
				printf("\n");
			}
			if (cnt == 0) {
				printf("상품이 존재하지 않습니다\n\n");
			}
			break;
		}
	}
}