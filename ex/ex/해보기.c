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
	Node* list = NULL; //list라는 이름의 Node구조체의 주소를 가진 변수를 선언하고 아직 아무런 값이 들어 있지 않다.
	Node* NewNode = SLL_CreateNode(2); 
	//1. 2의 데이터를 입력받고 입력 받은 데이터를 동적 메모리 할당을 받아서 주소로 저장을 한다. 
	//2. 그후 저장된 주소를 반환한다.
	//3. 저장된 주소를 메인에서 전달 받는다.

	/*Node* SLL_CreateNode(ElementType NewData) {
		Node* NewNode = (Node*)malloc(sizeof(Node));
		NewNode->data = NewData; 구조체 Node에 값을 넣는다.
		NewNode->NextNode = NULL; 다음 주소는 아직 없다.
		return NewNode; 새로운 값이 넣어진 node구조체의 주소를 리턴해라
	}*/

	SLL_AppendNode(&list, NewNode);
	//1. 만약 리스트의 값이 없으면 새로 저장된 주소의 값을 초기 인덱스에 저장한다.
	//2. 리스트에 이미 저장되어 있는 값이 존재할경우 리스트의 초기주소를 주소의 끝을 가진다.
	//3. 만약 주소의 끝이 끝이 아니라면 주소의 끝은 다음 주소를 가진다.
	//4. 주소의 끝은 새로운 값을 가진 주소를 가진다.


	/*SLL_AppendNode(Node ** Head, Node* NewNode) { 
	if ((*Head) == NULL) { 리스트의 주소가 아직 없다 = 값이 저장된게 없다 그렇다면
		*Head = NewNode;	새로 입력된 값을 가진 주소를 리스트의 주소로 사용해라.
	}
	else
	{													리스트에 이미 값을 가진 주소(방)가 저장되어 있다면
		Node* Tail = (*Head);				마지막 값을 가진 주소는 지금 막 들어온 값을 가진 주소가 된다.
		while (Tail->NextNode != NULL)  최근 들어온 값을 가진 주소(방)가 있다면 마지막 방의 주소는 지금 저장되어 있는 마지막주소의 다음 주소가 된다. 
		{												그리고 그  주소는 방금 들어온 값의 주소가 된다.
			Tail = Tail->NextNode;		
		}
		Tail->NextNode = NewNode;
	}
}*/
}