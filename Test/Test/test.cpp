#include <cstddef>
#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <random>
#include<cstdlib>
#include<ctime>
#include<cassert>
#include<string>
#include<cstring>


using namespace std;


//class Color
//{
//private:
//	float m_r;
//	float m_g;
//	float m_b;
//	int m_id;
//
//public:
//	static int idcounter;
//
//	Color()
//		:m_r(0), m_g(0), m_b(0)
//	{}
//
//	Color(float r, float g, float b)
//		:m_r(r), m_g(g), m_b(b)
//	{}
//
//	float GetR()
//	{
//		return m_r;
//	}
//
//	float GetG()
//	{
//		return m_g;
//	}
//
//	float GetB()
//	{
//		return m_b;
//	}
//
//	Color MixColors(Color A, Color B)
//	{
//		return Color
//		{
//			(A.m_r + B.m_r) / 2, (A.m_g + B.m_g) / 2, (A.m_b + B.m_b) / 2
//		};
//	}
//
//	~Color()
//	{
//
//	}
//};
//
//	int Color::idcounter = 1;
//		�ٸ� Ŭ���������� ����� �� ����
//	
//	int main()
//	{
//		Color blue(0, 0, 1);
//
//		Color red(1, 0, 0);
//
//		Color purple;
//
//		purple = purple.MixColors(blue, red);
//
//		blue.GetB();
//
//		cout << "r = " << purple.GetR() << " g = " << purple.GetG() << " b = " << purple.GetB();
//	}

//			//			//			//			//			//			//
//��� �޼����� ����, ���� �и��ϱ� 

//class Vector2
//{
//private:
//	float m_x;
//	float m_y;
//public:
//	Vector2();
//
//	Vector2(float x, float y);
//
//	float GetX() const;
//
//	float GetY() const;
//
//	//������ Ŭ������ �Ҽ� 
//	static Vector2 Sum(Vector2 a, Vector2 b)
//	{
//		return Vector2(a.m_x + b.m_x, a.m_y + b.m_y);
//	}
//
//	//������ (� Ư���� ��ü�� ���� �� �� ����/ ������ '�����ε�'
//	Vector2 Add(const Vector2 rhs)const;
//
//	//�ܼ��ϰ� ��ü ���� 
//	Vector2 operator+(const Vector2 rhs)const;
//
//	Vector2 operator-(const Vector2 rhs)const;
//
//	Vector2 operator*(const float rhs)const;
//	//���� ���ϱ� �Ǽ�
//
//	Vector2 operator/(const float rhs) const;
//
//	float operator*(const Vector2 rhs)const; 
//	//���� ���ϱ� ����
//};
//
////�� �Լ��� �ڷ����� �ƴ϶� Vector2 Ŭ���� �ϱ�?
////-> �װ� ��ü�� ��ȯ�ϱ� �������� 
//Vector2 Sum(Vector2 a, Vector2 b)
//{
//	return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
//}
//
//
////���� ������
//Vector2 operator*(float a, Vector2 rhs)
//{
//	return Vector2(a * rhs.GetX(), a * rhs.GetY());
//}
//
//int main()
//{
//	Vector2 a(2, 2);
//	Vector2 b(3, 3);
//
//	Vector2 c1 = Vector2::Sum(a,b); //operator�� ���� ���� ��� 
//
//	Vector2 c2 = a.Add(b); 
//
//
//	cout << c1.GetX() << ", "<< c1.GetY() <<endl;
//
//	cout << c2.GetX() << ", "<< c2.GetY() <<endl;
//
//	Vector2 c3 = a+b; // == Vector2 c3 = a.operator+(b);
//
//	Vector2 c4 = a-b;
//
//	float c5 = a*b; //��ü ���ϱ� ,c5�� ����
//
//	Vector2 c6 = a*2;
//
//	Vector2 c7 = a/2;
//
//	cout << c3.GetX() << ", "<< c3.GetY() <<endl;
//
//	cout << c4.GetX() << ", "<< c4.GetY() <<endl;
//
//	cout << c5 <<endl;
//
//	cout << c6.GetX() << ", "<< c6.GetY() <<endl;
//
//	cout << c7.GetX() << ", "<< c7.GetY() <<endl;
//
//	Vector2 c8 = (1.8)*a ; //���� ������ 
//
//	cout << c8.GetX() << ", "<< c8.GetY() <<endl;
//}
//
//Vector2::Vector2()
//	:m_x(0), m_y(0)
//{}
//
//Vector2::Vector2(float x, float y)
//	:m_x(x), m_y(y)
//{}
//
//float Vector2::GetX() const
//{
//	return m_x;
//}
//
//float Vector2::GetY() const
//{
//	return m_y;
//}
//
////a.add(b) (a�� m_x, m_y)
//Vector2 Vector2::Add(const Vector2 rhs)const
//{
//	return Vector2(m_x + rhs.m_x, m_y + rhs.m_y);
//}
//
//Vector2 Vector2::operator+(const Vector2 rhs) const
//{
//	return Vector2(m_x + rhs.m_x, m_y + rhs.m_y);
//}
//
//Vector2 Vector2::operator-(const Vector2 rhs)const
//{
//	return Vector2(m_x - rhs.m_x, m_y - rhs.m_y);
//}
//
//Vector2 Vector2::operator/(const float rhs)const
//{
//	return Vector2(m_x * (1 / rhs), m_y * (1 / rhs));
//}
//
////���� ���ϱ� �Ǽ� a*5 == a.mul(5) / rhs = 5
//Vector2 Vector2::operator*(const float rhs)const
//{
//	return Vector2(m_x * rhs, m_y * rhs);
//}
//
////���� ���ϱ� ���� 
//float Vector2::operator*(const Vector2 rhs)const
//{
//	return m_x * rhs.m_x + m_y * rhs.m_y;
//}
//
//
//
////���� ���� �� �� ������� ������ ���� �� 

