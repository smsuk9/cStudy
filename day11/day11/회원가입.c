#include <stdio.h>
#include <stdlib.h>
void main() {
	char id[30];
	char pw[30];
	char name[30];
	int age;

	printf("id�� �Է��ϼ��� : ");
	scanf_s(" %s", id, sizeof(id));
	printf("pw�� �Է��ϼ��� : ");
	scanf_s(" %s", pw, sizeof(pw));
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s(" %s", name, sizeof(name));
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);

	FILE* fp1 = NULL;
	fp1 = fopen("ȸ������.txt", "w");

	//2. �����۾�
	if (fp1 == NULL) {
		printf("���Ͽ��� ����\n");
	}
	else
	{
		printf("���Ͽ��� ����\n");
		//fputs(id, fp1);
		//fputs(pw, fp1);
		//fputs(name, fp1);
		fprintf(fp1, "id : %s\npw:%s\n", id, pw);
		fprintf(fp1, "name : %s\nage:%d\n", name, age);
	}
	fclose(fp1);
}

//�б� �۾�

//���� ���� �б�
//- ������ ��Ʈ�����κ��� �ϳ��� ���ڸ� �о� ���̴� �Լ�

//int fgetc(��Ʈ��); ��Ʈ�� = ����������

//���ڿ� ���� �б�
//- ù��° �Ű������� ���Ͽ��� �о�� ���ڿ��� ������ �޸� �ּҸ� �Ѱ��ش�.
//- �ι�° �Ű������� ������ ������ �ִ� ����
//- ����° �Ű������� ���������͸� �־��ش�.
//int fgets(char* str, int numChars, File* stream);