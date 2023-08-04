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

//-----------------------------------------------------------------------------
//내가 만든 문자열 

//#include<string.h>
//#include <iostream>
//
//class MyString
//{
//	char* string_content; //문자열 데이터를 가리키는 포인터
//	int string_length; //문자열 길이
//	int memory_capacity; //현재 할당된 메모리 공간의 크기를 나타내는 새로운 변수 
//
//public:
//	//문자 하나로 생성
//	MyString(char c);
//
//	//문자열로 부터 생성 
//	MyString(const char* str);
//
//	//복사 생성자
//	MyString(const MyString& str); 
//
//	int length()const;
//
//	void print();
//
//	void println()const;
//
//	int capacity()const;
//	void reserve(int size);
//
//	~MyString();
//
//	MyString& assign(const MyString& str);
//	MyString& assign(const char* str);
//
//	char at(int i)const;
//
//	MyString& insert(int loc, const MyString& str);
//	MyString& insert(int loc, const char* str);
//	MyString& insert(int loc, char c);
//	MyString& erase(int loc, int num);
//	
//	int find(int find_from, MyString& str)const;
//	int find(int find_from, const char* str)const;
//	int find(int find_from, char c)const;
//	int compare(const MyString& str)const;
//};
//
//MyString::MyString(char c)
//{
//	string_content = new char[1];
//	string_content[0] = c;
//	string_length = 1;
//	memory_capacity = 1;
//}
//
//MyString::MyString(const char* str)
//{
//	string_length = strlen(str);
//	std::cout << strlen(str) << std::endl;
//	string_content = new char[string_length];
//	memory_capacity = string_length;
//	for (int i = 0; i != string_length; i++)
//		string_content[i] = str[i];
//}
//
//MyString::MyString(const MyString& str)
//{
//	string_length = str.string_length;
//	memory_capacity = str.string_length;
//	string_content = new char[string_length];
//
//	for (int i = 0; i != string_length; i++)
//		string_content[i] = str.string_content[i];
//}
//
//MyString::~MyString() { delete[]string_content; }
//
//int MyString::length() const 
//{
//	return string_length; 
//}
//
//void MyString::print()
//{
//	for (int i = 0; i != string_length; i++)
//	{
//		std::cout << string_content[i];
//	}
//}
//
//void MyString::println()const
//{
//	for (int i = 0; i != string_length; i++)
//	{
//		std::cout << string_content[i];
//	}
//
//	std::cout << std::endl;
//}
//
//MyString& MyString::assign(const MyString& str) //새로운 문자열 값 복사 함수 
//{
//	std::cout << "& 호출 " << std::endl;
//
//	//문자열의 크기가 더 크다면 현재까지는 이전에 동적으로 할당된 메모리 바로 뒤에
//	//메모리를 추가하는 방법은 없으므로, 새로 동적할당을 해줘야한다
//	if (str.string_length > memory_capacity)
//	{
//		delete[] string_content;
//
//		string_content = new char[str.string_length];
//		memory_capacity = str.string_length;
//	}
//
//	for (int i = 0; i != str.string_length; i++)
//	{
//		string_content[i] = str.string_content[i];
//	}
//  // 그리고 굳이 str.string_length + 1 ~ string_length 부분은 초기화
//  // 시킬 필요는 없다. 왜냐하면 거기 까지는 읽어들이지 않기 때문이다.
//
//	string_length = str.string_length;
//
//	return *this;
//}
//
//MyString& MyString::assign(const char* str) 
//{
//	std::cout << "str 호출 " << std::endl;
//	int str_length = strlen(str);
//
//	//str_length > string_length 이렇게 하면
//	//원래 있던거에서 큰거에서 작은걸로 하면 if문 발동X
//	//그러면 메모리 공간이 남는데
//	// 길이가 짧은거에서 다시 긴걸로 할때 짧은거 길이로 봐서는
//	// 남는 공간을 확인 못해서 비효율적으로 저장해서
//	//memory_capacity를 새로 만들어서 메모리 길이를 저장
//	if (str_length > memory_capacity)
//	{
//		// 그러면 다시 할당을 해줘야만 한다.
//		delete[] string_content;
//
//		string_content = new char[str_length];
//		memory_capacity = str_length;
//
//	}
//	for (int i = 0; i != str_length; i++) 
//	{
//		string_content[i] = str[i];
//	}
//
//	string_length = str_length;
//
//	return *this;
//}
//
//int MyString::capacity()const //현재 문자열의 할당된 메모리 크기를 나타내는 함수
//{
//	return memory_capacity;
//}
//
//void MyString::reserve(int size) //할당할 문자열의 크기를 미리 예약
//{
//	if (size > memory_capacity)
//	{
//		char* prev_string_content = string_content;
//
//		string_content = new char[size];
//		memory_capacity = size;
//
//		for (int i = 0; i != string_length; i++)
//			string_content[i] = prev_string_content[i];
//
//		delete[] prev_string_content;
//
//	}
//	//만일 예약하려는 size가 현재 capacity 보다 작다면
//	//아무것도 안해도 된다.
//}
//
//char MyString::at(int i)const //임의의 위치의 문자를 리턴하는 함수
//{
//	if (i >= string_length || i < 0)
//		return NULL;
//	else
//		return string_content[i];
//}
//
//MyString& MyString::insert(int loc, const MyString& str)
//{
//	//이는 i의 위치 바로 앞에 문자를 삽입하게 된다. 예를 들어서
//	//abc라는 문자열에 insert(1,"d")를 하게 된다면 adbc가 된다.
//
//	//범위를 벗어나는 입력에 대해서는 삽입을 수행하지 않는다
//	if (loc< 0 || loc>string_length)
//	{
//		return*this;
//	}
//
//	if (string_length + str.string_length > memory_capacity)
//		//이제 새롭게 동적으로 할당을 해야한다. (초과되는 경우)
//	{
//		//insert 작업에서의 잦은 할당/해제를 피하기 위해 미리 메모리 할당해놓기
//		//현재 크기의 2배를 설정 
//		if (memory_capacity * 2 > string_length + str.string_length)
//			memory_capacity *= 2;
//		else
//			memory_capacity = string_length + str.string_length;
//
//		char* prev_string_content = string_content;
//		std::cout << "prev : " << strlen(string_content) << std::endl;
//
//		string_content = new char[memory_capacity];
//
//		//일단 insert 되는 부분 직전까지의 내용을 복사한다.
//		int i;
//		for (i = 0; i < loc; i++) //[0] = "a"
//		{
//			string_content[i] = prev_string_content[i];
//		}
//
//		//그리고 새롭게 insert되는 문자열을 넣는다.
//		for (int j = 0; j != str.string_length; j++) //[0] = a,[1] = d, i = 1
//		{
//			string_content[i + j] = str.string_content[j];
//		}
//
//		//이제 다시 원 문자열의 나머지 뒷부분을 복사한다. string_length = 3
//		for (; i < string_length; i++) //[원래 있는 길이 + 추가할 문자열 길이]
//		// i = 1, [1+1] = prev[1],[1+2] = prev[2]
//		{
//			string_content[str.string_length + i] = prev_string_content[i];
//		}
//
//		delete[] prev_string_content;
//
//		string_length = string_length + str.string_length;
//		return *this;
//	}
//
//	//만일 초과하지 않는 경우 굳이 동적할당을 할 필요가 없다.
//	//효율적으로 insert 하기 위해, 밀리는 부분을 먼저 뒤로 멀어버린다.
//	for (int i = string_length - 1; i >= loc; i--) //(1,d) abc, bc까지 
//	{
//		//넣을 문자열 만큼 뒤로 밀기. 이 때 원래의 문자열 데이터가 사라지지 않게 함
//		string_content[i + str.string_length] = string_content[i];
//		//[2+1] = [2], [1+1] = [1]
//	}
//	//그리고 insert 되는 문자 다시 집어넣기
//	for (int i = 0; i < str.string_length; i++)//[0+넣을 문자열 길이] 
//	{
//		string_content[i + loc] = str.string_content[i];
//	}
//		
//	string_length = string_length + str.string_length;
//	return *this;
//}
//
//MyString& MyString::insert(int loc, const char* str)
//{
//	MyString temp(str);
//	return insert(loc, temp);
//}
//
//MyString& MyString::insert(int loc, char c)
//{
//	MyString temp(c);
//	return insert(loc, temp);
//}
//
//MyString& MyString::erase(int loc, int num)//loc의 앞 부터 시작해서 num문자를 지운다
//{
//	if (num < 0 || loc <0 || loc > string_length)
//		return *this;
//	//지운다는 것은 단순히 뒤의 문자들을 앞으로 끌고 온다고 생각하면 된다.
//	else if (string_length - num < 0)
//	{
//		std::cout << "error 문자열 길이보다 더 삭제는 불가" << std::endl;
//		return *this;
//	}
//	for (int i = loc + num; i < string_length; i++)
//	{
//		string_content[i - num] = string_content[i];
//	}
//
//	string_length -= num;
//	return *this;
//}
//
//int MyString::find(int find_from, MyString& str)const//찾기시작하는 위치,찾는 문자열
//{
//	int i, j;
//	if (str.string_length == 0)
//		return -1;
//	for (i = find_from; i <= string_length - str.string_length; i++)
//		//0
//	{
//		for (j = 0; j < str.string_length; j++)
//			//0 1 2 3
//		{
//			//std::cout << j << std::endl;
//			if (string_content[i + j] != str.string_content[j]) //글자가 다르면 break
//				break;
//		}
//		if (j == str.string_length)
//			return i;
//	}
//	return -1; //찾지 못했음
//}
//
//int MyString::find(int find_from, const char* str)const
//{
//	MyString temp(str);
//	return find(find_from, temp);
//}
//
//int MyString::compare(const MyString& str)const //문자열 간의 크기를 비교하는 함수 
//{
//	//(*this) - (str)을 수행해서 그 1, 0, -1 로 그 결과를 리턴한다 
//	//1 은 (*this)가 서전식으로 더 뒤에 온다는 의미. 0은 두 문자열이
//	//같다는 의미, -1 은 (*this)가 사전식으로 더 앞에 온다는 의미이다.
//
//	for (int i = 0; i < std::min(string_length, str.string_length); i++)
//	{
//		if (string_content[i] > str.string_content[i])
//			return 1;
//		else if (string_content[i] < str.string_content[i])
//			return -1;
//	}
//
//	//여기 까지 했는데 끝나지 않았다면 앞 부분까지 모두 똑같은 것이 된다.
//	//만일 문자열 길이가 같다면 두 문자열은 아예 같은 문자열이 된다.
//
//	if (string_length == str.string_length)
//		return 0; //같다는 의미 
//
//	//참고로 abc 와 abcd의 크기 비교는 abcd가 더 뒤에 오게 된다.
//
//	else if (string_length > str.string_length)
//		return 1;
//
//	return -1;
//}
//
//int MyString::find(int find_from, char c)const
//{
//	MyString temp(c);
//	return find(find_from, temp);
//}
//int main()
//{
//	//MyString str1("hello world!");
//	//MyString str2(str1);
//
//	//str1.println();
//	//str2.println();
//-----------------------------------------------------------------------------
//
//	//MyString str1("very very very long string");
//	//MyString str2("");
//
//	//str1.assign("short string");
//
//	//str2.assign(str1);
//
//	//
//	////긴 문자열을 assign 시에 문제가 발생
//	////assign 함수는 문자열에 짧은 문자열을 위한 작은 크기에 공간만이 할당되어
//	////있다고 생각하여 메모리를 해제하고 다시 많은 양의 메모리를 할당하는 매우 비효율 적인
//	////작업을 하게됨 
//
//
//	////따라서 이러한 비효율을 막기 위해서는 얼마나 많은 공간이 할당되어 있는지
//	////알 수 있는 정보를 따로 보관하는 것이 좋다.+    memory_capacity;
//	//str1.assign("very long string");
//	//str1.println();
//
//-----------------------------------------------------------------------------
//
//	//MyString str1("this is a very very long string");
//	//MyString str2("<some string inserted between>");
//	//str1.reserve(30); // 할당할 문자열의 크기를 미리 예약
//
//	//std::cout << "Capacity: " << str1.capacity() << std::endl; //현재 문자열의 할당된 메모리 크기를 나타내는 함수
//	//std::cout << "String length: " << str1.length() << std::endl;
//
//	//std::cout << "Capacity: " << str2.capacity() << std::endl; //현재 문자열의 할당된 메모리 크기를 나타내는 함수
//	//std::cout << "String length: " << str2.length() << std::endl;
//
//	//str1.println();
//
//	//std::cout << str1.at(6) << std::endl;
//	//
//	//str1.insert(5, str2);
//
//	//str1.println();
//
//	//std::cout << "Capacity: " << str1.capacity() << std::endl; //현재 문자열의 할당된 메모리 크기를 나타내는 함수
//	//std::cout << "String length: " << str1.length() << std::endl;
//
//	//str1.erase(5, 30);
//	//str1.println();
//
//	//std::cout << "Location of first <very> in the string: " << str1.find(0, "very")
//	//	<< std::endl;
//
//	//		//		//		//		//		//		//
//	MyString str1("abcdeh");
//	MyString str2("abcdef");
//
//	std::cout << "str1 and str2 compare: " << str1.compare(str2) << std::endl;
//
//	str2.erase(0, 7);
//	str2.println();
//}
//-----------------------------------------------------------------------------
//explicit 이해
//원하지 않는 암시적 변환을 막음
// 
//#include <iostream>
//
//class MyString 
//{
//	char* string_content;  // 문자열 데이터를 가리키는 포인터
//	int string_length;     // 문자열 길이
//
//	int memory_capacity;
//
//public:
//	// capacity 만큼 미리 할당함.
//	explicit MyString(int capacity);
//
//	// 문자열로 부터 생성
//	MyString(const char* str);
//
//	// 복사 생성자
//	MyString(const MyString& str);
//
//	~MyString();
//
//	int length() const;
//};
//
//MyString::MyString(int capacity)
//{
//	string_content = new char[capacity];
//	string_length = 0;
//	memory_capacity = capacity;
//	std::cout << "Capacity: " << capacity << std::endl;
//}
//
//MyString::MyString(const char* str)
//{
//	string_length = 0;
//	while (str[string_length++])
//	{
//
//	}
//
//	string_content = new char[string_length];
//	memory_capacity = string_length;
//
//	for (int i = 0; i != string_length; i++)
//		string_content[i] = str[i];
//}
//
//MyString::MyString(const MyString& str)
//{
//	string_length = str.string_length;
//	string_content = new char[string_length];
//
//	for (int i = 0; i != string_length; i++)
//		string_content[i] = str.string_content[i];
//}
//
//MyString::~MyString() { delete[] string_content; }
//
//int MyString::length() const { return string_length; }
//
//void DoSomethingWithstring(MyString s)
//{
//
//}
//
//
//int main()
//{
//	MyString s(3);
//	DoSomethingWithstring(4); //오류
//}

