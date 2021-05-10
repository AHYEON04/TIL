#include<stdio.h>
int main(){
	int data[10]={10,6,7,9,3,4,2,1,5,8};
	int temp;
	for(int i=0;i<10;i++){
		for(int j=0;j<9-i;j++){
			if(data[j]>data[j+1]){
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
		    }
		}
	}
	for(int i=0;i<10;i++){
		printf("%d ", data[i]);
	}
} 
