#include<stdio.h>
#include<string.h>
struct person{
	char name[20];
	int age;
	
};
int main(){
	struct person p;
    struct person *pp;
    strcpy(p.name, "ahyeon");
    p.age = 17;
    printf("%s\n %d\n ", p.name, p.age);

}




