#include <stdio.h>
#include <stdlib.h>

//지금은 ElementType을 int로 정했지만
//나중에 각자 필요한 자료형으로 바꿔서 사용하면 된다.
typedef int ElementType;
typedef struct
{
	ElementType data;	//데이터
	struct Node* NextNode; //다음 노드의 주소를 저장할 수 있는 포인터 변수
}Node;

//노드의 생성과 소멸
//노드는 Heap영역에 생성해서 우리가 원할 때 메모리를 할당받고
//원할 때 소멸시켜야 한다.

Node* SLL_CreateNode(ElementType NewData) {
	Node* NewNode = (Node*)malloc(sizeof(Node));
	//malloc()함수는 메모리를 할당해주고, 그 주소를 void*형으로 반환한다.
	//그렇기 때문에 Node*형으로 형변환을 해줘야 한다.
	NewNode->data = NewData;
	NewNode->NextNode = NULL;
	return NewNode;
}
//노드의 소멸
SLL_DestroyNode(Node* Node) {
	free(Node);
}

//노드 추가 연산
//노드의 추가는 링크드 리스트의 Tail Node 뒤에 새로운 Node를 만들어서 연결하는 연산이다.
//꼬리를 덧붙히는 모양

SLL_AppendNode(Node** Head, Node* NewNode) {
	//HeadNode가 NULL이라면 새로운 Node가 Head가 된다.
	if ((*Head) == NULL) {
		*Head = NewNode;
	}
	else
	{
		//Tail을 찾아 NewNode에 연결한다.
		Node* Tail = (*Head);
		while (Tail->NextNode != NULL)
		{
			Tail = Tail->NextNode;
		}
		Tail->NextNode = NewNode;
	}
}
//더블포인터를 써야 하는 이유
//SLL_AppendNode()함수를 호출할 때 SLL_AppendNode()의 매개변수들은
//지역변수이기 때문에 Stack영역에 만들어진다.
//List는 Head, NewNode는 매개변수 NewNode에 주소를 '복사'해서 넣는다.
//정작 List의 주소는 전달이 되지 않는 상황이다.
//그렇기 때문에 SLL_AppendNode()함수가 호출되고 난 뒤, 매개변수 Head와 NewNode는 소멸되기 때문에 List는 그냥 NULL로 남아있게 된다.
//포인터가 가진 값이 아닌 포인터 자신의 주소를 넘겨야 하는것이다.

//노드의 탐색 연산
//배열에서는 어떤 위치에 있는 요소를 꺼내오고 싶을 때 첨자에 index만 넣으면
//가져올 수 있다.
//그에 비해 링크드 리스트는 헤드부터 시작해서 다음 노드에 대한 포인터를
//징검다리 삼아 차근차근 노드의 개수만큼 거쳐야만 원하는 요소에 접근할 수 있다.
//찾고자 하는 요소가 N번째에 있으면 N-1개의 노드를 거쳐야 한다.

//노드 탐색
Node* SLL_GetNodeAt(Node* Head, int Location) {
	Node* Current = Head;
	while (Current != NULL && (--Location) >= 0) {
		Current = Current->NextNode;
	}
	return Current;
}

//노드 삭제
//링크드 리스트 내의 임의의 노드를 삭제하는 연산
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

