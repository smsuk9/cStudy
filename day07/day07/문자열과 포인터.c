#include <stdio.h>

void main() {
	//���ڿ��� ���ڷ� �̷���� �迭
	//char greet[] = "Hello";

	//�޸� ������ ���ڿ� "Hello�� ����ǰ�", ���ڿ��� ù��° ����
	//H�� �ּҰ� ������ ���� pGreet�� ����ȴ�.

	//char* pGreet = "Hello";

	//printf("%s", pGreet);

	char good[] = "Good";
	char* bad = "Bad";

	printf("%s %s\n", good,bad);

	//�迭����� ���ڿ� ����
	good[0] = 'H';//����
	printf("%s\n", good);
	//good = "New Good"; �Ұ���
	//�迭�� �̸��� ����̱� ������ ���� �ٽ� �����ϴ°��� �Ұ����ϴ�.
	//���ο� �ּҰ��� �Ҵ� �� �� ����.
	
	//������ ��� ���ڿ� ����
	//bad[0] = 'S';//�Ұ���
	//������ ��� ���ڿ��� ���� ��Ұ� �Ҵ� �Ұ���
	bad = "New Bad";
	printf("%s\n", bad);

}