#include <stdio.h>

//노드의 구성
typedef int ElemetType;

typedef struct tagNode {
	ElemetType Data;
	struct tagNode* PrevNode;	//이전 노드를 가리키는 포인터
	struct tagNode* NextNode;	//다음 노드를 가리키는 포인터
}Node;

void main() {

}