//		//		//		//		//		//
//mutable을 쓰면 함수 뒤 const가 있어도 사용가능 

//#include <iostream>
//
//class A {
//    mutable int data_;
//
//public:
//    A(int data) : data_(data) {}
//     void DoSomething( int x)const
//    {
//        data_ = x;  // 불가능! -> mutuble 쓰면 가능해짐
//    }
//
//    void PrintData() const { std::cout << "data: " << data_ << std::endl; }
//};
//
//int main() 
//{
//    A a(10);
//    a.DoSomething(3);
//    a.PrintData();
//}

//-----------------------------------------------------------------------------
//operator 

//#include <string.h>
//#include <iostream>
//
//class MyString 
//{
//    char* string_content;  // 문자열 데이터를 가리키는 포인터
//    int string_length;     // 문자열 길이
//
//    int memory_capacity;  // 현재 할당된 용량
//    
//public:
//    // 문자 하나로 생성
//    MyString(char c);
//
//    // 문자열로 부터 생성
//    MyString(const char* str);
//
//    // 복사 생성자
//    MyString(const MyString& str);
//
//    ~MyString();
//
//    int length() const;
//    int capacity() const;
//    void reserve(int size);
//
//    void print() const;
//    void println() const;
//
//    char at(int i) const;
//
//    int compare(MyString& str);
//    bool operator==(MyString& str);
//};
//
//MyString::MyString(char c) 
//{
//    string_content = new char[1];
//    string_content[0] = c;
//    memory_capacity = 1;
//    string_length = 1;
//}
//MyString::MyString(const char* str) 
//{
//    string_length = strlen(str);
//    memory_capacity = string_length;
//    string_content = new char[string_length];
//
//    for (int i = 0; i != string_length; i++) string_content[i] = str[i];
//}
//MyString::MyString(const MyString& str) 
//{
//    string_length = str.string_length;
//    string_content = new char[string_length];
//
//    for (int i = 0; i != string_length; i++)
//        string_content[i] = str.string_content[i];
//}
//MyString::~MyString() { delete[] string_content; }
//int MyString::length() const { return string_length; }
//void MyString::print() const 
//{
//    for (int i = 0; i != string_length; i++) std::cout << string_content[i];
//}
//void MyString::println() const {
//    for (int i = 0; i != string_length; i++) std::cout << string_content[i];
//
//    std::cout << std::endl;
//}
//int MyString::capacity() const { return memory_capacity; }
//void MyString::reserve(int size)
//{
//    if (size > memory_capacity)
//    {
//        char* prev_string_content = string_content;
//
//        string_content = new char[size];
//        memory_capacity = size;
//
//        for (int i = 0; i != string_length; i++)
//            string_content[i] = prev_string_content[i];
//
//        delete[] prev_string_content;
//    }
//
//    // 만일 예약하려는 size 가 현재 capacity 보다 작다면
//    // 아무것도 안해도 된다.
//}
//char MyString::at(int i) const
//{
//    if (i >= string_length || i < 0)
//        return 0;
//    else
//        return string_content[i];
//}
//int MyString::compare(MyString& str) 
//{
//    // (*this) - (str) 을 수행해서 그 1, 0, -1 로 그 결과를 리턴한다
//    // 1 은 (*this) 가 사전식으로 더 뒤에 온다는 의미. 0 은 두 문자열
//    // 이 같다는 의미, -1 은 (*this) 사 사전식으러 더 앞에 온다는 의미이다.
//
//    for (int i = 0; i < std::min(string_length, str.string_length); i++)
//    {
//        if (string_content[i] > str.string_content[i])
//            return 1;
//
//        else if (string_content[i] < str.string_content[i])
//            return -1;
//    }
//
//    // 여기 까지 했는데 끝나지 않았다면 앞 부분 까지 모두 똑같은 것이 된다.
//    // 만일 문자열 길이가 같다면 두 문자열은 아예 같은 문자열이 된다.
//
//    if (string_length == str.string_length) return 0;
//
//    // 참고로 abc 와 abcd 의 크기 비교는 abcd 가 더 뒤에 오게 된다.
//    else if (string_length > str.string_length)
//        return 1;
//
//    return -1;
//}
//bool MyString::operator==(MyString& str) 
//{
//    return !compare(str);  // str 과 같으면 compare 에서 0 을 리턴한다.
//    //! = NOT 연산자 리턴, 참은 = true*compare
//}
//int main() {
//    MyString str1("a word");
//    MyString str2("sentence");
//    MyString str3("sentence");
//
//    if (str1 == str2)
//        std::cout << "str1 와 str2 같다." << std::endl;
//    else
//        std::cout << "st1 와 str2 는 다르다." << std::endl;
//
//    if (str2 == str3)
//        std::cout << "str2 와 str3 는 같다." << std::endl;
//    else
//        std::cout << "st2 와 str3 는 다르다" << std::endl;
//}
// -----------------------------------------------------------------
#include<iostream>

