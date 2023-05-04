#include <iostream>
#include <array>
#include <algorithm>
#include <sstream>

////std::array는 자동으로 메모리를 할당하고 해제한다.
//using namespace std;
//
//template<size_t N> //N에 변수 대입 array 의 인덱스가 맞지 않아도 실행 가능
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
//	//1번
//	
//	//std::array<int, 10>arr1; //크기 10 배열
//	//arr1 = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr1[0] = 1;
//
//	//std::cout << "arr1 배열의 첫 번째 원소: " << arr1[0] << std::endl;
//
//	//std::array<int, 4>arr2 = { 1,2,3,4 };
//	//std::cout << "arr2의 모든 원소";
//
//	//for (int i = 0; i < arr2.size(); i++)
//	//	std::cout << arr2[i] << " ";
//
//	//std::cout << std::endl;
//
//
//	//2번
//	
//	//array<int, 4>arr3 = { 1,2,3,4 };
//
//
//
//	//try
//	//{
//	//	cout << arr3.at(3) << endl; //에러 아님
//	//	cout << arr3.at(4) << endl; //std::out_of_range 예외 발생
//	//}
//
//	//catch (const std::out_of_range& ex)
//	//{
//	//	cout << "에러" << ex.what() << endl;
//
//	//}
//
//
//	//3번
//
//	//array<int, 5>arr = { 1,2,3,4,5 };
//	//print(arr);
//
//	////print(arr1);
//
//	// //범위 기반 반복문 begin()함수는 첫 번째 원소를 가르키는 반복자 반환, end()함수는 마지막 원소 다음을 가르키는 반복자 반환
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


//연습 문제1
template <typename T>
class dynamic_array
{
	T* data;
	size_t m_n;

	//배열 크기를 인자로 받는 생성자와 복사 생성자를 추가합니다.
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

	//멤버 데이터에 직접 접근하기 위한 [] 연산자와 at() 함수를 작성합니다. [] 연산자를 제공함으로써
	//std::array와 비슷한 방식으로 배열 원소에 접근할 수 있습니다.

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

	//배열의 크기를 반환하는 size() 멤버 함수와 소멸자를 구현합니다.
	//소멸자에서는 메모리 릭을 방지하기 위해 할당된 메모리를 해체합니다
	size_t size() const
	{
		return n;
	}

	~dynamic_array()
	{
		delete[] data; //메모리 릭 방지 
	}

	//dynamic_array의 배열 원소를 순회할 때 사용할 반복자 관련 함수를 정의합니다
	T* begin() { return data; }

	const T* begin() const { return data; }

	T* end() { return data + n; }
	
	const T* end() const { return data + n; }

	//두 배열을 하나로 합치는 연산을 수행하는 + 연산자 함수를 정의합니다.
	//이 함수는 friend로 선언합니다

	friend dynamic_array<T> operator+(const dynamic_array<T>& arr, dynamic_array<T>& arr2)
	{
		dynamic_array<T> result(arr1.size() + arr2.size());
	}
};

int main()
{
	//연습 문제 1: 동적 크기 배열 구현
	//한 반의 학생수와 학생 정보는 프로그램 실행 시 입력으로 받음
	//학생 데이터를 관리하기 위해 배열과 유사한 자료 구조 사용
	//이 배열은 다양한 크기를 지원, 여라 반을 하나로 합치는 기능도 지원 
}

//		//		//


