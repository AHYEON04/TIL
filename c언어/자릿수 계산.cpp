#include<stdio.h>
int main(){
	int a,b;
	int count=0;
	scanf("%d", &a);
	b = a;
	do{
		b/=10;
		count++;
	}while(b!=0);
	printf("%d ", count);
	
}
