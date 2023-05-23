//// �ڱ� �ڽ��� ����Ű�� ������ this
//#include <iostream>
//
//class Marine {
//    static int total_marine_num;
//    const static int i = 0;
//
//    int hp;                // ���� ü��
//    int coord_x, coord_y;  // ���� ��ġ
//    bool is_dead;
//
//    const int default_damage;  // �⺻ ���ݷ�
//
//public:
//    Marine();              // �⺻ ������
//    Marine(int x, int y);  // x, y ��ǥ�� ���� ����
//    Marine(int x, int y, int default_damage);
//
//    int attack();                          // �������� �����Ѵ�.
//    Marine& be_attacked(int damage_earn);  // �Դ� ������
//    Marine be_attacked2(int damage_earn);
//    void move(int x, int y);               // ���ο� ��ġ
//
//    void show_status();  // ���¸� �����ش�.
//    static void show_total_marine();
//    ~Marine() { total_marine_num--; std::cout << this << "�Ҹ��� ȣ��" << std::endl; }
//};
//int Marine::total_marine_num = 0;
//void Marine::show_total_marine() {
//    std::cout << "��ü ���� �� : " << total_marine_num << std::endl;
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
//Marine Marine::be_attacked2(int damage_earn) { //���� Ÿ���� Marine �ӽð�ü Marine �����ؼ� ���� ���� ��ȯ�ϴ� �� 
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
//    std::cout << " ���� �� ���� �� : " << total_marine_num << std::endl;
//}
//
//void abc()
//{
//    std::cout << "���" << std::endl;
//}
//
//int main() {
//    Marine marine1(2, 3, 5);
//    marine1.show_status();
//
//    Marine marine2(3, 5, 10);
//    marine2.show_status();
//
//    std::cout << std::endl << "���� 1 �� ���� 2 �� �� �� ����! " << std::endl;
//
//    //marine2.be_attacked(marine1.attack()).be_attacked(marine1.attack());
//
//    marine2.be_attacked2(marine1.attack()).be_attacked2(marine1.attack());
//    marine2.show_status();
//    //marine1.attack() = 5
//    // 1) ó�� marine2.be_attacked2�� marine2 ��ü���� 
//    //���� marine�� �ӽð�ü��(���۷����� ���� ����)
//    //(�ӽð�ü).be_attacked2(marine1.attack());
//
//    marine2.be_attacked2(marine1.attack());
//    //int Marine::attack() { return default_damage; }
//    abc();
//    //marine1.show_status();
//    marine2.show_status();
//
//    //Ŭ���� �ȿ� �ִ� �Լ� ���۷����� ex) int & access_x(){return x;}
//    //��ü�� �ּҰ��� �����Ѵ� 
//}

//-----------------------------------------------------------------------------
//���� ���� ���ڿ� 