//		//		//		//		//		//		//		//		//		//

//�����Ҵ� ���� 

//class Vector2
//{
//private:
//	float m_x;
//	float m_y;
//
//public:
//	Vector2()
//		:m_x(0), m_y(0)
//	{
//		cout << this << " :Vector2()" << endl;
//	}
//
//	Vector2(const float x, const float y)
//		:m_x(x), m_y(y)
//	{
//		cout << this << " :Vector2(const float x, const float y)" << endl;
//	}
//
//	float GetX() const
//	{
//		return m_x;
//	}
//
//	float GetY() const
//	{
//		return m_y;
//	}
//};
//
//int main()
//{
//	Vector2 s1 = Vector2();
//
//	Vector2 s2 = Vector2(3, 2);
//
//	Vector2* d1 = new Vector2();
//
//	Vector2* d2 = new Vector2(5, 2);
//
//	cout << "(" << d1->GetX() << ", " << d1->GetY() << ")" << endl;
//	cout << "(" << d2->GetX() << ", " << d2->GetY() << ")" << endl;
//
//	delete d1;
//	delete d2;
//}

//		//		//		//		//		//		//		//		//

//��ü�� ���� & ���� ���� ����
//���� ���� �迭 �����ϱ�
//�ּ� ���� �����ϸ� ���� ���� & ���� ���� �����ϸ� ���� ����

