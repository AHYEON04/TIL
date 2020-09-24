#include <stdio.h>
#include <stdlib.h>

typedef struct Node* NodePointer;
typedef struct Node{
	int data;
	NodePointer link;
}Node;

NodePointer top = NULL;

void Push(int value);
int Pop();
int isEmpty;
void print();
int main(){
	pop();
	push(1);
	push(2);
	push(3);
	print();
	printf("삭제된 값은 : %d\n", pop());
	print();
	printf("삭제된 값은 : %d\n", pop());
	print();
	printf("삭제된 값은 : %d\n", pop());
	print();s
} 

int isEmpty(){

	if ( top == NULL ) return 1;
	else return 0;

}

void Push(int value){
	NodePointer temp = (NodePointer)malloc(sizeof(Node));

	temp->data = value;
	temp->link = top;
	top = temp;

}

int Pop(){

	NodePointer top2;
	int value;

	top2 = top;
	top = top->link;
	value = top2->data;

	free(top2);
	return value;
}

void print(){
	for(NodePointer ptr = top; ptr!= NULL; ptr=ptr->link) printf("%d ",ptr->data);
	printf("\n");
} 

