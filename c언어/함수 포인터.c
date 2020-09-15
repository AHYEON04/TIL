#include<stdio.h>
int main(){
	int(*fp)();
	fp = main;
	printf("%x\n", fp);
	
}
