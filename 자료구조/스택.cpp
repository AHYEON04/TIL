#include<stdio.h>
int push(int *stack, int value);
int pop(int *stack);
int isEmpty();
int top = -1; 


int isFull(){
	if(top>=9) return 1;
	else return 0;
}

int push(int *stack, int value){
    if(isFull()) return printf("Stack is Full\n");
    else stack[++top] = value;
	}
	
int isEmpty(){
	if(top<0) return 1;
	else return 0;
}
	
	
int pop(int *stack){
	if(isEmpty()) return printf("Stack is Empty!\n");
	  else return stack[top--];
}

int main(){
	int stack[10]={0};
	int i;
    pop(stack);
	for(i=0;i<10;i++) push(stack,i);
    for(i=0;i<10;i++) printf("%d\n", stack[i]);
    push(stack,11);
    for(i=0;i<10;i++) printf("%d\n", stack[i]);
    printf("%d\n", top);
    
	printf("top:%d\n", top);
};


	