//#include<string.h>
//#include <iostream>
//
//class MyString
//{
//	char* string_content; //���ڿ� �����͸� ����Ű�� ������
//	int string_length; //���ڿ� ����
//	int memory_capacity; //���� �Ҵ�� �޸� ������ ũ�⸦ ��Ÿ���� ���ο� ���� 
//
//public:
//	//���� �ϳ��� ����
//	MyString(char c);
//
//	//���ڿ��� ���� ���� 
//	MyString(const char* str);
//
//	//���� ������
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
//MyString& MyString::assign(const MyString& str) //���ο� ���ڿ� �� ���� �Լ� 
//{
//	std::cout << "& ȣ�� " << std::endl;
//
//	//���ڿ��� ũ�Ⱑ �� ũ�ٸ� ��������� ������ �������� �Ҵ�� �޸� �ٷ� �ڿ�
//	//�޸𸮸� �߰��ϴ� ����� �����Ƿ�, ���� �����Ҵ��� ������Ѵ�
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
//  // �׸��� ���� str.string_length + 1 ~ string_length �κ��� �ʱ�ȭ
//  // ��ų �ʿ�� ����. �ֳ��ϸ� �ű� ������ �о������ �ʱ� �����̴�.
//
//	string_length = str.string_length;
//
//	return *this;
//}
//
//MyString& MyString::assign(const char* str) 
//{
//	std::cout << "str ȣ�� " << std::endl;
//	int str_length = strlen(str);
//
//	//str_length > string_length �̷��� �ϸ�
//	//���� �ִ��ſ��� ū�ſ��� �����ɷ� �ϸ� if�� �ߵ�X
//	//�׷��� �޸� ������ ���µ�
//	// ���̰� ª���ſ��� �ٽ� ��ɷ� �Ҷ� ª���� ���̷� ������
//	// ���� ������ Ȯ�� ���ؼ� ��ȿ�������� �����ؼ�
//	//memory_capacity�� ���� ���� �޸� ���̸� ����
//	if (str_length > memory_capacity)
//	{
//		// �׷��� �ٽ� �Ҵ��� ����߸� �Ѵ�.
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
//int MyString::capacity()const //���� ���ڿ��� �Ҵ�� �޸� ũ�⸦ ��Ÿ���� �Լ�
//{
//	return memory_capacity;
//}
//
//void MyString::reserve(int size) //�Ҵ��� ���ڿ��� ũ�⸦ �̸� ����
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
//	//���� �����Ϸ��� size�� ���� capacity ���� �۴ٸ�
//	//�ƹ��͵� ���ص� �ȴ�.
//}
//
//char MyString::at(int i)const //������ ��ġ�� ���ڸ� �����ϴ� �Լ�
//{
//	if (i >= string_length || i < 0)
//		return NULL;
//	else
//		return string_content[i];
//}
//
//MyString& MyString::insert(int loc, const MyString& str)
//{
//	//�̴� i�� ��ġ �ٷ� �տ� ���ڸ� �����ϰ� �ȴ�. ���� ��
//	//abc��� ���ڿ��� insert(1,"d")�� �ϰ� �ȴٸ� adbc�� �ȴ�.
//
//	//������ ����� �Է¿� ���ؼ��� ������ �������� �ʴ´�
//	if (loc< 0 || loc>string_length)
//	{
//		return*this;
//	}
//
//	if (string_length + str.string_length > memory_capacity)
//		//���� ���Ӱ� �������� �Ҵ��� �ؾ��Ѵ�. (�ʰ��Ǵ� ���)
//	{
//		//insert �۾������� ���� �Ҵ�/������ ���ϱ� ���� �̸� �޸� �Ҵ��س���
//		//���� ũ���� 2�踦 ���� 
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
//		//�ϴ� insert �Ǵ� �κ� ���������� ������ �����Ѵ�.
//		int i;
//		for (i = 0; i < loc; i++) //[0] = "a"
//		{
//			string_content[i] = prev_string_content[i];
//		}
//
//		//�׸��� ���Ӱ� insert�Ǵ� ���ڿ��� �ִ´�.
//		for (int j = 0; j != str.string_length; j++) //[0] = a,[1] = d, i = 1
//		{
//			string_content[i + j] = str.string_content[j];
//		}
//
//		//���� �ٽ� �� ���ڿ��� ������ �޺κ��� �����Ѵ�. string_length = 3
//		for (; i < string_length; i++) //[���� �ִ� ���� + �߰��� ���ڿ� ����]
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
//	//���� �ʰ����� �ʴ� ��� ���� �����Ҵ��� �� �ʿ䰡 ����.
//	//ȿ�������� insert �ϱ� ����, �и��� �κ��� ���� �ڷ� �־������.
//	for (int i = string_length - 1; i >= loc; i--) //(1,d) abc, bc���� 
//	{
//		//���� ���ڿ� ��ŭ �ڷ� �б�. �� �� ������ ���ڿ� �����Ͱ� ������� �ʰ� ��
//		string_content[i + str.string_length] = string_content[i];
//		//[2+1] = [2], [1+1] = [1]
//	}
//	//�׸��� insert �Ǵ� ���� �ٽ� ����ֱ�
//	for (int i = 0; i < str.string_length; i++)//[0+���� ���ڿ� ����] 
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
//MyString& MyString::erase(int loc, int num)//loc�� �� ���� �����ؼ� num���ڸ� �����
//{
//	if (num < 0 || loc <0 || loc > string_length)
//		return *this;
//	//����ٴ� ���� �ܼ��� ���� ���ڵ��� ������ ���� �´ٰ� �����ϸ� �ȴ�.
//	else if (string_length - num < 0)
//	{
//		std::cout << "error ���ڿ� ���̺��� �� ������ �Ұ�" << std::endl;
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
//int MyString::find(int find_from, MyString& str)const//ã������ϴ� ��ġ,ã�� ���ڿ�
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
//			if (string_content[i + j] != str.string_content[j]) //���ڰ� �ٸ��� break
//				break;
//		}
//		if (j == str.string_length)
//			return i;
//	}
//	return -1; //ã�� ������
//}
//
//int MyString::find(int find_from, const char* str)const
//{
//	MyString temp(str);
//	return find(find_from, temp);
//}
//
//int MyString::compare(const MyString& str)const //���ڿ� ���� ũ�⸦ ���ϴ� �Լ� 
//{
//	//(*this) - (str)�� �����ؼ� �� 1, 0, -1 �� �� ����� �����Ѵ� 
//	//1 �� (*this)�� ���������� �� �ڿ� �´ٴ� �ǹ�. 0�� �� ���ڿ���
//	//���ٴ� �ǹ�, -1 �� (*this)�� ���������� �� �տ� �´ٴ� �ǹ��̴�.
//
//	for (int i = 0; i < std::min(string_length, str.string_length); i++)
//	{
//		if (string_content[i] > str.string_content[i])
//			return 1;
//		else if (string_content[i] < str.string_content[i])
//			return -1;
//	}
//
//	//���� ���� �ߴµ� ������ �ʾҴٸ� �� �κб��� ��� �Ȱ��� ���� �ȴ�.
//	//���� ���ڿ� ���̰� ���ٸ� �� ���ڿ��� �ƿ� ���� ���ڿ��� �ȴ�.
//
//	if (string_length == str.string_length)
//		return 0; //���ٴ� �ǹ� 
//
//	//����� abc �� abcd�� ũ�� �񱳴� abcd�� �� �ڿ� ���� �ȴ�.
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
//	////�� ���ڿ��� assign �ÿ� ������ �߻�
//	////assign �Լ��� ���ڿ��� ª�� ���ڿ��� ���� ���� ũ�⿡ �������� �Ҵ�Ǿ�
//	////�ִٰ� �����Ͽ� �޸𸮸� �����ϰ� �ٽ� ���� ���� �޸𸮸� �Ҵ��ϴ� �ſ� ��ȿ�� ����
//	////�۾��� �ϰԵ� 
//
//
//	////���� �̷��� ��ȿ���� ���� ���ؼ��� �󸶳� ���� ������ �Ҵ�Ǿ� �ִ���
//	////�� �� �ִ� ������ ���� �����ϴ� ���� ����.+    memory_capacity;
//	//str1.assign("very long string");
//	//str1.println();
//
//-----------------------------------------------------------------------------
//
//	//MyString str1("this is a very very long string");
//	//MyString str2("<some string inserted between>");
//	//str1.reserve(30); // �Ҵ��� ���ڿ��� ũ�⸦ �̸� ����
//
//	//std::cout << "Capacity: " << str1.capacity() << std::endl; //���� ���ڿ��� �Ҵ�� �޸� ũ�⸦ ��Ÿ���� �Լ�
//	//std::cout << "String length: " << str1.length() << std::endl;
//
//	//std::cout << "Capacity: " << str2.capacity() << std::endl; //���� ���ڿ��� �Ҵ�� �޸� ũ�⸦ ��Ÿ���� �Լ�
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
//	//std::cout << "Capacity: " << str1.capacity() << std::endl; //���� ���ڿ��� �Ҵ�� �޸� ũ�⸦ ��Ÿ���� �Լ�
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
//explicit ����
//������ �ʴ� �Ͻ��� ��ȯ�� ����
// 
//#include <iostream>
//
//class MyString 
//{
//	char* string_content;  // ���ڿ� �����͸� ����Ű�� ������
//	int string_length;     // ���ڿ� ����
//
//	int memory_capacity;
//
//public:
//	// capacity ��ŭ �̸� �Ҵ���.
//	explicit MyString(int capacity);
//
//	// ���ڿ��� ���� ����
//	MyString(const char* str);
//
//	// ���� ������
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
//	DoSomethingWithstring(4); //����
//}

