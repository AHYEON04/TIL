#include<stdio.h>
#include<windows.h>

int Search(NodePointer ptr, int value);
void Insert(NodePointer pre, int value);
int Delete(NodePointer del, NodePointer tra);

typedef struct NODE* NodePointer;
typedef struct NODE {
	int data;
	NodePointer link;
}NODE;
NodePointer head = NULL;

int main() {
	Insert(head, 1);
	printf("%d", head->data);
}

int Search(NodePointer ptr, int value) {
	int i;
	for (i = 1; ptr->data != value; ptr->link) i++;
	return i;
}
//노드 삽입함수
void Insert(NodePointer pre, int value) {
	NodePointer temp = (NodePointer)malloc(sizeof(NODE));
	if (!head) {		// 리스트가 공백인 상태
		temp->data = value;
		temp->link = NULL;
		head = temp;
	}
	else {			// 리스트가 공백이 아닌 상태
		temp->data = value;
		temp->link = pre->link;
		pre->link = temp;
	}
}
//노드 삭제함수
int Delete(NodePointer del, NodePointer tra) {
	if (!head) return printf("List is Empty!\n");
	else {
		NodePointer temp = del;
		if (tra) tra->link = del->link;
		else head = head->link;
		free(temp);
	}
}

