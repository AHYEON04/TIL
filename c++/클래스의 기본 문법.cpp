#include<iostream>
using namespace std;
/* class �̸�{
     ��������������:
	     �����������;
		 ����Լ����� �� ����; 
} */
//������ �ڵ�
class USERDATA{
	public:
		//������� ����
		int nAge;
		char szName[32];
		
		//��� �Լ� ���� �� ����
		void Print(){
			//nAge�� szName�� Print()�Լ��� ���������� �ƴ�
			cout << nAge << " "<<szName<<endl; 
		} 
}; 

//������� �ڵ�
int main(){
	USERDATA user = {20, "ö��"};
	user.Print();
	return 0; 
} 


