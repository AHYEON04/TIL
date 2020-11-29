#include<stdio.h>
int front = 0;
int rear =0;
int Insert(int * ptr, int value);
int Delete(int *ptr);
void print(int *ptr);
int main(){
	
}

int Insert(int *ptr, int value){
	if(front==(rear+1)%10){
		return printf("Queue is Full\n");
	}else{
		rear = (rear+1)%10;
		ptr[rear]=value;
	}
}
int Delete(int * ptr){
	if(front==rear)return printf("Queue is Empty");
	else {
		front=(front+1)%10;
		int temp = ptr[front];
		ptr[front]=0;
		return temp;
	}
}
