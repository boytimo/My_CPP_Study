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
//		다른 클래스에서도 사용할 수 있음
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
//멤버 메서드의 선언, 정의 분리하기 

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
//	//정적인 클래스에 소속 
//	static Vector2 Sum(Vector2 a, Vector2 b)
//	{
//		return Vector2(a.m_x + b.m_x, a.m_y + b.m_y);
//	}
//
//	//동적인 (어떤 특정한 개체에 포함 될 수 있음/ 연산자 '오버로딩'
//	Vector2 Add(const Vector2 rhs)const;
//
//	//단순하게 객체 끼리 
//	Vector2 operator+(const Vector2 rhs)const;
//
//	Vector2 operator-(const Vector2 rhs)const;
//
//	Vector2 operator*(const float rhs)const;
//	//벡터 곱하기 실수
//
//	Vector2 operator/(const float rhs) const;
//
//	float operator*(const Vector2 rhs)const; 
//	//벡터 곱하기 벡터
//};
//
////왜 함수가 자료형이 아니라 Vector2 클래스 일까?
////-> 그건 객체를 반환하기 때문이지 
//Vector2 Sum(Vector2 a, Vector2 b)
//{
//	return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
//}
//
//
////비멤버 연산자
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
//	Vector2 c1 = Vector2::Sum(a,b); //operator를 쓰지 않을 경우 
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
//	float c5 = a*b; //객체 곱하기 ,c5는 변수
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
//	Vector2 c8 = (1.8)*a ; //비멤버 연산자 
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
////a.add(b) (a가 m_x, m_y)
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
////벡터 곱하기 실수 a*5 == a.mul(5) / rhs = 5
//Vector2 Vector2::operator*(const float rhs)const
//{
//	return Vector2(m_x * rhs, m_y * rhs);
//}
//
////벡터 곱하기 벡터 
//float Vector2::operator*(const Vector2 rhs)const
//{
//	return m_x * rhs.m_x + m_y * rhs.m_y;
//}
//
//
//
////전방 선언 할 때 내용까지 적으면 오류 남 

//		//		//		//		//		//		//		//		//		//

//동적할당 예시 

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

//객체의 얕은 & 깊은 복사 예시
//동적 문자 배열 복사하기
//주소 값을 복사하면 얕은 복사 & 실제 값을 복사하면 깊은 복사

