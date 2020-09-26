#include<stdio.h>
#include <stdlib.h>
typedef struct Node * NodePointer;
typedef struct Node{
	int data;
	NodePointer link;
}Node;
void push(int value);
NodePointer top = NULL;
int main(){
	push(1);
	printf("%d", top->data);
	
} 

void push(int value){ 
	NodePointer temp = (NodePointer)malloc(sizeof(Node));
    temp->data = value;
    temp->link=top;
    top=temp;
}  

