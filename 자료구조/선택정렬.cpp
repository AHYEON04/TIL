#include<stdio.h>
int main(void){
	int data[10]={10,6,7,9,3,4,2,1,5,8};
	int temp;
	for(int i=0;i<10;i++){
		printf("%d ", data[i]);
	} printf("\n");
	for(int i=0;i<9;i++){
		for(int j=i+1;j<10;j++){
			if(data[i]>data[j]){
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("%d ", data[i]);
	}
	printf("\n");
}
