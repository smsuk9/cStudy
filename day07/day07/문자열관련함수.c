#include <stdio.h>
#define true 1
void main() {
	//���� ���� ����� �Լ�
	//getchar() : Ű���忡�� ���ڸ� �ϳ� �Է¹޾� �����͸� ��ȯ���ִ� �Լ�
	//putchar() : ���޵� ���� ������ ����ϴ� ǥ�� ��� �Լ�
	/*int ch1, ch2;
	
	ch1 = getchar();
	ch2 = getchar();

	putchar(ch1), putchar(ch2);*/

	//���� �Է� �����ϱ�
	//c���� EOF��� ����� �����Ѵ�. End Of File�� �ǹ��ϸ�, ǥ�� �����
	//���ڸ� �Է��� �� �Է��� ����Ǿ����� ��Ÿ����.

	/*int ch;

	while (true)
	{
		ch = getchar();

		if (ch == EOF) {
			break;
		}
		putchar(ch);
	}*/

	//���ڿ� ���� ����� �Լ�
	//gets(����) : Ű���忡�� ���ڿ� �Է¹޴´�.
	//puts(����) : ���޵� ���� ���

	char ch[30];
	/*scanf_s("%s", ch,sizeof(ch));
	printf("�̸� : %s\n", ch);*/
	//gets(ch);
	//puts(ch);//�ڵ����� �� �ٲ�
	//printf("�� ���ڿ��� ���� �ٿ��� ��µ˴ϴ�.\n");

	//���ڿ� ó�� �Լ�
	//strlen(str) : �ι��ڸ� ������ ���ڿ��� ���̸� ��ȯ
	// 
	//strcpy(str1,str2) : str2�� �ּ��� ���ڿ��� str1�� �ּҿ� ����
	//strncpy(str1,str2,count) : ���ϴ� ������ŭ ����
	// 
	//strcat(str1,str2) : str2�� �ּ��� ���ڿ��� str1�� �ּ��� ���ڿ��� �̾� ���̱�
	//strncat(str1,str2,count) : ���ϴ� ������ŭ �̾������
	// 
	//strcmp(str1,str2) : ���ڷ� ���޵� �� ���ڿ��� ���Ͽ� ������ 0, �ٸ��� 0�� �ƴ� ���� ��ȯ
	//strncmp(str1,str2,count) : �տ��� ���� ���� ���ϴ� ������ŭ �񱳸� �Ѵ�.

	char str1[50] = "apple is good";
	char str2[50] = "berry is good";
	char str3[50];
	printf("str1�� ���� : %d, str2�� ���� : %d\n", strlen(str1),strlen(str2));

	//str3�� str1�� ���� �����ϱ�
	strcpy(str3, str1);

	//str2�� str1�� �ټ����ڸ� �����ϱ�
	strncpy(str2, str1, 5);

	printf("%s\n%s\n%s\n", str1, str2, str3);

	char str4[50] = "Michael";
	char str5[50] = "Michael";

	//str4�� ���ڿ� �̾������
	strcat(str4, "Bolton");
	printf("%s\n", str4);
	
	//str5�� 7���� ���ڿ� ���̱�
	strncat(str5, "Jackson Five", 7);
	printf("%s\n", str5);

	//str4�� str5 ��
	printf("�� ��� : %d\n", strcmp(str4, str5));

	//str4�� str5�� ���� 7�� ���ڸ� ��
	printf("�� ��� : %d\n", strncmp(str4, str5, 7));

}