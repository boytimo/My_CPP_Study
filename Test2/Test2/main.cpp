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

//		//		//		//		//

#include<string.h>
#include <iostream>

class MyString
{
	char* string_content; //���ڿ� �����͸� ����Ű�� ������
	int string_length; //���ڿ� ����
	int memory_capacity; //���� �Ҵ�� �޸� ������ ũ�⸦ ��Ÿ���� ���ο� ���� 

public:
	//���� �ϳ��� ����
	MyString(char c);

	//���ڿ��� ���� ���� 
	MyString(const char* str);

	//���� ������
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

MyString& MyString::assign(const MyString& str) //���ο� ���ڿ� �� ���� �Լ� 
{
	std::cout << "& ȣ�� " << std::endl;

	//���ڿ��� ũ�Ⱑ �� ũ�ٸ� ��������� ������ �������� �Ҵ�� �޸� �ٷ� �ڿ�
	//�޸𸮸� �߰��ϴ� ����� �����Ƿ�, ���� �����Ҵ��� ������Ѵ�
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
  // �׸��� ���� str.string_length + 1 ~ string_length �κ��� �ʱ�ȭ
  // ��ų �ʿ�� ����. �ֳ��ϸ� �ű� ������ �о������ �ʱ� �����̴�.

	string_length = str.string_length;

	return *this;
}

MyString& MyString::assign(const char* str) 
{
	std::cout << "str ȣ�� " << std::endl;
	int str_length = strlen(str);

	//str_length > string_length �̷��� �ϸ�
	//���� �ִ��ſ��� ū�ſ��� �����ɷ� �ϸ� if�� �ߵ�X
	//�׷��� �޸� ������ ���µ�
	// ���̰� ª���ſ��� �ٽ� ��ɷ� �Ҷ� ª���� ���̷� ������
	// ���� ������ Ȯ�� ���ؼ� ��ȿ�������� �����ؼ�
	//memory_capacity�� ���� ���� �޸� ���̸� ����
	if (str_length > memory_capacity)
	{
		// �׷��� �ٽ� �Ҵ��� ����߸� �Ѵ�.
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

int MyString::capacity()const //���� ���ڿ��� �Ҵ�� �޸� ũ�⸦ ��Ÿ���� �Լ�
{
	return memory_capacity;
}

void MyString::reserve(int size) //�Ҵ��� ���ڿ��� ũ�⸦ �̸� ����
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
	//���� �����Ϸ��� size�� ���� capacity ���� �۴ٸ�
	//�ƹ��͵� ���ص� �ȴ�.
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
	////�� ���ڿ��� assign �ÿ� ������ �߻�
	////assign �Լ��� ���ڿ��� ª�� ���ڿ��� ���� ���� ũ�⿡ �������� �Ҵ�Ǿ�
	////�ִٰ� �����Ͽ� �޸𸮸� �����ϰ� �ٽ� ���� ���� �޸𸮸� �Ҵ��ϴ� �ſ� ��ȿ�� ����
	////�۾��� �ϰԵ� 


	////���� �̷��� ��ȿ���� ���� ���ؼ��� �󸶳� ���� ������ �Ҵ�Ǿ� �ִ���
	////�� �� �ִ� ������ ���� �����ϴ� ���� ����.+    memory_capacity;
	//str1.assign("very long string");
	//str1.println();

	//		//		//		//		//		//	

	MyString str1("very very very long string");
	str1.reserve(30); // �Ҵ��� ���ڿ��� ũ�⸦ �̸� ����

	std::cout << "Capacity: " << str1.capacity() << std::endl; //���� ���ڿ��� �Ҵ�� �޸� ũ�⸦ ��Ÿ���� �Լ�
	std::cout << "String length: " << str1.length() << std::endl;
	str1.println();

}
