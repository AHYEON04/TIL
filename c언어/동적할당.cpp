#include<stdio.h>
#include<stdlib.h>

char * username(){
	char *name = (char *)malloc(sizeof(char)*30);
	printf("what's your name?");
	gets(name);
	return name;
}

int main(){
	char *name1;
	char *name2;
	name1=username();
	printf("%s", name1);
	name2=username();
	printf("%s", name2);
	return 0;
	
}
