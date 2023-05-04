//// 자기 자신을 가리키는 포인터 this
//#include <iostream>
//
//class Marine {
//    static int total_marine_num;
//    const static int i = 0;
//
//    int hp;                // 마린 체력
//    int coord_x, coord_y;  // 마린 위치
//    bool is_dead;
//
//    const int default_damage;  // 기본 공격력
//
//public:
//    Marine();              // 기본 생성자
//    Marine(int x, int y);  // x, y 좌표에 마린 생성
//    Marine(int x, int y, int default_damage);
//
//    int attack();                          // 데미지를 리턴한다.
//    Marine& be_attacked(int damage_earn);  // 입는 데미지
//    Marine be_attacked2(int damage_earn);
//    void move(int x, int y);               // 새로운 위치
//
//    void show_status();  // 상태를 보여준다.
//    static void show_total_marine();
//    ~Marine() { total_marine_num--; std::cout << this << "소멸자 호출" << std::endl; }
//};
//int Marine::total_marine_num = 0;
//void Marine::show_total_marine() {
//    std::cout << "전체 마린 수 : " << total_marine_num << std::endl;
//}
//Marine::Marine()
//    : hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false) {
//    total_marine_num++;
//}
//
//Marine::Marine(int x, int y)
//    : coord_x(x),
//    coord_y(y),
//    hp(50),
//
//    default_damage(5),
//    is_dead(false) {
//    total_marine_num++;
//}
//
//Marine::Marine(int x, int y, int default_damage)
//    : coord_x(x),
//    coord_y(y),
//    hp(50),
//    default_damage(default_damage),
//    is_dead(false)
//{
//    total_marine_num++;
//}
//
//void Marine::move(int x, int y) {
//    coord_x = x;
//    coord_y = y;
//}
//int Marine::attack() { return default_damage; }
//
//Marine& Marine::be_attacked(int damage_earn) {
//    hp -= damage_earn;
//    if (hp <= 0) is_dead = true;
//    std::cout << this << std::endl;
//    return *this;
//}
//
//Marine Marine::be_attacked2(int damage_earn) { //리턴 타입이 Marine 임시객체 Marine 생성해서 리턴 값을 반환하는 것 
//    hp -= damage_earn;
//    if (hp <= 0) is_dead = true;
//    std:: cout << this << std::endl; 
//    return *this;
//}
//void Marine::show_status() {
//    std::cout << " *** Marine *** " << std::endl;
//    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
//        << std::endl;
//    std::cout << " HP : " << hp << std::endl;
//    std::cout << " 현재 총 마린 수 : " << total_marine_num << std::endl;
//}
//
//void abc()
//{
//    std::cout << "출력" << std::endl;
//}
//
//int main() {
//    Marine marine1(2, 3, 5);
//    marine1.show_status();
//
//    Marine marine2(3, 5, 10);
//    marine2.show_status();
//
//    std::cout << std::endl << "마린 1 이 마린 2 를 두 번 공격! " << std::endl;
//
//    //marine2.be_attacked(marine1.attack()).be_attacked(marine1.attack());
//
//    marine2.be_attacked2(marine1.attack()).be_attacked2(marine1.attack());
//    marine2.show_status();
//    //marine1.attack() = 5
//    // 1) 처음 marine2.be_attacked2는 marine2 객체지만 
//    //다음 marine은 임시객체임(레퍼런스가 없기 때문)
//    //(임시객체).be_attacked2(marine1.attack());
//
//    marine2.be_attacked2(marine1.attack());
//    //int Marine::attack() { return default_damage; }
//    abc();
//    //marine1.show_status();
//    marine2.show_status();
//
//    //클래스 안에 있는 함수 레퍼런스는 ex) int & access_x(){return x;}
//    //객체의 주소값을 복사한다 
//}

//		//		//		//		//

#include<string.h>
#include <iostream>

class MyString
{
	char* string_content; //문자열 데이터를 가리키는 포인터
	int string_length; //문자열 길이
	int memory_capacity; //현재 할당된 메모리 공간의 크기를 나타내는 새로운 변수 

public:
	//문자 하나로 생성
	MyString(char c);

	//문자열로 부터 생성 
	MyString(const char* str);

	//복사 생성자
	MyString(const MyString& str); 

	int length()const;

	void print();

	void println()const;

	int capacity()const;
	void reserve(int size);

	~MyString();

	MyString& assign(const MyString& str);
	MyString& assign(const char* str);
};

MyString::MyString(char c)
{
	string_content = new char[1];
	string_content[0] = c;
	string_length = 1;
	memory_capacity = 1;
}

