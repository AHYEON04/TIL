#include<stdio.h>
typedef struct person person;
struct person{
	char name[20];
	int age;
};

int main(){
	//struct person ps1; 만약 typedef을 하지 않았다면 이렇게 변수명을 쓴다.
	person ps1={"choi", 17};
	printf("%s %d", ps1.name, ps1.age); 
	
}