//노드삽입
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
	//이렇게 선언한 Node구조체 변수로 간단하게 노드를 만들 수 있다.
	Node* List = NULL; //List
	Node* NewNode = NULL;	//Creat한 노드의 주소를 담아줄 변수
	Node* MyNode = NULL;	//탐색된 노드의 주소를 담아줄 변수
	Node* Current = NULL; //현재 노드의 주소를 담아줄 변수
	int Count = 0;	//노드의 개수를 세주는 변수

	NewNode = SLL_CreateNode(117);
	SLL_AppendNode(&List, NewNode); //생성한 Node를 List에 추가
	NewNode = SLL_CreateNode(119);
	SLL_AppendNode(&List, NewNode);//생성한 Node를 List에 추가

	Count = SLL_GetNodeAtCount(List);	//리스트 개수세기

	//전체 리스트에 대한 출력
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

	//모든 노드를 메모리에서 제거
	for (int i = 0; i < Count; i++)
	{
		Current = SLL_GetNodeAt(List, 0);
		if (Current != NULL) {
			SLL_RemoveNode(&List, Current);
			SLL_DestroyNode(Current);
		}
	}

	//링크드 리스트의 장점
	//배열보다 새로운 노드의 추가 삽입 삭제가 쉽고 빠르다.
	//단점
	//특정 위치에 접근하는 연산은 느리다.

	MyNode = SLL_GetNodeAt(List, 0);
	printf("%d\n", MyNode->data);
	MyNode = SLL_GetNodeAt(List, 1);
	printf("%d\n", MyNode->data);

	NewNode = SLL_CreateNode(212);
	SLL_AppendNode(&List, NewNode);

	SLL_RemoveNode(&List, MyNode);	//두 번째 노드를 제거
	SLL_DestroyNode(MyNode);	//제거한 요소의 동적 메모리 할당 해제

	MyNode = SLL_GetNodeAt(List, 1);	//리스트의 두번째 요소를 다시 호출
	printf("%d\n", MyNode->data);	//212




	//포인터 변수의 선언
	//자료형* 포인터변수명;

	//[리스트]
	//- 리스트란 순서를 가진 항목들의 모임이다.
	//- 데이터를 나란히 저장한다.
	//- 중복된 데이터의 저장을 허용한다.

	//노드(Node)
	//- 리스트의 목록을 이루는 개별의 요소를 노드라고 칭한다.
	//- 이 노드라는 개념은 스택, 큐, 트리를 하면서 계속 사용하게 될 개념
	// - 리스트에서 첫번째 Node는 Head, 마지막 노드는 Tail이라고 부른다.

	//[리스트와 배열의 비교]
	//배열
	//- 배열은 리스트처럼 데이터 목록을 다루고, C에서 기본적으로 제공하는 자료구조이기 때문에 개발자가 따로 구현할 필요가 없다.
	//- 생성하는 시점에서 반드시 배열의 크기를 지정해야 하고 생성한 후에는 크기를 변경할 수 없다.
	//- 임의의 폴더 안에 있는 파일 목록을 필요로 할 때 폴더 안에 있는 파일의 개수는 하나가 있을 수도 있고, 수천개, 수만개가 있을수도 있다.

	//리스트
	//- 배열처럼 집합 보관 기능을 가지면서도, 배열과 달리 유연하게 크기를 바꿀 수 있는 자료구조이다.
	//- 간단하면서도 활용도가 높고, 스택, 큐 , 트리와 같은 자료구조를 이해할 수 있는 기반이 된다는 점에서 중요한 의미를 가지고 있다.
	//- 링크드 리스트, 더블 링크드 리스트, 환형 링크드 리스트 등이 있다.

	//[링크드 리스트]
	//- 리스트를 구현하는 여러가지 방법 중에서도 가장 간단한 방법이다.
	//- 링크드 리스트는 노드를 연결해서 만든 리스트이다.

	//링크드 리스트에서의 노드
	//- 링크드 리스트는 데이터를 보관하는 필드와, 다음 노드와의 연결 고리 역할을 하는 포인터로 이루어져 있다.

	//링크드 리스트의 주요 연산
	//(ADT :Abstract Data Types)
	//- 추상 데이터 형식
	//- 자료구조의 동작 방법을 표현하는 데이터 형식
	//- 조회, 추가, 삭제, 수정 하는 등의 일련의 기능들
	//- C 언어로 표현하면 함수가 된다.

	//링크드 리스트에는 두 종류의 연산이 필요하다.
	//1. 자료구조를 구축하기 위한 연산
	//2. 자료구조에 저장된 데이터를 활용하기 위한 연산

	//6가지 주요 연산
	//노드의 생성/소멸
	//노드의 추가(Append Node)
	//노드의 탐색(GetNodeAt)
	//노드의 삭제(RemoveNode)
	//노드의 삽입(InsertAfter)

	//[더블 링크드 리스트]
	//- 링크드 리스트의 탐색 기능을 개선한 자료구조이다.
	//- 링크드리스트에서 어떤 노드를 찾으려면 Head부터 Tail방향으로만 탐색이 가능했다.
	//- 더블 링크드 리스트에서는 양방향 탐색이 가능하다.
	//- 양방향 탐색이 가능해진 이유는 리스트를 구성하는 Node의 구조가 변경되었기 때문이다.

	//- 더블 링크드 리스트의 노드는 자기 자신의 앞에 있는 노드를 가리키는 포인터도 가지고 있다.

	//- 그렇기 때문에 더블 링크드 리스트의 노드는 앞뒤로 이동할 수 있다.
}