MyString::MyString(const char* str)
{
	string_length = strlen(str);
	string_content = new char[string_length];
	memory_capacity = string_length;
	for (int i = 0; i != string_length; i++)
		string_content[i] = str[i];
}

MyString::MyString(const MyString& str)
{
	string_length = str.string_length;
	memory_capacity = str.string_length;
	string_content = new char[string_length];

	for (int i = 0; i != string_length; i++)
		string_content[i] = str.string_content[i];
}

MyString::~MyString() { delete[]string_content; }

int MyString::length() const { return string_length; }

void MyString::print()
{
	for (int i = 0; i != string_length; i++)
	{
		std::cout << string_content[i];
	}
}

void MyString::println()const
{
	for (int i = 0; i != string_length; i++)
	{
		std::cout << string_content[i];
	}

	std::cout << std::endl;
}

MyString& MyString::assign(const MyString& str) //새로운 문자열 값 복사 함수 
{
	std::cout << "& 호출 " << std::endl;

	//문자열의 크기가 더 크다면 현재까지는 이전에 동적으로 할당된 메모리 바로 뒤에
	//메모리를 추가하는 방법은 없으므로, 새로 동적할당을 해줘야한다
	if (str.string_length > memory_capacity)
	{
		delete[] string_content;

		string_content = new char[str.string_length];
		memory_capacity = str.string_length;
	}

	for (int i = 0; i != str.string_length; i++)
	{
		string_content[i] = str.string_content[i];
	}
  // 그리고 굳이 str.string_length + 1 ~ string_length 부분은 초기화
  // 시킬 필요는 없다. 왜냐하면 거기 까지는 읽어들이지 않기 때문이다.

	string_length = str.string_length;

	return *this;
}

MyString& MyString::assign(const char* str) 
{
	std::cout << "str 호출 " << std::endl;
	int str_length = strlen(str);

	//str_length > string_length 이렇게 하면
	//원래 있던거에서 큰거에서 작은걸로 하면 if문 발동X
	//그러면 메모리 공간이 남는데
	// 길이가 짧은거에서 다시 긴걸로 할때 짧은거 길이로 봐서는
	// 남는 공간을 확인 못해서 비효율적으로 저장해서
	//memory_capacity를 새로 만들어서 메모리 길이를 저장
	if (str_length > memory_capacity)
	{
		// 그러면 다시 할당을 해줘야만 한다.
		delete[] string_content;

		string_content = new char[str_length];
		memory_capacity = str_length;

	}
	for (int i = 0; i != str_length; i++) 
	{
		string_content[i] = str[i];
	}

	string_length = str_length;

	return *this;
}

int MyString::capacity()const //현재 문자열의 할당된 메모리 크기를 나타내는 함수
{
	return memory_capacity;
}

void MyString::reserve(int size) //할당할 문자열의 크기를 미리 예약
{
	if (size > memory_capacity)
	{
		char* prev_string_content = string_content;

		string_content = new char[size];
		memory_capacity = size;

		for (int i = 0; i != string_length; i++)
			string_content[i] = prev_string_content[i];

		delete[] prev_string_content;

	}
	//만일 예약하려는 size가 현재 capacity 보다 작다면
	//아무것도 안해도 된다.
}

int main()
{
	//MyString str1("hello world!");
	//MyString str2(str1);

	//str1.println();
	//str2.println();
	//		//		//		//		//		//

	//MyString str1("very very very long string");
	//MyString str2("");

	//str1.assign("short string");

	//str2.assign(str1);

	//
	////긴 문자열을 assign 시에 문제가 발생
	////assign 함수는 문자열에 짧은 문자열을 위한 작은 크기에 공간만이 할당되어
	////있다고 생각하여 메모리를 해제하고 다시 많은 양의 메모리를 할당하는 매우 비효율 적인
	////작업을 하게됨 


	////따라서 이러한 비효율을 막기 위해서는 얼마나 많은 공간이 할당되어 있는지
	////알 수 있는 정보를 따로 보관하는 것이 좋다.+    memory_capacity;
	//str1.assign("very long string");
	//str1.println();

	//		//		//		//		//		//	

	MyString str1("very very very long string");
	str1.reserve(30); // 할당할 문자열의 크기를 미리 예약

	std::cout << "Capacity: " << str1.capacity() << std::endl; //현재 문자열의 할당된 메모리 크기를 나타내는 함수
	std::cout << "String length: " << str1.length() << std::endl;
	str1.println();

}
