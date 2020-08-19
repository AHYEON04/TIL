#include<stdio.h>
int atoi(char a[],  int count);

int main(){
	char a[4];
	int val;
	scanf("%s", &a);
	if(('a'<=a[0]&& a[0]<='z')||('A'<=a[0]&&a[0]<='Z')) printf("문자 %s의 코드 값은 %d입니다", a[0], a[0]);
		else if(a[0]>=48&&a[0]<=57) {
		val = atoi(a, 4); printf("숫자 %d의 문자 값은 %c입니다",val, val);}
        else  printf("기호 %s의 코드 값은 %d입니다", a[0], a[0]);
}
int atoi(char a[], int count){
	int number, val=0;
	for(int i=0;i<count;i++){
		if(48<=a[i]&&a[i]<=57){
		switch(a[i]){
			case 48:
			    number = 0;
			    break;
			case 49:
				number = 1;
				break;
			case 50:
				number = 2;
				break;
			case 51:
				number = 3;
				break;
			case 52:
				number = 4;
				break;
			case 53:
				number = 5;
				break;
			case 54:
				number = 6;
				break;
			case 55:
				number = 7;
				break;
			case 56:
				number = 8;
			    break;
			case 57:
				number = 9;
				break;
			}
			val= val*10+number;
		}
	}
	return val;
	
	
}
 


