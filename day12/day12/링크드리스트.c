#include <stdio.h>
#include <stdlib.h>

//������ ElementType�� int�� ��������
//���߿� ���� �ʿ��� �ڷ������� �ٲ㼭 ����ϸ� �ȴ�.
typedef int ElementType;
typedef struct
{
	ElementType data;	//������
	struct Node* NextNode; //���� ����� �ּҸ� ������ �� �ִ� ������ ����
}Node;

//����� ������ �Ҹ�
//���� Heap������ �����ؼ� �츮�� ���� �� �޸𸮸� �Ҵ�ް�
//���� �� �Ҹ���Ѿ� �Ѵ�.

Node* SLL_CreateNode(ElementType NewData) {
	Node* NewNode = (Node*)malloc(sizeof(Node));
	//malloc()�Լ��� �޸𸮸� �Ҵ����ְ�, �� �ּҸ� void*������ ��ȯ�Ѵ�.
	//�׷��� ������ Node*������ ����ȯ�� ����� �Ѵ�.
	NewNode->data = NewData;
	NewNode->NextNode = NULL;
	return NewNode;
}
//����� �Ҹ�
SLL_DestroyNode(Node* Node) {
	free(Node);
}

//��� �߰� ����
//����� �߰��� ��ũ�� ����Ʈ�� Tail Node �ڿ� ���ο� Node�� ���� �����ϴ� �����̴�.
//������ �������� ���

SLL_AppendNode(Node** Head, Node* NewNode) {
	//HeadNode�� NULL�̶�� ���ο� Node�� Head�� �ȴ�.
	if ((*Head) == NULL) {
		*Head = NewNode;
	}
	else
	{
		//Tail�� ã�� NewNode�� �����Ѵ�.
		Node* Tail = (*Head);
		while (Tail->NextNode != NULL)
		{
			Tail = Tail->NextNode;
		}
		Tail->NextNode = NewNode;
	}
}
//���������͸� ��� �ϴ� ����
//SLL_AppendNode()�Լ��� ȣ���� �� SLL_AppendNode()�� �Ű���������
//���������̱� ������ Stack������ ���������.
//List�� Head, NewNode�� �Ű����� NewNode�� �ּҸ� '����'�ؼ� �ִ´�.
//���� List�� �ּҴ� ������ ���� �ʴ� ��Ȳ�̴�.
//�׷��� ������ SLL_AppendNode()�Լ��� ȣ��ǰ� �� ��, �Ű����� Head�� NewNode�� �Ҹ�Ǳ� ������ List�� �׳� NULL�� �����ְ� �ȴ�.
//�����Ͱ� ���� ���� �ƴ� ������ �ڽ��� �ּҸ� �Ѱܾ� �ϴ°��̴�.

//����� Ž�� ����
//�迭������ � ��ġ�� �ִ� ��Ҹ� �������� ���� �� ÷�ڿ� index�� ������
//������ �� �ִ�.
//�׿� ���� ��ũ�� ����Ʈ�� ������ �����ؼ� ���� ��忡 ���� �����͸�
//¡�˴ٸ� ��� �������� ����� ������ŭ ���ľ߸� ���ϴ� ��ҿ� ������ �� �ִ�.
//ã���� �ϴ� ��Ұ� N��°�� ������ N-1���� ��带 ���ľ� �Ѵ�.

//��� Ž��
Node* SLL_GetNodeAt(Node* Head, int Location) {
	Node* Current = Head;
	while (Current != NULL && (--Location) >= 0) {
		Current = Current->NextNode;
	}
	return Current;
}

//��� ����
//��ũ�� ����Ʈ ���� ������ ��带 �����ϴ� ����
void SLL_RemoveNode(Node** Head, Node* Remove) {
	if (*Head == Remove) {
		*Head = Remove->NextNode;
	}
	else
	{
		Node* Current = *Head;
		while (Current != NULL && Current->NextNode != Remove)
		{
			Current = Current->NextNode;
		}
		if (Current != NULL) {
			Current->NextNode = Remove->NextNode;
		}
	}
}

