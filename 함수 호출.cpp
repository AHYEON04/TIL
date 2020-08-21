/*#include<stdio.h>
void Swap1(int n1, int n2){
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("Swap 1에서 %d %d\n", n1, n2);
}
int main(){
	int num1 = 10;
    int num2 = 20;
	printf("초기값: %d %d\n", num1, num2);
	Swap1(num1, num2);
	printf("Swap1 후 %d %d\n", num1, num2); 
}  //call-by-Value */

#include<stdio.h> 
void Swap2(int *n1, int *n2){
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
	printf("Swap2에서 %d %d\n", *n1, *n2);
}
int main(){
	int num1 = 10;
	int num2 = 20;
	printf("초기값: %d %d\n", num1, num2);
	Swap2(&num1, &num2);
	printf("Swap2 후 %d %d\n", num1, num2);
} //call-by-reference
