#include <stdio.h>
#include <string.h>

void main() {
	char title[20] = "��DS Cafe��";
	char menu[100] = "���߰��ϱ�\n������ϱ�\n��˻��ϱ�\n������ϱ�\n���Ϻ���\n�쳪����";
	//�޴� �̸�, �޴� ����
	char arName[200][100] = { "", };//arName �޴��ִ밳�� 200�� ����100�������Է°���
	char temp[100] = "";//�ӽ� ������
	int arPrice[200] = { 0, };//����
	int choice;//�޴� ���� case
	int cnt = 0;//��ϵ� �������� ����
	int isDup = 0;

	while (1) {
		printf("%s\n%s\n", title, menu);
		scanf_s("%d", &choice);
		if (choice == 6) {
			break;
		}
		switch (choice)
		{
		case 1://�߰��ϱ�
			printf("�޴� �̸� : ");
			scanf_s("%s", temp, sizeof(temp));
			isDup = 0;

			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {//�޴��߰��� �ߺ��˻�
					isDup = 1;
					break;
				}
			}
			if (!isDup) {
				printf("�޴� ���� : ");
				scanf_s("%d", arPrice + cnt);
				strcpy_s(arName[cnt], sizeof(temp), temp);
				cnt++;
			}
			else
			{
				printf("�̹� �����ϴ� ��ǰ�Դϴ�.");
			}
			break;
		case 2://�����ϱ�
			printf("������ ��ǰ �� �Է� : ");
			scanf_s("%s", temp, sizeof(temp));
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(temp, arName[i])) {
					while (1)
					{
						int number;
						printf("��ǰ���� ���� �Ͻðڽ��ϱ�?\n1.�� 2. �ƴϿ� :");
						scanf_s("%d", &number);
						if (number == 1) {
							printf("%s�� ������ ��ǰ�� �Է� : ", temp);
							scanf_s("%s", temp, sizeof(temp));
							strcpy_s(arName[i], sizeof(arName[i]), temp);
							printf("%s�� ���� �ݾ��� �Է� : ", arName[i]);
							scanf_s("%d", &arPrice[i]);
							printf("����Ǿ����ϴ�.\n");
							break;
						}
						else if (number == 2) {

							break;
						}
						else {
							printf("�߸� �Է��ϼ̽��ϴ�.\n�ٽ� �Է��� �ּ���\n");
						}
					}
				}
				else
				{
					printf("������ ��ǰ�� ���� ���� �ʽ��ϴ�.\n");
				}
			}
			break;
		case 3://�˻��ϱ�
			break;
		case 4://�����ϱ�
			break;
		case 5://��Ϻ���
			printf("��ǰ��(����)\n");
			for (int i = 0; i < cnt; i++) {
				printf("%s(%d��)\n", *(arName + i), *(arPrice + i));
				printf("\n");
			}
			if (cnt == 0) {
				printf("��ǰ�� �������� �ʽ��ϴ�\n\n");
			}
			break;
		}
	}
}