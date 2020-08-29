#include<stdio.h>
struct address{
	char name[20];
	char addr[80];
};
int input(struct address *data, int n){
	int i;
	for(i=0;i<n;i++) scanf("%s %s", (data+i)->name, (data+i)->addr);
}
int output(struct address *data, int n){
	int i;
	for(i=0;i<n;i++) printf("%s %s\n", (data+i)->name, (data+i)->addr);
}
int main(){
	struct address data[3];
	input(data, 3);
	output(data, 3);
} 
