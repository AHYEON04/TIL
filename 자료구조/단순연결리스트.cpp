#include<stdio.h>
#include<windows.h>
typedef struct NODE *NodePointer;
typedef struct NODE{
	int data;
	NodePointer link;
}Node;
NodePointer head = NULL;
void Insert(NodePointer pre, int value);
int Delete(NodePointer del, NodePointer tra);
int Search(NodePointer ptr, int value);

int main(){
	Delete(head, head);
	Insert(head,1); 
	Insert(head,2);
	Insert(head->link,3);
	printf("%d\n", head->data);
	printf("%d\n", head->link->data);
	printf("%d\n", head->link->link->data);
	printf()	
}
int Search(NodePointer ptr, int value) {
	int i;
	for(i=1;value != ptr -> data;i++){
		ptr= ptr->link;
	}
	return i;
}

void Insert(NodePointer pre, int value){  //pre: ������ ��ġ�� �˷��ִ� �Ű����� 
	NodePointer temp = (NodePointer)malloc(sizeof(NODE));
	if(!head){ //����Ʈ�� ������ ���� 
		temp->data=value; 
		temp->link=NULL; 
		head = temp;
	}else{  //����Ʈ�� ������ �ƴ� ����
	    temp->data = value;
		temp->link=pre->link;
		pre->link = temp; 
	}
}

int Delete(NodePointer del, NodePointer tra){
	if(!head) return printf("List is Empty!\n");
	else{
		if(tra) tra->link = del->link;
		else{
			if(tra) tra->link = del->link;
			else head = head->link;
		} 
	}
}




















