#include<iostream>
int main() {
	//인스턴스만 동적으로 생성하는 경우
	int* pData = new int;
	//초기값을 설정하는 경우
	int* pNewData = new int(10);

	*pData = 5;
	std::cout << *pData << std::endl;
	std::cout << *pNewData << std::endl;

	delete pData;
	delete pNewData;

	return 0;
}