#include<iostream>
int main() {
	//��ü�� �迭 ���·� ���� ������
	int* arr = new int[5];

	for (int i = 0;i < 5;i++)
		arr[i] = (i + i) + 10;

	for (int i = 0;i < 5;i++)
		std::cout << arr[i] << std::endl;

	//�迭 ���·� ������ �����
	//�ݵ�� �迭 ���¸� ���� ������
	delete[] arr;

	return 0;
}