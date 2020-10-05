#include<iostream>
using namespace std;
int main(){
	const int num=12;
	std::cout<< num<<endl;
	const int *pNum = &num;
	std::cout<< *pNum<<endl;
	const int *&refpNum = pNum; 
	std::cout<< *refpNum;
	 
	
}