#include <iostream>

class Complex {
private:
    double real, img;

public:
    Complex(double real, double img) : real(real), img(img) {}
    Complex(const Complex& c) { real = c.real, img = c.img; } //복사 생성자

    Complex operator+(const Complex& c) const;
    Complex operator-(const Complex& c) const;
    Complex operator*(const Complex& c) const;
    Complex operator/(const Complex& c) const;
   // Complex& operator+(const Complex& c);
    Complex& operator=(const Complex& c);

    Complex& operator+=(const Complex& c);
    Complex& operator-=(const Complex& c);
    Complex& operator*=(const Complex& c);
    Complex& operator/=(const Complex& c);
    Complex operator+(const char* str);

    double get_number(const char* str, int from, int to)const;

    void println() { std::cout << "( " << real << " , " << img << " ) " << std::endl; }
};

// a = b + c + b ->  (b.plus(c)).plus(b) b+c -> c가 b에 먼저 들어가면 
//나중 값이 b+c + b+c 돼버림 
//Complex &Complex:: operator+(const Complex& c) {
//    real += c.real;
//    img += c.img;
//    return *this;
//}
//Complex를 리턴하는 연산자 함수는 값의 복사가 일어나기 때문에 속도저하가 발생하지만 
//위처럼 레퍼런스를 리턴하게 되면 값의 복사 대신 레퍼런스만 복사하는 것이므로
//큰 속도 저하는 나타나지 않습니다.

