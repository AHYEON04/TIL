#include<iostream>
using namespace std;
/* class 이름{
     접근제어지시자:
	     멤버변수선언;
		 멤버함수선언 및 정의; 
} */
//제작자 코드
class USERDATA{
	public:
		//멤버변수 선언
		int nAge;
		char szName[32];
		
		//멤버 함수 선언 및 정의
		void Print(){
			//nAge와 szName은 Print()함수의 지역변수가 아님
			cout << nAge << " "<<szName<<endl; 
		} 
}; 

//사용자의 코드
int main(){
	USERDATA user = {20, "철수"};
	user.Print();
	return 0; 
} 