//class String
//{
//private:
//	char* m_strData; //문자열 저장
//	int m_len = 0; //문자 길이 저장 
//
//	void alloc(int len)
//	{
//		m_strData = new char[m_len + 1];
//		//char s1[] = "abc" s1의 길이는 4
//		cout << "m_strData 할당: " << (void*)m_strData << endl;
//		//void*ptr = strData; 주소 값만 가지고 있다. 바꿀 수 X
//		//(void*) 문자열을 취급하지 않기 위해 void로 형 변환만 한 것
//	}
//
//	void release()
//	{
//		delete[] m_strData;
//		
//		if (m_strData)
//		{
//			cout << "m_strData 해제됨: " << (void*)m_strData << endl;
//		}
//	}
//public:
//	String()
//	{
//		cout << "String () 생성자 호출" << endl;
//		m_strData = NULL;
//		m_len = 0;
//	}
//
//	String(const char* str) 
//	{
//		//&& 일때 여기 한 번만 m_strData 생성
//		//&& 없을 때는 operator에서 한 번더 생성 
//		cout << "String(const char*) 생성자 호출" << endl;
//		cout << "str 주소 : " << &str << endl;
//		m_len = strlen(str);
//		alloc(m_len);
//
//		//strlen -> 문자열 길이
//
//		for (int i = 0; i <= m_len; i++)
//		{
//			m_strData[i] = str[i];
//		}
//	}
//
//	String(const String& rhs) //Vector2 s2(s1) 복사 생성자 
//	{
//		cout << "복사 생성자 호출" << endl;
//		// m_strData = rhs.m_strData;
//		//얕은 복사 m_strData 는 포인터이기 때문
//		//cout << rhs.m_strData << endl; // >> 안녕 출력
//
//		m_strData = new char[rhs.m_len + 1];
//		//char *m_strData = new char[]
//		cout << "strData 할당 : " << (void*)m_strData << endl;
//
//		for (int i = 0; i <= rhs.m_len; i++)
//		{
//			m_strData[i] = rhs.m_strData[i];
//		}
//		//m_strData > sw //rhs.m_strData > s1
//		m_len = rhs.m_len; //깊은 복사 
//	}
//
//	String(String&& rhs)
//	{
//		cout << "String(String &&rhs): /this " << this << endl;
//		cout << "rhs의 주소: " << &rhs << endl;
//		m_len = rhs.m_len;
//		m_strData = rhs.m_strData;
//		rhs.m_strData = NULL;
//	}
//
//	String& operator=(const String& rhs)//s3 = s1 & s3.operator=(s1)
//		//&rhs는 주소 값이 아니라 레퍼런스 변수이다
//		//s1 이 rhs, s3가 this
//		//s1을 복사해서 s3에 붙여 넣기이므로 *this를 반환한다.
//	{
//		cout << "String& operator=(const String& rhs) /this " << this << endl;
//		if (this != &rhs) //s3 = s3 방지
//		{
//			release();
//			//s3에 값을 지정 해놓은 상태이 면 m_strData를 초기화 시켜줘야함
//
//			alloc(rhs.m_len);
//			//char 형은 [문자열 길이 + 빈공간]
//
//			cout << "strData 할당: " << (void*)m_strData << endl;
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
//		//*this = 자기 자신의 값
//	}
//
//	String& operator=(String&& rhs)
//		//&&(r value만 오른쪽에 올 수 있게한다. const와 같음) -> r value(우변에만, 읽기 가능)
//		//l value는 변수(왼쪽에만)
//		//int  a = 10; int && b = a; 오류 -> 변수 값 대입 X
//		//String && const rhs 이면 rhs 값을 NULL로 바꾸지 못 한다.
//		//a = getName();
//	{
//		cout << "String &operator=(const String &&rhs): /this " << this << endl;
//		cout << "rhs의 주소: " << &rhs << endl;
//		m_len = rhs.m_len;
//		m_strData = rhs.m_strData;
//		//주소 값 전달
//
//		rhs.m_strData = NULL;
//		cout <<"m_strData 주소: " << & m_strData << endl;
//		return *this;
//	}
//
//	~String()//소멸자, 소멸자는 객체만 지운다
//	{
//		cout << "~String() 소멸자 호출" << endl;
//		release();
//		m_strData = NULL;
//		//해제된 메모리를 다시 접근하기 위해 
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
//	cout << "----------2---------- getName 호출" << endl;
//	String res("getName");
//	cout << "getName안에서 만든 객체 주소: " << &res << endl;
//	cout << "----------3----------getName 종료" << endl;
//	return res;
//}
//
//int main()
//{
//	String s1("박세현");
//
//	//String s2(s1);
//
//	////strcpy 복사 하는 법 
//	////const char *b{"박세현"};
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
//	//getName -> res("getName") 임시 객체 생성 -> String(const char *str)
//
//	cout << "----------4----------" << endl;
//	cout << "a의 주소: " << &a << endl;
//	cout << "a: " << a.getStrData() << endl;
//
//	//임시 객체는 r-value이다.
//	//r-value -> 좌변에 오지 X 우변에만 올 수 있다
//	//얕은 복사는 메모리가 2번 초기화 돼서 문제 였다
//
//	//String &&r = getName();
//	//r-value 참조자가 getName을 참조하고 있다.
//	// 
//	//임시 객체, 반환되기 직전 객체엔 이동 생성자, 이동 대입 연산자가 호출 됨 
//
//}
//		//		//		//		//		//		//		//		//		//

//상속
//부모 클래스는 자기 자신의 멤버 변수만 접근 가능 
//자식 클래스는 자기 자신의 멤버변수 뿐만 아니라 부모 멤버변수에도 접근 가능

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
//	Base b; //부모 클래스
//
//	Derived d; //자식 클래스
//
//	b.bFunc(); // 부모 클래스 안에 있는 함수
//	b.bNum = 1; //부모 클래스 안에 있는 변수
//
//	d.bFunc(); //부모
//	d.dFunc(); //자식
//	d.dNum = 2;
//	d.bNum = 2;
//}

//		//		//		//		//		//		//		//		//

//오버라이딩, 우선하다

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
//	Base b;//부모
//	Derived d; //자식5 
//
//	cout << b.a << endl;
//	cout << d.a << endl;
//
//	cout << d.Base::a << endl;
//	//derived에서 base에 접근 방법 
//	d.print();
//	d.Base::print();
//}

//		//		//		//		//		//		//		//		//

//동적 바인딩, 가상함수
//Virtual, CPP_study 클래스 실행 순서 참고

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
//	virtual void Use()//virtual 가상함수
//		//프로그램을 만드는 시점에는 알 수 없으니깐
//		//프로그램이 실행되는 시점에서 결정하게끔 한다는 뜻
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
//	//메인 함수에서 선언과 초기화는 자식 클래스로 하고 그걸 매개 변수로 받는 함수에서
//	//자식 클래스 여러 종류를 부모클래스의 형으로 매개변수를 받는다.
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

