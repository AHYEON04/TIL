#include<stdio.h>
typedef struct person person;
struct person{
	char name[20];
	int age;
};

int main(){
	//struct person ps1; ���� typedef�� ���� �ʾҴٸ� �̷��� �������� ����.
	person ps1={"choi", 17};
	printf("%s %d", ps1.name, ps1.age); 
	
}
