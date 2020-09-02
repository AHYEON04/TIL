#include<iostream>
int main() {
	//객체를 배열 형태로 동적 생성함
	int* arr = new int[5];

	for (int i = 0;i < 5;i++)
		arr[i] = (i + i) + 10;

	for (int i = 0;i < 5;i++)
		std::cout << arr[i] << std::endl;

	//배열 형태로 생성한 대상은
	//반드시 배열 형태를 통해 삭제함
	delete[] arr;

	return 0;
}