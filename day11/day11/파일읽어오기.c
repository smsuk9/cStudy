#include <stdio.h>
#include <stdlib.h>

void main() {
	//ȸ������.txt�� �б� �������� text���� ����
	FILE* fp1 = NULL;
	fp1 = fopen("ȸ������.txt", "rt");

	if (fp1 != NULL) {
		char str[128];
		if (fgets(str, 128, fp1) != NULL) {
			//�о�� ���ڿ��� ȭ�鿡 ����Ѵ�.
			printf("%s", str);
		}
		else
		{
			printf("���Ͽ��� ���ڿ��� ���� ���߽��ϴ�.");
		}
		//������ �� ���������, ������ �ݴ´�.
		fclose(fp1);
	}
}