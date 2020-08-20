#include<stdio.h>
int minus(int a, int b){
	return a-b;
}
int main(){
	int n1, n2;
	int sub, sum, mul, ahr, sk;
	scanf("%d %d", &n1, &n2);
	sub =  minus(n1, n2);
	sum = n1 + n2;
	mul = n1 * n2;
	ahr = n1/n2;
	sk = n1 % n2;
	printf("두수 %d과 %d의 합은 %d, 차는 %d, 곱은 %d이며", n1, n2, sum, sub, mul);
	printf(" %d를 %d로 나눈 몫은 %d 나머지는 %d이다.", n1, n2, ahr, sk);
}