//������
void SLL_InsertAfter(Node* Current, Node* NewNode) {
	NewNode->NextNode = Current->NextNode;
	Current->NextNode = NewNode;
}

int SLL_GetNodeAtCount(Node* Head) {
	int Count = 0;
	Node* Current = Head;
	while (Current != NULL)
	{
		Current = Current->NextNode;
		Count++;
	}
	return Count++;
}

void main() {
	//�̷��� ������ Node����ü ������ �����ϰ� ��带 ���� �� �ִ�.
	Node* List = NULL; //List
	Node* NewNode = NULL;	//Creat�� ����� �ּҸ� ����� ����
	Node* MyNode = NULL;	//Ž���� ����� �ּҸ� ����� ����
	Node* Current = NULL; //���� ����� �ּҸ� ����� ����
	int Count = 0;	//����� ������ ���ִ� ����

	NewNode = SLL_CreateNode(117);
	SLL_AppendNode(&List, NewNode); //������ Node�� List�� �߰�
	NewNode = SLL_CreateNode(119);
	SLL_AppendNode(&List, NewNode);//������ Node�� List�� �߰�

	Count = SLL_GetNodeAtCount(List);	//����Ʈ ��������

	//��ü ����Ʈ�� ���� ���
	for (int i = 0; i < Count; i++)
	{
		Current = SLL_GetNodeAt(List, i);
		printf("List[%d] : %d\n", i, Current->data);
	}

	NewNode = SLL_CreateNode(212);
	SLL_AppendNode(&List, NewNode);

	MyNode = SLL_GetNodeAt(List, 1);
	SLL_RemoveNode(&List, MyNode);
	SLL_DestroyNode(MyNode);

	Current = SLL_GetNodeAt(List, 0);
	NewNode = SLL_CreateNode(3000);

	SLL_InsertAfter(Current, NewNode);

	Count = SLL_GetNodeAtCount(List);

	for (int i = 0; i < Count; i++)
	{
		Current = SLL_GetNodeAt(List, i);
		printf("List[%d] : %d\n", i, Current->data);
	}

	//��� ��带 �޸𸮿��� ����
	for (int i = 0; i < Count; i++)
	{
		Current = SLL_GetNodeAt(List, 0);
		if (Current != NULL) {
			SLL_RemoveNode(&List, Current);
			SLL_DestroyNode(Current);
		}
	}

	//��ũ�� ����Ʈ�� ����
	//�迭���� ���ο� ����� �߰� ���� ������ ���� ������.
	//����
	//Ư�� ��ġ�� �����ϴ� ������ ������.

	MyNode = SLL_GetNodeAt(List, 0);
	printf("%d\n", MyNode->data);
	MyNode = SLL_GetNodeAt(List, 1);
	printf("%d\n", MyNode->data);

	NewNode = SLL_CreateNode(212);
	SLL_AppendNode(&List, NewNode);

	SLL_RemoveNode(&List, MyNode);	//�� ��° ��带 ����
	SLL_DestroyNode(MyNode);	//������ ����� ���� �޸� �Ҵ� ����

	MyNode = SLL_GetNodeAt(List, 1);	//����Ʈ�� �ι�° ��Ҹ� �ٽ� ȣ��
	printf("%d\n", MyNode->data);	//212




	//������ ������ ����
	//�ڷ���* �����ͺ�����;

	//[����Ʈ]
	//- ����Ʈ�� ������ ���� �׸���� �����̴�.
	//- �����͸� ������ �����Ѵ�.
	//- �ߺ��� �������� ������ ����Ѵ�.

	//���(Node)
	//- ����Ʈ�� ����� �̷�� ������ ��Ҹ� ����� Ī�Ѵ�.
	//- �� ����� ������ ����, ť, Ʈ���� �ϸ鼭 ��� ����ϰ� �� ����
	// - ����Ʈ���� ù��° Node�� Head, ������ ���� Tail�̶�� �θ���.

	//[����Ʈ�� �迭�� ��]
	//�迭
	//- �迭�� ����Ʈó�� ������ ����� �ٷ��, C���� �⺻������ �����ϴ� �ڷᱸ���̱� ������ �����ڰ� ���� ������ �ʿ䰡 ����.
	//- �����ϴ� �������� �ݵ�� �迭�� ũ�⸦ �����ؾ� �ϰ� ������ �Ŀ��� ũ�⸦ ������ �� ����.
	//- ������ ���� �ȿ� �ִ� ���� ����� �ʿ�� �� �� ���� �ȿ� �ִ� ������ ������ �ϳ��� ���� ���� �ְ�, ��õ��, �������� �������� �ִ�.

	//����Ʈ
	//- �迭ó�� ���� ���� ����� �����鼭��, �迭�� �޸� �����ϰ� ũ�⸦ �ٲ� �� �ִ� �ڷᱸ���̴�.
	//- �����ϸ鼭�� Ȱ�뵵�� ����, ����, ť , Ʈ���� ���� �ڷᱸ���� ������ �� �ִ� ����� �ȴٴ� ������ �߿��� �ǹ̸� ������ �ִ�.
	//- ��ũ�� ����Ʈ, ���� ��ũ�� ����Ʈ, ȯ�� ��ũ�� ����Ʈ ���� �ִ�.

	//[��ũ�� ����Ʈ]
	//- ����Ʈ�� �����ϴ� �������� ��� �߿����� ���� ������ ����̴�.
	//- ��ũ�� ����Ʈ�� ��带 �����ؼ� ���� ����Ʈ�̴�.

	//��ũ�� ����Ʈ������ ���
	//- ��ũ�� ����Ʈ�� �����͸� �����ϴ� �ʵ��, ���� ������ ���� �� ������ �ϴ� �����ͷ� �̷���� �ִ�.

	//��ũ�� ����Ʈ�� �ֿ� ����
	//(ADT :Abstract Data Types)
	//- �߻� ������ ����
	//- �ڷᱸ���� ���� ����� ǥ���ϴ� ������ ����
	//- ��ȸ, �߰�, ����, ���� �ϴ� ���� �Ϸ��� ��ɵ�
	//- C ���� ǥ���ϸ� �Լ��� �ȴ�.

	//��ũ�� ����Ʈ���� �� ������ ������ �ʿ��ϴ�.
	//1. �ڷᱸ���� �����ϱ� ���� ����
	//2. �ڷᱸ���� ����� �����͸� Ȱ���ϱ� ���� ����

	//6���� �ֿ� ����
	//����� ����/�Ҹ�
	//����� �߰�(Append Node)
	//����� Ž��(GetNodeAt)
	//����� ����(RemoveNode)
	//����� ����(InsertAfter)

	//[���� ��ũ�� ����Ʈ]
	//- ��ũ�� ����Ʈ�� Ž�� ����� ������ �ڷᱸ���̴�.
	//- ��ũ�帮��Ʈ���� � ��带 ã������ Head���� Tail�������θ� Ž���� �����ߴ�.
	//- ���� ��ũ�� ����Ʈ������ ����� Ž���� �����ϴ�.
	//- ����� Ž���� �������� ������ ����Ʈ�� �����ϴ� Node�� ������ ����Ǿ��� �����̴�.

	//- ���� ��ũ�� ����Ʈ�� ���� �ڱ� �ڽ��� �տ� �ִ� ��带 ����Ű�� �����͵� ������ �ִ�.

	//- �׷��� ������ ���� ��ũ�� ����Ʈ�� ���� �յڷ� �̵��� �� �ִ�.
}