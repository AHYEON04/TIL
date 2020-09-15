#include<stdio.h>
struct Node{
	char ch;
	int num;
};

int main(){
	struct Node a={'a',1};
	struct Node * ptr = &a;
	printf("%c %d", ptr->ch, ptr->num);
	
}
