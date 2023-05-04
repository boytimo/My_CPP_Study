#include <iostream>
#include <array>
#include <algorithm>
#include <sstream>

////std::array�� �ڵ����� �޸𸮸� �Ҵ��ϰ� �����Ѵ�.
//using namespace std;
//
//template<size_t N> //N�� ���� ���� array �� �ε����� ���� �ʾƵ� ���� ����
//void print(const array<int, N>& arr)
//{
//	for (auto ele : arr)
//		cout << ele << " , ";
//}
//
//void print(array<int, 5>arr)
//{
//	for (auto ele : arr)
//		cout << ele << " , ";
//}




//int main()
//{
//
//	//1��
//	
//	//std::array<int, 10>arr1; //ũ�� 10 �迭
//	//arr1 = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr1[0] = 1;
//
//	//std::cout << "arr1 �迭�� ù ��° ����: " << arr1[0] << std::endl;
//
//	//std::array<int, 4>arr2 = { 1,2,3,4 };
//	//std::cout << "arr2�� ��� ����";
//
//	//for (int i = 0; i < arr2.size(); i++)
//	//	std::cout << arr2[i] << " ";
//
//	//std::cout << std::endl;
//
//
//	//2��
//	
//	//array<int, 4>arr3 = { 1,2,3,4 };
//
//
//
//	//try
//	//{
//	//	cout << arr3.at(3) << endl; //���� �ƴ�
//	//	cout << arr3.at(4) << endl; //std::out_of_range ���� �߻�
//	//}
//
//	//catch (const std::out_of_range& ex)
//	//{
//	//	cout << "����" << ex.what() << endl;
//
//	//}
//
//
//	//3��
//
//	//array<int, 5>arr = { 1,2,3,4,5 };
//	//print(arr);
//
//	////print(arr1);
//
//	// //���� ��� �ݺ��� begin()�Լ��� ù ��° ���Ҹ� ����Ű�� �ݺ��� ��ȯ, end()�Լ��� ������ ���� ������ ����Ű�� �ݺ��� ��ȯ
//	//for (auto it = arr.begin(); it != arr.end(); it++)
//	//{
//	//	auto element = (*it);
//	//	 
//	//	cout << element << ' ';
//	//}
//
//	//std::array<int, 5> arr = { 1,2,3,4,5 };
//	//std::cout << arr.front() << std::endl; //print 1
//	//std::cout << arr.back() << std::endl; //print 5
//	//std::cout << *(arr.data() + 1) << std::endl; //print 2
//
//}


//���� ����1
template <typename T>
class dynamic_array
{
	T* data;
	size_t m_n;

	//�迭 ũ�⸦ ���ڷ� �޴� �����ڿ� ���� �����ڸ� �߰��մϴ�.
	dynamic_array(const dynamic_array<T>& other)
	{
		m_n = other.m_n;
		data = new T[m_n];
	}

	dynamic_array(const dynamic_array<T>& other)
	{
		m_n = other.m_n;
		data = m_new T[m_n];

		for (int i = 0; i < m_n; i++)
		{
			data[i] = other[i];
		}
	}

	//��� �����Ϳ� ���� �����ϱ� ���� [] �����ڿ� at() �Լ��� �ۼ��մϴ�. [] �����ڸ� ���������ν�
	//std::array�� ����� ������� �迭 ���ҿ� ������ �� �ֽ��ϴ�.

	T& operator[](int index)
	{
		return data[index];
	}

	const T& operator[](int index) const
	{
		return data[index];
	}

	T& at(int index)
	{
		if (index < n)
			return data[index];
		throw "Index out of range";
	}

	//�迭�� ũ�⸦ ��ȯ�ϴ� size() ��� �Լ��� �Ҹ��ڸ� �����մϴ�.
	//�Ҹ��ڿ����� �޸� ���� �����ϱ� ���� �Ҵ�� �޸𸮸� ��ü�մϴ�
	size_t size() const
	{
		return n;
	}

	~dynamic_array()
	{
		delete[] data; //�޸� �� ���� 
	}

	//dynamic_array�� �迭 ���Ҹ� ��ȸ�� �� ����� �ݺ��� ���� �Լ��� �����մϴ�
	T* begin() { return data; }

	const T* begin() const { return data; }

	T* end() { return data + n; }
	
	const T* end() const { return data + n; }

	//�� �迭�� �ϳ��� ��ġ�� ������ �����ϴ� + ������ �Լ��� �����մϴ�.
	//�� �Լ��� friend�� �����մϴ�

	friend dynamic_array<T> operator+(const dynamic_array<T>& arr, dynamic_array<T>& arr2)
	{
		dynamic_array<T> result(arr1.size() + arr2.size());
	}
};

int main()
{
	//���� ���� 1: ���� ũ�� �迭 ����
	//�� ���� �л����� �л� ������ ���α׷� ���� �� �Է����� ����
	//�л� �����͸� �����ϱ� ���� �迭�� ������ �ڷ� ���� ���
	//�� �迭�� �پ��� ũ�⸦ ����, ���� ���� �ϳ��� ��ġ�� ��ɵ� ���� 
}

//		//		//