//		//		//		//		//		//
//mutable�� ���� �Լ� �� const�� �־ ��밡�� 

//#include <iostream>
//
//class A {
//    mutable int data_;
//
//public:
//    A(int data) : data_(data) {}
//     void DoSomething( int x)const
//    {
//        data_ = x;  // �Ұ���! -> mutuble ���� ��������
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
//    char* string_content;  // ���ڿ� �����͸� ����Ű�� ������
//    int string_length;     // ���ڿ� ����
//
//    int memory_capacity;  // ���� �Ҵ�� �뷮
//    
//public:
//    // ���� �ϳ��� ����
//    MyString(char c);
//
//    // ���ڿ��� ���� ����
//    MyString(const char* str);
//
//    // ���� ������
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
//    // ���� �����Ϸ��� size �� ���� capacity ���� �۴ٸ�
//    // �ƹ��͵� ���ص� �ȴ�.
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
//    // (*this) - (str) �� �����ؼ� �� 1, 0, -1 �� �� ����� �����Ѵ�
//    // 1 �� (*this) �� ���������� �� �ڿ� �´ٴ� �ǹ�. 0 �� �� ���ڿ�
//    // �� ���ٴ� �ǹ�, -1 �� (*this) �� ���������� �� �տ� �´ٴ� �ǹ��̴�.
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
//    // ���� ���� �ߴµ� ������ �ʾҴٸ� �� �κ� ���� ��� �Ȱ��� ���� �ȴ�.
//    // ���� ���ڿ� ���̰� ���ٸ� �� ���ڿ��� �ƿ� ���� ���ڿ��� �ȴ�.
//
//    if (string_length == str.string_length) return 0;
//
//    // ����� abc �� abcd �� ũ�� �񱳴� abcd �� �� �ڿ� ���� �ȴ�.
//    else if (string_length > str.string_length)
//        return 1;
//
//    return -1;
//}
//bool MyString::operator==(MyString& str) 
//{
//    return !compare(str);  // str �� ������ compare ���� 0 �� �����Ѵ�.
//    //! = NOT ������ ����, ���� = true*compare
//}
//int main() {
//    MyString str1("a word");
//    MyString str2("sentence");
//    MyString str3("sentence");
//
//    if (str1 == str2)
//        std::cout << "str1 �� str2 ����." << std::endl;
//    else
//        std::cout << "st1 �� str2 �� �ٸ���." << std::endl;
//
//    if (str2 == str3)
//        std::cout << "str2 �� str3 �� ����." << std::endl;
//    else
//        std::cout << "st2 �� str3 �� �ٸ���" << std::endl;
//}
// 
//#include<iostream>
//
//class Complex
//{
//private:
//	double real, img; //real �Ǽ�, img �����
//	double get_number(const char* str, int from, int to)const;
//
//public:
//	Complex(double real, double img)
//		:real(real), img(img)
//	{}
//	Complex(const Complex& c)
//	{
//		real = c.real;
//		img = c.img;
//	}
//	Complex(const char* str);
//
//	Complex operator+(const Complex& c)const;
//	Complex operator-(const Complex& c)const;
//	Complex operator*(const Complex& c)const;
//	Complex operator/(const Complex& c)const;
//
//	Complex &operator=(const Complex& c);
//
//	void println()
//	{
//		std::cout << "(" << real << " , " << img << " ) " << std::endl;
//	}
//
//	Complex& operator+=(const Complex& c);
//	Complex& operator-=(const Complex& c);
//	Complex& operator*=(const Complex& c);
//	Complex& operator/=(const Complex& c);
//
//	Complex operator+(const char*str)const;
//	Complex operator-(const char* str)const;
//	Complex operator*(const char* str)const;
//	Complex operator/(const char* str)const;
//	
//};
//
//Complex Complex::operator+(const Complex& c)const
//{
//	Complex temp(real + c.real, img + c.img);
//	return temp;
//}
//
//Complex Complex::operator-(const Complex& c)const
//{
//	Complex temp(real - c.real, img - c.img);
//	return temp;
//}
//
//Complex Complex::operator*(const Complex& c)const
//{
//	Complex temp(real * c.real - img * c.img, real * c.img + img * c.real);
//	return temp;
//}
//
//Complex Complex::operator/(const Complex& c)const
//{
//	Complex temp(
//		(real * c.real + img * c.img) / (c.real * c.real + c.img * c.img),
//		(img * c.real - real * c.img) / (c.real * c.real + c.img * c.img));
//	return temp;
//}
//
//Complex& Complex::operator=(const Complex& c)
//{
//	real = c.real;
//	img = c.img;
//	return *this;
//}
//
//Complex& Complex::operator+=(const Complex& c)
//{
//	(*this) = (*this) + c;
//	return *this;
//}
//
//Complex& Complex::operator-=(const Complex& c)
//{
//	(*this) = (*this) - c;
//	return*this;
//}
//
//Complex& Complex::operator*=(const Complex& c) 
//{
//	(*this) = (*this) * c;
//	return *this;
//}
//Complex& Complex::operator/=(const Complex& c) 
//{
//	(*this) = (*this) / c;
//	return *this;
//}
//
//double Complex::get_number(const char* str, int from, int to)const
//{
//	bool minus = false;
//
//	if (from > to)
//		return 0;
//	if (str[from] == '-')
//		minus = true;
//	if (str[from] == '-' || str[from] == '+')
//		from++;
//
//	double num = 0.0;
//	double decimal = 1.0;
//
//	bool integer_part = true;
//	
//	for (int i = from; i <= to; i++)
//	{
//		if (isdigit(str[i]) && integer_part)
//		{
//			num += 10.0;
//			num += (str[i] == '.');
//		}
//		else if (str[i] == '.')
//			integer_part = false;
//		else if (isdigit(str[i]) && !integer_part)
//		{
//			decimal /= 10.0;
//			num += ((str[i] - '0') * decimal);
//			//ASCII ���̺� �󿡼� 0 ���� 9 ���� ���ڵ��� ũ�� ������ ���������� �迭�Ǿ� �ֱ� ������ �ܼ��� '0' �� ��������
//			//�� ���ڿ� �ش��ϴ� ���� ���� ���� ���� �� �ְ� �˴ϴ�.
//		}
//		else
//			break;
//	}
//	if (minus)
//		num *= -1.0;
//
//	return num; 
//}
//
//Complex::Complex(const char* str)
////�Է� ���� ���ڿ��� �м��Ͽ� real �κа� img�κ��� ã�ƾ��Ѵ� 
////���ڿ��� ���� ������ ���� "[��ȣ](�Ǽ���)[��ȣ]i(�����)
////�� �� �� ���� ��ȣ�� ���� ����( ������ +�� ����)
//{
//
//	int begin = 0, end = strlen(str);
//	img = 0.0;
//	real = 0.0;
//
//	// ���� ���� ������ �Ǵ� 'i' �� ��ġ�� ã�´�.
//	int pos_i = -1;
//	for (int i = 0; i != end; i++) {
//		if (str[i] == 'i') {
//			pos_i = i;
//			break;
//		}
//	}
//
//	// ���� 'i' �� ���ٸ� �� ���� �Ǽ� ���̴�.
//	if (pos_i == -1) {
//		real = get_number(str, begin, end - 1);
//		return;
//	}
//
//	// ���� 'i' �� �ִٸ�,  �Ǽ��ο� ����θ� ����� ó���ϸ� �ȴ�.
//	real = get_number(str, begin, pos_i - 1);
//	img = get_number(str, pos_i + 1, end - 1);
//
//	if (pos_i >= 1 && str[pos_i - 1] == '-') img *= -1.0;
//}
//
//Complex Complex::operator+(const char* str) const 
//{
//	Complex temp(str);
//	return (*this) + temp;
//}
//Complex Complex::operator-(const char* str) const 
//{
//	Complex temp(str);
//	return (*this) - temp;
//}
//Complex Complex::operator*(const char* str) const 
//{
//	Complex temp(str);
//	return (*this) * temp;
//}
//Complex Complex::operator/(const char* str) const 
//{
//	Complex temp(str);
//	return (*this) / temp;
//}
//int main()
//{
//	Complex a(1.0, 2.0);
//	Complex b(3.0, -2.0);
//
//	Complex c = a * b;
//
//	c.println();
//
//	int d = '1';
//	std::cout << d << std::endl;
//
//	//a += b;
//	//a.println();
//	//b.println();
//
//	//Complex a = b; --> ��������� 
//	//Complex a; a=b; --> �⺻������ ȣ�� �� ���� ������ �Լ� ����
//
//	//Complex a(0, 0);
//	//a = a + "-1.1 + i3.923";
//	//a.println();
//	//a = a - "1.2 -i1.823";
//	//a.println();
//	//a = a * "2.3+i22";
//	//a.println();
//	//a = a / "-12+i55";
//	//a.println();
//}