//class String
//{
//private:
//	char* m_strData; //���ڿ� ����
//	int m_len = 0; //���� ���� ���� 
//
//	void alloc(int len)
//	{
//		m_strData = new char[m_len + 1];
//		//char s1[] = "abc" s1�� ���̴� 4
//		cout << "m_strData �Ҵ�: " << (void*)m_strData << endl;
//		//void*ptr = strData; �ּ� ���� ������ �ִ�. �ٲ� �� X
//		//(void*) ���ڿ��� ������� �ʱ� ���� void�� �� ��ȯ�� �� ��
//	}
//
//	void release()
//	{
//		delete[] m_strData;
//		
//		if (m_strData)
//		{
//			cout << "m_strData ������: " << (void*)m_strData << endl;
//		}
//	}
//public:
//	String()
//	{
//		cout << "String () ������ ȣ��" << endl;
//		m_strData = NULL;
//		m_len = 0;
//	}
//
//	String(const char* str) 
//	{
//		//&& �϶� ���� �� ���� m_strData ����
//		//&& ���� ���� operator���� �� ���� ���� 
//		cout << "String(const char*) ������ ȣ��" << endl;
//		cout << "str �ּ� : " << &str << endl;
//		m_len = strlen(str);
//		alloc(m_len);
//
//		//strlen -> ���ڿ� ����
//
//		for (int i = 0; i <= m_len; i++)
//		{
//			m_strData[i] = str[i];
//		}
//	}
//
//	String(const String& rhs) //Vector2 s2(s1) ���� ������ 
//	{
//		cout << "���� ������ ȣ��" << endl;
//		// m_strData = rhs.m_strData;
//		//���� ���� m_strData �� �������̱� ����
//		//cout << rhs.m_strData << endl; // >> �ȳ� ���
//
//		m_strData = new char[rhs.m_len + 1];
//		//char *m_strData = new char[]
//		cout << "strData �Ҵ� : " << (void*)m_strData << endl;
//
//		for (int i = 0; i <= rhs.m_len; i++)
//		{
//			m_strData[i] = rhs.m_strData[i];
//		}
//		//m_strData > sw //rhs.m_strData > s1
//		m_len = rhs.m_len; //���� ���� 
//	}
//
//	String(String&& rhs)
//	{
//		cout << "String(String &&rhs): /this " << this << endl;
//		cout << "rhs�� �ּ�: " << &rhs << endl;
//		m_len = rhs.m_len;
//		m_strData = rhs.m_strData;
//		rhs.m_strData = NULL;
//	}
//
//	String& operator=(const String& rhs)//s3 = s1 & s3.operator=(s1)
//		//&rhs�� �ּ� ���� �ƴ϶� ���۷��� �����̴�
//		//s1 �� rhs, s3�� this
//		//s1�� �����ؼ� s3�� �ٿ� �ֱ��̹Ƿ� *this�� ��ȯ�Ѵ�.
//	{
//		cout << "String& operator=(const String& rhs) /this " << this << endl;
//		if (this != &rhs) //s3 = s3 ����
//		{
//			release();
//			//s3�� ���� ���� �س��� ������ �� m_strData�� �ʱ�ȭ ���������
//
//			alloc(rhs.m_len);
//			//char ���� [���ڿ� ���� + �����]
//
//			cout << "strData �Ҵ�: " << (void*)m_strData << endl;
//
//			for (int i = 0; i <= rhs.m_len; i++)
//			{
//				m_strData[i] = rhs.m_strData[i];
//			}
//
//			m_len = rhs.m_len;
//		}
//
//		return *this;
//		//*this = �ڱ� �ڽ��� ��
//	}
//
//	String& operator=(String&& rhs)
//		//&&(r value�� �����ʿ� �� �� �ְ��Ѵ�. const�� ����) -> r value(�캯����, �б� ����)
//		//l value�� ����(���ʿ���)
//		//int  a = 10; int && b = a; ���� -> ���� �� ���� X
//		//String && const rhs �̸� rhs ���� NULL�� �ٲ��� �� �Ѵ�.
//		//a = getName();
//	{
//		cout << "String &operator=(const String &&rhs): /this " << this << endl;
//		cout << "rhs�� �ּ�: " << &rhs << endl;
//		m_len = rhs.m_len;
//		m_strData = rhs.m_strData;
//		//�ּ� �� ����
//
//		rhs.m_strData = NULL;
//		cout <<"m_strData �ּ�: " << & m_strData << endl;
//		return *this;
//	}
//
//	~String()//�Ҹ���, �Ҹ��ڴ� ��ü�� �����
//	{
//		cout << "~String() �Ҹ��� ȣ��" << endl;
//		release();
//		m_strData = NULL;
//		//������ �޸𸮸� �ٽ� �����ϱ� ���� 
//	}
//
//	char* getStrData() const
//	{
//		return m_strData;
//	}
//
//	int getLen() const
//	{
//		return m_len;
//	}
//
//	void setStrData(const char* str)
//	{
//		cout << "void SetStrData(const char *): /this " << this << " , " << str << endl;
//		m_len = strlen(str);
//		alloc(m_len);
//		
//		for (int i = 0; i <= m_len; i++)
//		{
//			m_strData[i] = str[i];
//		}
//	}
//};
//
//String getName()
//{
//	cout << "----------2---------- getName ȣ��" << endl;
//	String res("getName");
//	cout << "getName�ȿ��� ���� ��ü �ּ�: " << &res << endl;
//	cout << "----------3----------getName ����" << endl;
//	return res;
//}
//
//int main()
//{
//	String s1("�ڼ���");
//
//	//String s2(s1);
//
//	////strcpy ���� �ϴ� �� 
//	////const char *b{"�ڼ���"};
//	////char *a = new char[5]
//	////strcpy(a,b);
//
//	////String s3();
//	//String s3("Hello");
//	////s3.operator=(s2);
//	//s3 = s2;
//	//
//
//	cout << s1.getStrData() << endl;
//	//cout << s2.getStrData() << endl;
//	//cout << s3.getStrData() << endl;
//
//	cout << "##########################################" << endl;
//
//	String a;
//
//	cout << "----------1----------" << endl;
//	a = getName();
//	//getName -> res("getName") �ӽ� ��ü ���� -> String(const char *str)
//
//	cout << "----------4----------" << endl;
//	cout << "a�� �ּ�: " << &a << endl;
//	cout << "a: " << a.getStrData() << endl;
//
//	//�ӽ� ��ü�� r-value�̴�.
//	//r-value -> �º��� ���� X �캯���� �� �� �ִ�
//	//���� ����� �޸𸮰� 2�� �ʱ�ȭ �ż� ���� ����
//
//	//String &&r = getName();
//	//r-value �����ڰ� getName�� �����ϰ� �ִ�.
//	// 
//	//�ӽ� ��ü, ��ȯ�Ǳ� ���� ��ü�� �̵� ������, �̵� ���� �����ڰ� ȣ�� �� 
//
//}
//		//		//		//		//		//		//		//		//		//

