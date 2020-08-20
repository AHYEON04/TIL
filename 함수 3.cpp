#include<stdio.h>
int Power(int x, int y){
	int sum=1;
	for(int i=0; i<y;i++){
		sum *= x;
	}
	return sum;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", Power(a, b));
}