//-----------------------------------------------------------------------------////friend �ٸ� Ŭ������ private�� ���� �� �� �ְ� �ϴ� �Լ�

//#include <iostream>
//class A
//{
//private:
//
//	void private_func(){}
//	int private_num;
//
//	//B �� A�� ģ��
//	friend class B;
//	//func�� A�� ģ��
//	//friend void func();
//};
//// A �� friend ������ �߱� ������ B���� A�� ������ ����������
//// A���� B�� ������ �Ұ��� �ϴ� 
//class B
//{
//public:
//	void b()
//	{
//		A a;
//
//		//��� private �Լ��� �ʵ�������� ģ���̱� ������ ���� ���� 
//		a.private_func();
//		a.private_num = 2;
//	}
//
//	void func()
//	{
//		A a;
//
//		//��� private �Լ��� �ʵ�������� ���� ���������� ģ���̱� ������ ����
//		//����
//		a.private_func();
//		a.private_num = 2;
//	}
//};

//      //      //      //      //      //      //      //

//a = a + a -->�ؿ� �ΰ� �Լ��� ������ ���� �߻�
//operator+(a,a)
//a.operator+a 

//a.real �� b.real�� private�̱� ������ friend�� ��������
//��������� �ڱ� �ڽ��� �������� �ʴ� ���� �����ڵ� + - * / ��� �ܺ��Լ���
//�����ϴ� ���� ��Ģ

