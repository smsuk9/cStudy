#include <stdio.h>

//����� ����
typedef int ElemetType;

typedef struct tagNode {
	ElemetType Data;
	struct tagNode* PrevNode;	//���� ��带 ����Ű�� ������
	struct tagNode* NextNode;	//���� ��带 ����Ű�� ������
}Node;

void main() {

}