//���
//�θ� Ŭ������ �ڱ� �ڽ��� ��� ������ ���� ���� 
//�ڽ� Ŭ������ �ڱ� �ڽ��� ������� �Ӹ� �ƴ϶� �θ� ����������� ���� ����

//class Base
//{
//public:
//	void bFunc()
//	{
//		cout << "Hello" << endl;
//	}
//
//	int bNum;
//};
//
//class Derived :public Base
//{
//public:
//	void dFunc()
//	{
//		cout << "Hello?" << endl;
//	}
//
//	int dNum;
//};
//
//int main()
//{
//	Base b; //�θ� Ŭ����
//
//	Derived d; //�ڽ� Ŭ����
//
//	b.bFunc(); // �θ� Ŭ���� �ȿ� �ִ� �Լ�
//	b.bNum = 1; //�θ� Ŭ���� �ȿ� �ִ� ����
//
//	d.bFunc(); //�θ�
//	d.dFunc(); //�ڽ�
//	d.dNum = 2;
//	d.bNum = 2;
//}

//		//		//		//		//		//		//		//		//

//�������̵�, �켱�ϴ�

//class Base
//{
//public:
//	int a = 10;
//	void print()
//	{
//		cout << "From Base" << endl;
//	}
//};
//
//class Derived :public Base
//{
//public:
//	int a = 20;
//
//	void print()
//	{
//		cout << "From Derive" << endl;
//	}
//};
//
//int main()
//{
//	Base b;//�θ�
//	Derived d; //�ڽ�5 
//
//	cout << b.a << endl;
//	cout << d.a << endl;
//
//	cout << d.Base::a << endl;
//	//derived���� base�� ���� ��� 
//	d.print();
//	d.Base::print();
//}

