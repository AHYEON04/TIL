#include<stdio.h>
#include<malloc.h>

void main(){
	char *p= (char *)malloc(32);
	gets(p);
	printf("User Input : %s\n", p);
	free(p);
}
