#include<stdio.h>
int cul(int x,char op, int y){
	switch(op){
		case '+':
			return x+y;
			break;
		case '-':
			return x-y;
			break;
		case '*':
			return x*y;
			break;
		case '/':
			return x/y;
			break;
		default: 
		    printf("연산자가 잘못됨");
		    return 0; 
	}
}
int main(){
	int a, b;
	char op;
	scanf("%d %c %d", &a, &op, &b );
	printf("%d", cul(a,op,b));
}
