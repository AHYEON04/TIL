#include<stdio.h>
typedef struct Node*NodePointer;
typedef struct Node{
	int data;
	NodePointer link;
}Node;
int Search(NodePointer ptr, int value);

int main(){
	Node node1, node2, node3, node4, node5;
	node1={1, &node2};
	node2={2, &node3};
	node3={3, &node4};
	node4={4, &node5};
	node5={5, NULL};
	printf("%d\n",Search(&node1,1));
	printf("%d\n",Search(&node1,2));
	printf("%d\n",Search(&node1,3));
	printf("%d\n",Search(&node1,4));
	printf("%d\n",Search(&node1,5));
}

int Search(NodePointer ptr, int value){
	int i;
	for(i=1;ptr->data!=value;ptr = ptr->link)i++;
	return i;
}