//Complex Complex::operator+(const Complex& c) const {
//    //클래스 맨 우측 const는 함수 내에 객체 수정 X 
//    //c의 값에는 어떠한 변화도 주지 않기 때문에 cosnt 붙임 
// 
//    Complex temp(real + c.real, img + c.img);
//    return temp;
//}
double Complex::get_number(const char* str, int from, int to) const {
    bool minus = false;
    if (from > to) return 0;

    if (str[from] == '-') 
        minus = true;
    if (str[from] == '-' || str[from] == '+') 
        from++;

    double num = 0.0;
    double decimal = 1.0;

    bool integer_part = true;
    for (int i = from; i <= to; i++) {
        if (isdigit(str[i]) && integer_part) {
            num *= 10.0;
            num += (str[i] - '0');
        }
        else if (str[i] == '.')
            integer_part = false;
        else if (isdigit(str[i]) && !integer_part) {
            decimal /= 10.0;
            num += ((str[i] - '0') * decimal);
        }
        else
            break;  // 그 이외의 이상한 문자들이 올 경우
    }

    if (minus) num *= -1.0;

    return num;
}

Complex Complex::operator+(const char* str) {
    // 입력 받은 문자열을 분석하여 real 부분과 img 부분을 찾아야 한다.
    // 문자열의 꼴은 다음과 같습니다 "[부호](실수부)(부호)i(허수부)"
    // 이 때 맨 앞의 부호는 생략 가능합니다. (생략시 + 라 가정)

    int begin = 0, end = strlen(str);
    double str_img = 0.0, str_real = 0.0;

    // 먼저 가장 기준이 되는 'i' 의 위치를 찾는다.
    int pos_i = -1;
    for (int i = 0; i != end; i++) {
        if (str[i] == 'i') {
            pos_i = i;
            break;
        }
    }

    // 만일 'i' 가 없다면 이 수는 실수 뿐이다.
    if (pos_i == -1) {
        str_real = get_number(str, begin, end - 1);

        Complex temp(str_real, str_img);
        return (*this) + temp;
    }

    // 만일 'i' 가 있다면,  실수부와 허수부를 나누어서 처리하면 된다.
    str_real = get_number(str, begin, pos_i - 1);
    str_img = get_number(str, pos_i + 1, end - 1);

    if (pos_i >= 1 && str[pos_i - 1] == '-') 
        str_img *= -1.0;

    Complex temp(str_real, str_img);
    return (*this) + temp;
}



