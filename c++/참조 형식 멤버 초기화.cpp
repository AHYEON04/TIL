#include<iostream>
using namespace std;
class CRefTest{
	private:
		int&m_nData;
	public:
		CRefTest(int &rParam):m_nData(rParam){
			cout<<"CRefTest::CRefTest(int &rParam)"<<m_nData<<endl;
		}
		~CRefTest(){
			cout<<"CRefTest::~CRefTest()"<<m_nData<<endl;
		}
		int GetData(){
			return m_nData;
		}
};
int main(){
	cout<<"Begin"<<endl;
	int a(10);
	CRefTest t(a);
	cout<<"GetData():"<<t.GetData()<<endl;
	
	cout<<"End"<<endl;
	return 0;
};
