#include <stdio.h>
#define true 1
#define false 0

void main() {
	//c������ ���ڿ��� �����ϱ� ���ؼ���
	//char�迭�� �����ؾ� �Ѵ�.

	//���ڿ��� ���ڵ��� 1���������� �����Ǿ� �ִ� �������̴�.
	//char greet[] = "Hello, Guys!";

	//printf("�迭 greet�� ũ�� : %d\n", sizeof(greet));

	//���ڿ��� �� �ڿ��� �ι���(\0)�� ���ԵǱ� ������ ũ�Ⱑ 13�� ���´�.
	//������ ������ ������ �ǹ�������, ���ڿ����� ���� ���� ������ �� �̶�� �ǹ̷� ���ȴ�.

	//���ڿ��� �����ϱ� ���ؼ��� char�迭�� ũ�⸦ �ι��ڱ��� ����Ͽ�
	//�ۼ��ؾ� �Ѵ�.
	//char goodbye[50] = "Good Bye!";

	//printf("goodbye�� ũ�� : %d\n", sizeof(goodbye));

	//���ڿ��� �Է°� ���
	//1. printf�Լ��� ���� ���ڿ��� ���
	//char mind[30] = "I Love Programming";
	//printf("%s\n", mind);
	//
	//mind[7] = '\0';
	//printf("%s\n", mind);

	//mind[1] = '\0';
	//printf("%s\n", mind);

	//2.scanf�� ���� ���ڿ��� �Է�
	//scanf�Լ��� ���� �Է��� ���鹮��(�����̽���, ��, ����) ������ ���� ����ȴ�.
	//���ڿ��� �Է��� ���� &�� ���� �ʴ´�.
	//���ڿ��� �Է��� ����Ǹ� ���ڿ��� ���� �ڵ����� �ι��ڰ� ���Եȴ�.

	//char str[50];

	//printf("���ڿ��� �Է��ϼ��� : ");
	//scanf_s("%s", str,sizeof(str));
	//printf("�Էµ� ���ڿ� : %s\n", str);

	//������ �迭 ch�� ũ�⸦ ����ڿ��� �Է¹޴´�.
	//�迭�� ���ĺ��� ����.

	//�迭�� ũ�� �Է� : 5
	//ABCDE

	//�迭�� ũ�� �Է� : 2
	//AB

	//65~90

	int userValue;
	int first = 65;
	printf("�迭�� ũ�� �Է� : ");
	scanf_s("%d", &userValue);
	if (userValue > 26) {
		userValue = 26;
	}
	else if (userValue < 0) {
		userValue = 0;
	}
	char arr[27];
	for (int i = 0; i < sizeof(arr)-1; i++) {
		arr[i] = (char)(first+i);
	}
	arr[26] = '\0';
	for (int i = 0; i < userValue; i++) {
		printf("%c", arr[i]);
	}
}