Complex Complex::operator-(const Complex& c) const {
    Complex temp(real - c.real, img - c.img);
    return temp;
}
Complex Complex::operator*(const Complex& c) const {
    Complex temp(real * c.real - img * c.img, real * c.img + img * c.real);
    return temp;
}
Complex Complex::operator/(const Complex& c) const {
    Complex temp(
        (real * c.real + img * c.img) / (c.real * c.real + c.img * c.img),
        (img * c.real - real * c.img) / (c.real * c.real + c.img * c.img));
    return temp;
}

Complex& Complex::operator+=(const Complex& c) {
    (*this) = (*this) + c; //클래스 내부 operator+ 실행
    return *this;
}
Complex& Complex::operator-=(const Complex& c) {
    (*this) = (*this) - c;
    return *this;
}
Complex& Complex::operator*=(const Complex& c) {
    (*this) = (*this) * c;
    return *this;
}
Complex& Complex::operator/=(const Complex& c) {
    (*this) = (*this) / c;
    return *this;
}



Complex& Complex::operator=(const Complex& c)
//Complex 타입을 리턴하지 않고 굳이 
//Complex& 타입을 리턴하냐면, 대입 연산 이후 불필요한 복사를 방지하기 위해서

//= 를 만들지 않더라도, 위 소스를 컴파일 하면 잘 작동함.
//컴파일러 차원에서 디폴트 대입 연사자를 지원하고 있기 때문.
//디폴트 복사 생성자와 마찬가지로 디폴트 대입 연산자는 역시 얕은 복사를 수행함.
{
    real = c.real;
    img = c.img;
    return *this;
}

int main() {
    Complex a(1.0, 2.0);
    Complex b(3.0, -2.0);
    a -= b;
    a.println();
    b.println();
}

//-----------------------------------------------------------------------------////friend 다른 클래스가 private에 접근 할 수 있게 하는 함수

//#include <iostream>
//class A
//{
//private:
//
//	void private_func(){}
//	int private_num;
//
//	//B 는 A의 친구
//	friend class B;
//	//func은 A의 친구
//	//friend void func();
//};
//// A 만 friend 설정을 했기 때문에 B에서 A는 접근이 가능하지만
//// A에서 B는 접근이 불가능 하다 
//class B
//{
//public:
//	void b()
//	{
//		A a;
//
//		//비록 private 함수의 필드들이지만 친구이기 때문에 접근 가능 
//		a.private_func();
//		a.private_num = 2;
//	}
//
//	void func()
//	{
//		A a;
//
//		//비록 private 함수의 필드들이지만 위와 마찬가지로 친구이기 때문에 접근
//		//가능
//		a.private_func();
//		a.private_num = 2;
//	}
//};

//      //      //      //      //      //      //      //

//a = a + a -->밑에 두개 함수가 있으면 오류 발생
//operator+(a,a)
//a.operator+a 