//		//		//		//		//		//		//		//		//

//���� ���ε�, �����Լ�
//Virtual, CPP_study Ŭ���� ���� ���� ����

//class Weapon
//{
//protected:
//	int m_power;
//
//public:
//	Weapon(int power)
//		:m_power(power)
//	{
//		cout << "Weapon(int)" << endl;
//	}
//
//	virtual void Use()//virtual �����Լ�
//		//���α׷��� ����� �������� �� �� �����ϱ�
//		//���α׷��� ����Ǵ� �������� �����ϰԲ� �Ѵٴ� ��
//	{
//		cout << "Weapon::Use" << endl;
//		cout << m_power << endl;
//	}
//};
//
//class Sword :public Weapon
//{
//private:
//	void Swing()
//	{
//		cout << "Swing sword" << endl;
//	}
//public:
//	Sword(int power)
//		:Weapon(power)
//	{
//		cout << "Sword(int)" << endl;
//	}
//
//	void Use()
//	{
//		cout << "Sword::Use()" << endl;
//		cout << m_power << endl;
//
//		Swing();
//	}
//};
//
//class Magic :public Weapon
//{
//private:
//	int m_manaCost;
//	void Cast()
//	{
//		cout << "Cast magic" << endl;
//	}
//public:
//	Magic(int power, int manaCost)
//		:Weapon(power), m_manaCost(manaCost)
//	{
//		cout << "Magic(int,int)" << endl;
//	}
//
//	void Use()
//	{
//		cout << "Magic::Use()" << endl;
//		cout << m_power << endl;
//
//		Cast();
//	}
//};
//
//int main()
//{
//	Weapon myWeapon(10);
//	Sword mySword(50);
//	Magic myMagic(15,7);
//
//	myWeapon.Use();
//	mySword.Use();
//	myMagic.Use();
//
//	cout << "----" << endl;
//
//	Weapon* currentWeapon;
//	//���� �Լ����� ����� �ʱ�ȭ�� �ڽ� Ŭ������ �ϰ� �װ� �Ű� ������ �޴� �Լ�����
//	//�ڽ� Ŭ���� ���� ������ �θ�Ŭ������ ������ �Ű������� �޴´�.
//
//	currentWeapon = &myWeapon;
//
//	currentWeapon->Use();
//
//	currentWeapon = &mySword;
//
//	currentWeapon->Use();
//
//	currentWeapon = &myMagic;
//
//	currentWeapon->Use();
//}

//		//		//		//		//		//		//		//		//		//

//������� �ҽ����� ����
//Cal.cpp, Add.cpp, main.cpp�� �������� �����̸����� ��
//obj�� �����ϰ� ��ũ�ؼ� main.exe��� ���� ������ �����ϰ� �ȴ�
//c++ �����Ϸ������� cpp ���ϸ� �������ϰ� ���ϸ� ���� ���������� �ʴ´�.

//#include "Cal.h"
//
//int main()
//{
//	Cal c1;
//	c1.Run();
//}

//		//		//		//		//		//		//		//		//		//

