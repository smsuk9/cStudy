#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef int ElementType;
typedef struct
{
	ElementType data;
	struct Node* NextNode;
}Node;

Node* SLL_CreateNode(ElementType NewData) {
	Node* NewNode = (Node*)malloc(sizeof(Node));
	NewNode->data = NewData;
	NewNode->NextNode = NULL;
	return NewNode;
}

void SLL_DestroyNode(Node* Node) {
	free(Node);
}

void SLL_AppendNode(Node** Head, Node* NewNode) {
	if ((*Head) == NULL) {
		*Head = NewNode;
	}
	else
	{
		Node* Tail = (*Head);
		while (Tail->NextNode != NULL)
		{
			Tail = Tail->NextNode;
		}
		Tail->NextNode = NewNode;
	}
}

Node* SLL_GetNodeAt(Node* Head, int Location) {
	Node* Current = Head;
	while (Current != NULL && (--Location) >= 0) {
		Current = Current->NextNode;
	}
	return Current;
}
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
	Node* list = NULL; //list��� �̸��� Node����ü�� �ּҸ� ���� ������ �����ϰ� ���� �ƹ��� ���� ��� ���� �ʴ�.
	Node* NewNode = SLL_CreateNode(2); 
	//1. 2�� �����͸� �Է¹ް� �Է� ���� �����͸� ���� �޸� �Ҵ��� �޾Ƽ� �ּҷ� ������ �Ѵ�. 
	//2. ���� ����� �ּҸ� ��ȯ�Ѵ�.
	//3. ����� �ּҸ� ���ο��� ���� �޴´�.

	/*Node* SLL_CreateNode(ElementType NewData) {
		Node* NewNode = (Node*)malloc(sizeof(Node));
		NewNode->data = NewData; ����ü Node�� ���� �ִ´�.
		NewNode->NextNode = NULL; ���� �ּҴ� ���� ����.
		return NewNode; ���ο� ���� �־��� node����ü�� �ּҸ� �����ض�
	}*/

	SLL_AppendNode(&list, NewNode);
	//1. ���� ����Ʈ�� ���� ������ ���� ����� �ּ��� ���� �ʱ� �ε����� �����Ѵ�.
	//2. ����Ʈ�� �̹� ����Ǿ� �ִ� ���� �����Ұ�� ����Ʈ�� �ʱ��ּҸ� �ּ��� ���� ������.
	//3. ���� �ּ��� ���� ���� �ƴ϶�� �ּ��� ���� ���� �ּҸ� ������.
	//4. �ּ��� ���� ���ο� ���� ���� �ּҸ� ������.


	/*SLL_AppendNode(Node ** Head, Node* NewNode) { 
	if ((*Head) == NULL) { ����Ʈ�� �ּҰ� ���� ���� = ���� ����Ȱ� ���� �׷��ٸ�
		*Head = NewNode;	���� �Էµ� ���� ���� �ּҸ� ����Ʈ�� �ּҷ� ����ض�.
	}
	else
	{													����Ʈ�� �̹� ���� ���� �ּ�(��)�� ����Ǿ� �ִٸ�
		Node* Tail = (*Head);				������ ���� ���� �ּҴ� ���� �� ���� ���� ���� �ּҰ� �ȴ�.
		while (Tail->NextNode != NULL)  �ֱ� ���� ���� ���� �ּ�(��)�� �ִٸ� ������ ���� �ּҴ� ���� ����Ǿ� �ִ� �������ּ��� ���� �ּҰ� �ȴ�. 
		{												�׸��� ��  �ּҴ� ��� ���� ���� �ּҰ� �ȴ�.
			Tail = Tail->NextNode;		
		}
		Tail->NextNode = NewNode;
	}
}*/
}