//헤더파일 소스파일 이해
//Cal.cpp, Add.cpp, main.cpp를 컴파일해 각각이름으로 된
//obj를 생성하고 링크해서 main.exe라는 실행 파일을 생성하게 된다
//c++ 컴파일러에서는 cpp 파일만 컴파일하고 파일만 따로 컴파일하지 않는다.

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
//		return "사진";
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
//	//이미지 자체를 동적할당 할 수 있지만, 이미지 안에 클래스에서
//	//동적할당 된 포인터 얕은 복사는 의미가 없다.
//
//private:
//	image* m_image; //이미지는 용량이 크기 때문에 이미지에 대한 포인터 값만
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
//		//함수 옆에 자료형은 리턴 관련
//	{
//		return (string)*m_image;
//		//포인터가 가리키고 있는 객체에 가서 스트링으로 형변환이 된 걸 가져옴
//	}
//};
//
////void printmessage(textmessage* m)
////{
////	cout << "보낸 시간: " << m->getsendtime() << endl;
////	cout << "보낸 사람:" << m->getsendname() << endl;
////	cout << "내용:" << m->getcontent() << endl;
////	cout << endl;
////}
//
//void printmessage(message* m)
//{
//	cout << "보낸 시간: " << m->getsendtime() << endl;
//	cout << "보낸 사람:" << m->getsendname() << endl;
//	cout << "내용:" << m->getcontent() << endl;
//	cout << endl;
//}
//
///*imagemessage* m*/
//void printimagemessage(imagemessage* m)
//{
//	cout << "보낸 시간: " << m->getsendtime() << endl;
//	cout << "보낸 사람:" << m->getsendname() << endl;
//	cout << "내용: " << (string)*m->getimage() << endl;
//	cout << endl;
//}
//
///*const message &m*/
//void referenceprint(const message& m)
//{
//	cout << "보낸 시간: " << m.getsendtime() << endl;
//	cout << "보낸 사람:" << m.getsendname() << endl;
//	cout << "내용:" << m.getcontent() << endl;
//	cout << endl;
//}
//
///*레퍼런스가 없으면 객체 자체를 넘김*/
//void referenceprint2(const message m)
//{
//	cout << "보낸 시간: " << m.getsendtime() << endl;
//	cout << "보낸 사람:" << m.getsendname() << endl;
//	cout << "내용:" << m.getcontent() << endl;
//	cout << endl;
//}
//
//int main()
//{
//	image* p_dogimage = new image();
//
//	textmessage *hello = new textmessage(10, "두들", "안녕");
//	imagemessage *dog = new imagemessage(20, "두들", p_dogimage);
//
//	message* messages[] = {
//		new textmessage(10,"두들","안녕"),
//		new textmessage(22,"두들","잘가"),
//		new imagemessage(44,"두들",p_dogimage)
//	};
//
//	for (message* m : messages)
//	{
//		referenceprint(*m);
//	}
//
//	cout << (string)*dog->getimage() << endl; //사진
//	cout << dog->getimage() << endl; //주소 값
//	cout << endl;
//
//	printmessage(hello);
//	printmessage(dog);
//	cout << "//		//		//		//		//		//" << endl;
//	//printimagemessage(hello); 오류 
//	printimagemessage(dog);
//	cout << "//		//		//		//		//		//" << endl;
//	referenceprint(*hello);
//	referenceprint(*dog);
//	cout << "//		//		//		//		//		//" << endl;
//	referenceprint2(*hello); //내용 안 나옴
//	referenceprint2(*dog);
//}

//		//		//		//		//		//		//		//		//
//레퍼런스와 포인터 
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
//		return *this; //this는 자기의 주소값이다
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
//	a.pirnt_This(); //a 객체의 주소 값 
//
//	A& ref = a.return_This();
//	A ref2 = a.return_This();
//
//	//A& ref = a.return_This2(); //A &return_This() 여기에 레퍼런스가 없다면 &ref에 임시객체를 참조한다 하지만 임시객체는 사라지기 때문에
//	////-> 오류 
//	//A ref2 = a.return_This2();
//	////얘는 주소가 아니라 값만 복사하기 때문에 오류 X
//
//	ref.pirnt_This(); //ref 객체의 주소 값 
//	ref2.pirnt_This(); //ref2 객체의 주소 값 
//
//	ref.m_num = 20; //a와 ref 값 둘 다 바뀜 
//
//	cout << "a의 값: " << a.m_num << endl;
//	cout << "ref의 값 : " << ref.m_num << endl;
//	cout << "ref2의 값 : " << ref2.m_num << endl;
//
//	cout <<"a의 주소 값: "<< &a << endl;
//	cout << "ref의 주소 값: "<<&ref << endl;
//	cout << "ref2의 주소 값: " << &ref2 << endl;
//}
//		//		//		//		//		//		//		//		//
//참조로 전달, 값으로 전달

//int pass_by_value(int y)
//{
//	y = 5;
//	cout << &y << endl;
//	return y;
//}
//
//int pass_by_reference(int &y) //참조로 전달로하면 새로운 주소를 안 써도 된다
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

// 레퍼런스를 리턴하는 함수

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
//	int& c = a.access_x(); //참조하는 리턴 값을 왜 준걸까 그건 바로 나도 몰라 ~ 가 아니라 get_x에서 값을 새로운 주소 복사한다는 것을 증명하기 위해서
//	//그러면 this 값은 왜 쓰는 걸까 ~  
//	cout << &c << endl;
//	c = 4;
//	a.show_x();
//
//	int d = a.access_x();
//	d = 3;
//	a.show_x();
//
//	// 아래는 오류 -> get_x() 함수 안에 a객체의 x 값을 새로운 주소에 복사하고 넣기 때문에 참조가 되지 않는다.
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