//class image
//{
//public:
//	operator string()
//	{
//		return "����";
//	}
//};
//
//class message
//{
//private:
//	int m_sendtime;
//	string m_sendname;
//
//public:
//	message(int sendtime, string sendname)
//	{
//		m_sendtime = sendtime;
//		m_sendname = sendname;
//	}
//
//	int getsendtime() const
//	{
//		return m_sendtime;
//	}
//
//	string getsendname() const
//	{
//		return m_sendname;
//	}
//
//	virtual string getcontent() const
//	{
//		return "";
//	}
//};
//
//class textmessage :public message
//{
//private:
//	string m_text;
//
//public:
//	textmessage(int sendtime, string sendname, string text)
//		:message(sendtime, sendname),m_text(text)
//	{}
//
//	string gettext() const
//	{
//		return m_text;
//	}
//
//	string getcontent() const
//	{
//		return m_text;
//	}
//};
//
//class imagemessage :public message
//{
//	//�̹��� ��ü�� �����Ҵ� �� �� ������, �̹��� �ȿ� Ŭ��������
//	//�����Ҵ� �� ������ ���� ����� �ǹ̰� ����.
//
//private:
//	image* m_image; //�̹����� �뷮�� ũ�� ������ �̹����� ���� ������ ����
//
//public:
//	imagemessage(int sendtime, string sendname, image* image)
//		:message(sendtime, sendname),m_image(image)
//	{}
//
//	image* getimage()const
//	{
//		return m_image;
//	}
//
//	string getcontent() const
//		//�Լ� ���� �ڷ����� ���� ����
//	{
//		return (string)*m_image;
//		//�����Ͱ� ����Ű�� �ִ� ��ü�� ���� ��Ʈ������ ����ȯ�� �� �� ������
//	}
//};
//
////void printmessage(textmessage* m)
////{
////	cout << "���� �ð�: " << m->getsendtime() << endl;
////	cout << "���� ���:" << m->getsendname() << endl;
////	cout << "����:" << m->getcontent() << endl;
////	cout << endl;
////}
//
//void printmessage(message* m)
//{
//	cout << "���� �ð�: " << m->getsendtime() << endl;
//	cout << "���� ���:" << m->getsendname() << endl;
//	cout << "����:" << m->getcontent() << endl;
//	cout << endl;
//}
//
///*imagemessage* m*/
//void printimagemessage(imagemessage* m)
//{
//	cout << "���� �ð�: " << m->getsendtime() << endl;
//	cout << "���� ���:" << m->getsendname() << endl;
//	cout << "����: " << (string)*m->getimage() << endl;
//	cout << endl;
//}
//
///*const message &m*/
//void referenceprint(const message& m)
//{
//	cout << "���� �ð�: " << m.getsendtime() << endl;
//	cout << "���� ���:" << m.getsendname() << endl;
//	cout << "����:" << m.getcontent() << endl;
//	cout << endl;
//}
//
///*���۷����� ������ ��ü ��ü�� �ѱ�*/
//void referenceprint2(const message m)
//{
//	cout << "���� �ð�: " << m.getsendtime() << endl;
//	cout << "���� ���:" << m.getsendname() << endl;
//	cout << "����:" << m.getcontent() << endl;
//	cout << endl;
//}
//
//int main()
//{
//	image* p_dogimage = new image();
//
//	textmessage *hello = new textmessage(10, "�ε�", "�ȳ�");
//	imagemessage *dog = new imagemessage(20, "�ε�", p_dogimage);
//
//	message* messages[] = {
//		new textmessage(10,"�ε�","�ȳ�"),
//		new textmessage(22,"�ε�","�߰�"),
//		new imagemessage(44,"�ε�",p_dogimage)
//	};
//
//	for (message* m : messages)
//	{
//		referenceprint(*m);
//	}
//
//	cout << (string)*dog->getimage() << endl; //����
//	cout << dog->getimage() << endl; //�ּ� ��
//	cout << endl;
//
//	printmessage(hello);
//	printmessage(dog);
//	cout << "//		//		//		//		//		//" << endl;
//	//printimagemessage(hello); ���� 
//	printimagemessage(dog);
//	cout << "//		//		//		//		//		//" << endl;
//	referenceprint(*hello);
//	referenceprint(*dog);
//	cout << "//		//		//		//		//		//" << endl;
//	referenceprint2(*hello); //���� �� ����
//	referenceprint2(*dog);
//}