//a.real 과 b.real은 private이기 때문에 friend를 설정했음
//통상적으로 자기 자신을 리턴하지 않는 이항 연산자들 + - * / 모두 외부함수로
//선언하는 것이 원칙

//반대로 자기 자신을 리턴하는 이항 연산자 += -= 같은 애들은
//(클래스)멤버 함수로 선언하는 것이 원칙


//#include <cstring>
//#include <iostream>
//#include "mystd.h"
//class Complex
//{
//private:
//	double real, img;
//
//	double get_number(const char* str, int from, int to) const;
//
//public:
//	Complex(double real, double img) : real(real), img(img) {}
//	Complex(const Complex& c) { real = c.real, img = c.img; }
//	Complex(const char* str);
//
//	Complex& operator=(const Complex& c);
//
//	// 나머지 연산자 함수들은 생략 :)
//
//	void println()
//	{
//		std::cout << "( " << real << " , " << img << " ) " << std::endl;
//	}
//
//	friend Complex operator+(const Complex& a, const Complex& b);
//
//	friend std::ostream& operator<<(std::ostream& os, const Complex& c);
//};
//
//Complex operator+(const Complex& a, const Complex& b)
//{
//	Complex temp(a.real + b.real, a.img + b.img);
//	return temp;
//}
//
//
//Complex::Complex(const char* str)
//{
//	// 입력 받은 문자열을 분석하여 real 부분과 img 부분을 찾아야 한다.
//	// 문자열의 꼴은 다음과 같습니다 "[부호](실수부)(부호)i(허수부)"
//	// 이 때 맨 앞의 부호는 생략 가능합니다. (생략시 + 라 가정)
//
//	int begin = 0, end = strlen(str);
//	img = 0.0;
//	real = 0.0;
//
//	// 먼저 가장 기준이 되는 'i' 의 위치를 찾는다.
//	int pos_i = -1;
//	for (int i = 0; i != end; i++)
//	{
//		if (str[i] == 'i')
//		{
//			pos_i = i;
//			break;
//		}
//	}
//
//	// 만일 'i' 가 없다면 이 수는 실수 뿐이다.
//	if (pos_i == -1)
//	{
//		real = get_number(str, begin, end - 1);
//		return;
//	}
//
//	// 만일 'i' 가 있다면,  실수부와 허수부를 나누어서 처리하면 된다.
//	real = get_number(str, begin, pos_i - 1);
//	img = get_number(str, pos_i + 1, end - 1);
//
//	if (pos_i >= 1 && str[pos_i - 1] == '-') img *= -1.0;
//}
//double Complex::get_number(const char* str, int from, int to) const
//{
//	bool minus = false;
//	if (from > to) return 0;
//
//	if (str[from] == '-') minus = true;
//	if (str[from] == '-' || str[from] == '+') from++;
//
//	double num = 0.0;
//	double decimal = 1.0;
//
//	bool integer_part = true;
//	for (int i = from; i <= to; i++)
//
//		if (isdigit(str[i]) && integer_part)
//		{
//			num *= 10.0;
//			num += (str[i] - '0');
//		}
//		else if (str[i] == '.')
//			integer_part = false;
//		else if (isdigit(str[i]) && !integer_part)
//		{
//			decimal /= 10.0;
//			num += ((str[i] - '0') * decimal);
//		}
//		else
//			break;  // 그 이외의 이상한 문자들이 올 경우
//
//
//	if (minus) 
//	{
//		num *= -1.0;
//	}
//	return num;
//
//}
//
//
//Complex& Complex::operator=(const Complex& c)
//{
//	real = c.real;
//	img = c.img;
//	return *this;
//}
//
////std::cout << a; = ostream&operator<<(cout , a )
//std::ostream& operator<<(std::ostream& os, const Complex& c)
//{
//	os << "(" << c.real << " , " << c.img << " ) ";
//	return os;
//}
//
//int main()
//{
//	Complex a(0, 0);
//	a = "-1.1 + i3.923" + a;
//	a = a + a;
//
//	Complex b(1, 2);
//	b = a + b;
//
//	Complex c(0, 0);
//	c = a + b + b;
//
//	a.println();
//	b.println();
//	c.println();
//
//	std::cout << "a의 값은 : " << a << "이다 " << std::endl;
//
//	mystd::cout << "dwqdqw";
//}
//      //      //      //      //      //      //
//operator[]
//#include <iostream>
//#include <cstring>
//
//
//class MyString {
//    char* string_content;  // 문자열 데이터를 가리키는 포인터
//    int string_length;     // 문자열 길이
//
//    int memory_capacity;  // 현재 할당된 용량
//
//public:
//    // 문자 하나로 생성
//    MyString(char c);
//
//    // 문자열로 부터 생성
//    MyString(const char* str);
//
//    // 복사 생성자
//    MyString(const MyString& str);
//
//    ~MyString();
//
//    int length();
//
//    void print() const;
//    void println() const;
//
//    char& operator[](const int index);
//};
//
//MyString::MyString(char c) {
//    string_content = new char[1];
//    string_content[0] = c;
//    memory_capacity = 1;
//    string_length = 1;
//}
//MyString::MyString(const char* str) {
//    string_length = strlen(str);
//    memory_capacity = string_length;
//    string_content = new char[string_length];
//
//    for (int i = 0; i != string_length; i++) string_content[i] = str[i];
//}
//MyString::MyString(const MyString& str) {
//    string_length = str.string_length;
//    string_content = new char[string_length];
//
//    for (int i = 0; i != string_length; i++)
//        string_content[i] = str.string_content[i];
//}
//MyString::~MyString() { delete[] string_content; }
//int MyString::length() { return string_length; }
//void MyString::print() const {
//    for (int i = 0; i != string_length; i++) {
//        std::cout << string_content[i];
//    }
//}
//void MyString::println() const {
//    for (int i = 0; i != string_length; i++) {
//        std::cout << string_content[i];
//    }
//    std::cout << std::endl;
//}
//
//char& MyString::operator[](const int index) { return string_content[index]; }
//
//int main() 
//{
//    MyString str("abcdef");
//    str[3] = 'c';
//
//    str.println();
//}
//		//		//		//		//		//		//
// operator ++ 전위,후위 증감 연산자  
//#include <iostream>
//
//class Test
//{
//	int m_data;
//public:
//	Test(int data) : m_data(data){}
//	Test(const Test&i) : m_data(i.m_data){}
//
//	operator int() { return m_data; }
//
//	Test& operator++() //n.operator()++
//	{
//		m_data++;
//		std::cout << "전위 증감 연산자" << std::endl;
//		return *this;
//	}
//
//	//전위 증감과 후위 증감에 차이를 두기 위해 후임 증가의 경우
//	//int를 받지만 실제로 아무것도 전달되지 않는다.
//	Test operator++(int) //++operator(n)
//	{
//		Test temp(*this);
//		m_data++;
//		std::cout << "후위 증감 연산자" << std::endl;
//		return temp;
//	}
//
//	int get_m_data()const
//	{
//		return m_data;
//	}
//
//};
//
//void func(const Test& t)
//{
//	std::cout << "x : " << t.get_m_data() << std::endl;
//}
//
//int main()
//{
//	Test x = 3;
//	int a = x + 4;
//
//	x = a * 2 + x + 4;
//	std::cout << x << std::endl;
//
//	Test t(3);
//	func(++t);
//	func(t++);
//	std::cout << "x: " << t.get_m_data() << std::endl;
//
//}
//-------------------------------------------------------------------

