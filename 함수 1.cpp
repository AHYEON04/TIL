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
	printf("�μ� %d�� %d�� ���� %d, ���� %d, ���� %d�̸�", n1, n2, sum, sub, mul);
	printf(" %d�� %d�� ���� ���� %d �������� %d�̴�.", n1, n2, ahr, sk);
}
