#include<stdio.h>
int main(){
	int fibo[100]; 
	int i, a;
	scanf("%d", &a);
    fibo[0]=fibo[1]= 1;
	for(int i=2;i<a;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	for(i=0;i<a;i++){
		printf("%d ", fibo[i]);
	}
} 