//�ݴ�� �ڱ� �ڽ��� �����ϴ� ���� ������ += -= ���� �ֵ���
//(Ŭ����)��� �Լ��� �����ϴ� ���� ��Ģ


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
//	// ������ ������ �Լ����� ���� :)
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
//	// �Է� ���� ���ڿ��� �м��Ͽ� real �κа� img �κ��� ã�ƾ� �Ѵ�.
//	// ���ڿ��� ���� ������ �����ϴ� "[��ȣ](�Ǽ���)(��ȣ)i(�����)"
//	// �� �� �� ���� ��ȣ�� ���� �����մϴ�. (������ + �� ����)
//
//	int begin = 0, end = strlen(str);
//	img = 0.0;
//	real = 0.0;
//
//	// ���� ���� ������ �Ǵ� 'i' �� ��ġ�� ã�´�.
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
//	// ���� 'i' �� ���ٸ� �� ���� �Ǽ� ���̴�.
//	if (pos_i == -1)
//	{
//		real = get_number(str, begin, end - 1);
//		return;
//	}
//
//	// ���� 'i' �� �ִٸ�,  �Ǽ��ο� ����θ� ����� ó���ϸ� �ȴ�.
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
//			break;  // �� �̿��� �̻��� ���ڵ��� �� ���
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
//	std::cout << "a�� ���� : " << a << "�̴� " << std::endl;
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
//    char* string_content;  // ���ڿ� �����͸� ����Ű�� ������
//    int string_length;     // ���ڿ� ����
//
//    int memory_capacity;  // ���� �Ҵ�� �뷮
//
//public:
//    // ���� �ϳ��� ����
//    MyString(char c);
//
//    // ���ڿ��� ���� ����
//    MyString(const char* str);
//
//    // ���� ������
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
// operator ++ ����,���� ���� ������  
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
//		std::cout << "���� ���� ������" << std::endl;
//		return *this;
//	}
//
//	//���� ������ ���� ������ ���̸� �α� ���� ���� ������ ���
//	//int�� ������ ������ �ƹ��͵� ���޵��� �ʴ´�.
//	Test operator++(int) //++operator(n)
//	{
//		Test temp(*this);
//		m_data++;
//		std::cout << "���� ���� ������" << std::endl;
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