//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//
//struct test
//{
//    int m_test;
//    double m_double;
//    struct test* next;
//};
//struct test* test1 = NULL;
//struct test* test2 = NULL;
//
//
//void test(struct test* node)
//{
//    test2 = test1 = node;
//    test1->next = node;
//}
//
//struct test* new_test(int a, double b)
//{
//    struct test* test = (struct test*)malloc(sizeof(struct test));
//    test->m_test = a;
//    test->m_double = b;
//    test->next = NULL;
//    return test;
//}
//
//
////포인터를 사용해서 자기 자신과 같은 타입의 다른 객체를 가리키는 방식을 "재귀적 자료"
//struct node
//{
//    int m_data;
//    //    1 (root )
//    //    ^
//    //   2 3 (root->left root->right)
//    struct node* left;
//    struct node* right;
//};
//
//struct queue
//{
//    struct node* q_data; //이진 트리의 노드에 대한 포인터
//    struct queue* next; //큐의 다음 노드에 대한 포인터, 이 포인터를 통해 큐의 여러 노드들을 연결하여 구현
//    //FIFO First-In, First-Out
//};
//
//
////각각 큐의 앞과 뒤를 가리키는 포인터
//
//struct queue* front = NULL;//큐에서 노드를 꺼낼 위치
//struct queue* rear = NULL;//새로운 노드가 추가될 위치
//
//
//
////BFS는 루트 노드로 부터 시작해서 가장 가까운 레벨의 노드들을 먼저 탐색하고 그 다음 레벨의 노드들을 탐색하는 방식.
////이를 위해 먼저 탐색해야할 노드들을 큐에 저장, 큐에서 노드를 하나씩 꺼내서 노드의 자식들을 다시 큐에 넣는 과정 반복
//
//
//
//struct node* new_node(int data)
//{
//    //node* node = new mod[sizeof]
//    struct node* node = new struct node;
//    node->m_data = data;
//    node->left = NULL;
//    node->right = NULL;
//    return node;
//}
//
//void dequeue() 
//{
//    struct queue* temp = front;
//
//    if (front == NULL) return;
//    if (front == rear) 
//    { 
//        front = rear = NULL;
//    }
//    else 
//    { 
//        front = front->next;  
//    }
//    
//    free(temp); //front에 front -> next 넣고 front 동적할당 제거
//}
//
//void enqueue(struct node* node) 
//{
//    struct queue* temp = new struct queue;
//    temp->q_data = node; //q_data / 이진 트리의 노드에 대한 포인터
//
//    temp->next = NULL;
//
//    if (front == NULL && rear == NULL)
//    {
//        
//        front = rear = temp;
//       
//        return;
//    }   
//
//    if (rear->q_data->m_data != 7) //rear과 front는 무조건 관련 있음
//    {
//        rear->next = temp; 
//
//        rear = temp;
//        printf("========\n");
//    }
//   //std::cout << rear->q_data << "ssss new" << std::
//}
//
//
//void BFS(struct node* root)
//{
//    if (root == NULL) return;
//
//    enqueue(root);
//
//    while (front != NULL) //front = 큐에서 노드를 꺼낼 위치
//    {
//        struct node* node = front->q_data;
//        //printf("%d ", node->m_data);
//
//        printf("%d front\n", front->q_data->m_data);
//
//        //std::cout << rear->q_data->m_data << "rear " << std::endl;
//
//        if (node->left != NULL)
//        {
//            enqueue(node->left);
//            printf("%d \n", node->left->m_data);
//        }
//        if (node->right != NULL)
//        {
//            enqueue(node->right);
//            printf("%d \n", node->right->m_data);
//        }
//        dequeue();
//    }
//}
//
//int main()
//{
//    struct node* root;
//
//    root = new_node(1);
//
//    root->left = new_node(2); //return(node) node *left
//    root->right = new_node(3);
//    root->left->left = new_node(4);
//    root->left->right = new_node(5);
//    root->right->left = new_node(6);
//    root->right->right = new_node(7);
//    printf("Breadth-First Search: \n");
//    BFS(root);
//
//
//    //struct test* root;
//    //root = new_test(1, 5);
//    //test(root);
//    //std::cout<<test2->m_double;
//
//
//    return 0;
//}
// ---------------------------------------------------------------------------------------------------------
//#include<iostream>
//
////static_cast : 우리가 흔히 생각하는, 언어적 차원에서 지원하는 일반적인 타입 변환
////
////const_cast : 객체의 상수성(const) 를 없애는 타입 변환.쉽게 말해 const int 가 int 로 바뀐다.
////
////dynamic_cast : 파생 클래스 사이에서의 다운 캐스팅(→ 정확한 의미는 나중에 다시 배울 것입니다)
////
////reinterpret_cast : 위험을 감수하고 하는 캐스팅으로 서로 관련이 없는 포인터들 사이의 캐스팅 등
//
////원하는 캐스팅 종류<바꾸려는 타입>(무엇을 바꿀 것인가?)
//class Array
//{
//	const int m_dim; // 몇 차원 배열인지
//	//Address 배열의 레벨(m_dim-1)이면 재귀호출 종료
//
//	int* p_size; //p_size[0] * p_size[1] * ... * p_size[dim-1] 짜리 배열.
//
//	struct Address //c++ 구조체는 모든 멤버함수 ,변수 디폴트로 -> public 
//	{
//		int level;
//		//맨 마지막 레벨은 데이터 배열을 가리킴 
//		//그 위 레벨에서는 다음 address 배열을 가리킴
//		void* next;
//	};
//
//	Address* top;
//
//public:
//	Array(int dim, int* array_size) :m_dim(dim)
//	{
//		//3 {3,4,5}
//		p_size = new int[dim];
//		for (int i = 0; i < dim; i++)
//		{
//			p_size[i] = array_size[i];
//		}
//
//		top = new Address;
//		top->level = 0;
//
//		initialize_address(top);
//	}
//
//	Array(const Array& arr) :m_dim(arr.m_dim)
//	{
//		p_size = new int[m_dim];
//		for (int i = 0; i < m_dim; i++)
//			p_size[i] = arr.p_size[i];
//
//		top = new Address;
//		top->level = 0;
//
//		initialize_address(top);
//		//내용물 복사
//		copy_address(top, arr.top);
//
//	}
//	
//	void copy_address(Address* dst, Address* src)
//	{
//		if (dst->level == m_dim - 1)
//		{
//			for (int i = 0; i < p_size[dst->level]; i++)
//			{
//				static_cast<int*>(dst->next)[i] = static_cast<int*>(src->next)[i];
//				return;
//			}
//		}
//		for (int i = 0; i != p_size[dst->level]; i++)
//		{
//			Address *new_dst = static_cast<Address*>(dst->next) + i;
//			Address* new_src = static_cast<Address*>(src->next) + i;
//
//			copy_address(new_dst, new_src);
//		}
//	}
//
//	~Array()
//	{
//		std::cout << std::endl;
//
//		delete_address(top);
//		delete[] p_size;
//	}
//
//	void initialize_address(Address* current)
//	{
//		if (!current)
//			return;
//		if (current->level == m_dim - 1) //종료조건
//		{
//			current->next = new int[p_size[current->level]];
//			std::cout << current->level << std::endl;
//			return;
//		}
//		current->next = new Address[p_size[current->level]];
//		//현재 구조체 next에 Address 배열 3개 생성
//		
//		for (int i = 0; i != p_size[current->level]; i++)//다음 단계로 넘어가는 과정
//		{
//			std::cout << current->level << std::endl;
//
//			( static_cast<Address*>(current->next) + i)->level = current->level + 1;
//			//ex) (current->next)+1 ==  변수이름X(current->next)[1]
//			
//			initialize_address( static_cast<Address*>(current->next) + i);
//		}
//	}
//
//	void delete_address(Address* current) //소멸자는 아래서 위로 
//	{
//
//		if (!current)
//			return;
//		for (int i = 0; current->level < m_dim - 1 && i < p_size[current->level]; i++)
//		{//2 2 
//			//std::cout << i<< std::endl;
//
//			delete_address(static_cast<Address*>(current->next) + i);
//		}
//		std::cout << current->level << std::endl;
//
//		if (current->level == m_dim - 1)
//		{
//			std::cout << "delete" << std::endl;
//			delete[] static_cast<int*>(current->next); //제거한 다음에 어떻게 해
//			//delete[] static_cast<Address*>(current);
//		}
//		//delete[] static_cast<Address*>(current->next);
//	}
//};
//
//int main()
//{
//	//(차원 수, 
//	int array[3] = { 2,2,1 }; //[3][4][5]
//
//	Array a(3, array);
//	//Array b(a);
//}