//		//		//		//		//		//		//		//		//
//���۷����� ������ 
//class A
//{
//public:
//	int m_num = 10;
//	
//	void pirnt_This()
//	{
//		cout << this << endl;
//	}
//
//	A &return_This()
//	{
//		return *this; //this�� �ڱ��� �ּҰ��̴�
//	}
//
//	A return_This2()
//	{
//		return *this;
//	}
//};
//
//int main()
//{
//	A a;
//
//	a.pirnt_This(); //a ��ü�� �ּ� �� 
//
//	A& ref = a.return_This();
//	A ref2 = a.return_This();
//
//	//A& ref = a.return_This2(); //A &return_This() ���⿡ ���۷����� ���ٸ� &ref�� �ӽð�ü�� �����Ѵ� ������ �ӽð�ü�� ������� ������
//	////-> ���� 
//	//A ref2 = a.return_This2();
//	////��� �ּҰ� �ƴ϶� ���� �����ϱ� ������ ���� X
//
//	ref.pirnt_This(); //ref ��ü�� �ּ� �� 
//	ref2.pirnt_This(); //ref2 ��ü�� �ּ� �� 
//
//	ref.m_num = 20; //a�� ref �� �� �� �ٲ� 
//
//	cout << "a�� ��: " << a.m_num << endl;
//	cout << "ref�� �� : " << ref.m_num << endl;
//	cout << "ref2�� �� : " << ref2.m_num << endl;
//
//	cout <<"a�� �ּ� ��: "<< &a << endl;
//	cout << "ref�� �ּ� ��: "<<&ref << endl;
//	cout << "ref2�� �ּ� ��: " << &ref2 << endl;
//}
//		//		//		//		//		//		//		//		//
//������ ����, ������ ����

//int pass_by_value(int y)
//{
//	y = 5;
//	cout << &y << endl;
//	return y;
//}
//
//int pass_by_reference(int &y) //������ ���޷��ϸ� ���ο� �ּҸ� �� �ᵵ �ȴ�
//{
//	y = 5;
//	cout << &y << endl;
//	return y;
//}
//
//int main()
//{
//	int b = 0;
//	int a = 0;
//
//	cout << &a << endl;
//	a = pass_by_reference(a);
//	cout << a << endl;
//
//	cout << "//		//		//		//"<<endl;
//	cout << &b << endl;
//	cout << pass_by_value(b) << endl;
//
//}

// ���۷����� �����ϴ� �Լ�

//class A {
//	int x;
//
//public:
//	A(int c) : x(c) {}
//
//	int& access_x() 
//	{
//		cout << this << endl;
//		return x; 
//	}
//
//	int get_x() 
//	{ 
//		cout << this << endl;
//		cout << &x << endl;
//		return x; 
//	}
//	void show_x() { std::cout << x << std::endl; }
//};
//
//int main() {
//	A a(5);
//	a.show_x();
//
//	int& c = a.access_x(); //�����ϴ� ���� ���� �� �ذɱ� �װ� �ٷ� ���� ���� ~ �� �ƴ϶� get_x���� ���� ���ο� �ּ� �����Ѵٴ� ���� �����ϱ� ���ؼ�
//	//�׷��� this ���� �� ���� �ɱ� ~  
//	cout << &c << endl;
//	c = 4;
//	a.show_x();
//
//	int d = a.access_x();
//	d = 3;
//	a.show_x();
//
//	// �Ʒ��� ���� -> get_x() �Լ� �ȿ� a��ü�� x ���� ���ο� �ּҿ� �����ϰ� �ֱ� ������ ������ ���� �ʴ´�.
//	// int& e = a.get_x(); 
//	// e = 2;
//	// a.show_x();
//
//	int f = a.get_x();
//	f = 1;
//	a.show_x();
//
//	int& ab = d;
//	ab = 10;
//	cout << d;
//}

