#include<iostream>
#include<string.h>


// ����



//#include <iostream>
//#include <array>
//#include <algorithm>
//#include <sstream>
//
////size_t �� unsigned int �̸�, ���ڿ��̳� �޸��� ����� ��Ÿ�� �� ���
//// 32��Ʈ �ü�������� "��ȣ���� 32��Ʈ ����"�̰�, 64��Ʈ �ü�������� "��ȣ���� 64��Ʈ ����
// 
//template<size_t N>
//void print(/* std::array<int, 5>arr */ const std::array<int, N>& arr) //������ const char a * �̷���� ����  //N���� �����Ͽ� ���������� ����
//{
//	for (auto ele : arr)
//		std::cout << ele << " , ";
//	
//
//	std::cout << arr.data();
//	//begin()�Լ��� ù ��° ���Ҹ� ����Ű�� �ݺ��� ��ȯ
//	//end() �Լ��� ���� ������ ���� ���� ��ġ ��ȯ
//	for (auto it = arr.begin(); it != arr.end(); it++)
//	{
//		auto element = (*it);
//		std::cout << element <<' ';
//	}
//
//	std::cout <<arr.front() <<std::endl; // -> ù ��° ���� ���
//	std::cout << arr.back() << std::endl; // -> ������ ���� ���
//	std::cout << arr.data() << std::endl; // -> �迭 �޸� ����
//}
//
//int main()
//{
//	std::array<int, 10> arr1;
//
//	arr1[0] = 1;
//	std::cout << "arr1 �迭�� ù ��° ����: " << arr1[0] << std::endl;
//
//	std::array<int, 4>arr2 = { 1,2,3,4 };
//	std::cout << "arr2�� ��� ����: " << std::endl;
//
//	for (int i = 0; i < 4; i++)
//	{
//		std::cout << arr2[i] << " ";
//		std::cout << std::endl;
//	}
//
//	std::array<int, 4>arr4 = { 1,2,3,4 };
//
//	try
//	{
//		std::cout << arr4.at(3) << std::endl;
//		std::cout << arr4.at(4) << std::endl;
//
//		//at ���� �Լ��� index�� �ʰ��� ��� std::out_of_range ���ܸ� �߻� ��Ų��.
//		//[]���� at�� �������� ���ܸ� ������ ó�� �� �� �ִ�.
//	}
//	catch (const std::out_of_range& ex)
//	{
//		std::cerr << ex.what() << std::endl; // -> invalid array<T, N> subscript
//	}
//
//	std::array<int, 5>arr = { 1,2,3,4,5 };
//	print(arr);
//}

//-----------------------------���� �����̽� ����
//#include"NameSp.h"
//
//int main(void)
//{
//
//	BestComImp1::SimpleFunc();
//	return 0;
//}
//------------------------------


//struct information
//{
//	struct information *next;
//	int id;
//	std::string name;
//	int money;
//};
//
//struct information* new_information()
//{
//	information * infor = new information;
//	infor->id = 0;
//	infor->money = 0;
//	infor->name = "";
//	infor->next = NULL;
//
//	return infor;
//}
//
//struct information* change(information* infor) //�ӽð�ü ?? �׷��� �ּҰ��� �ٸ���/??
//{
//	infor->next = new_information();
//	std::cout << "(change) infor->next ���� " << infor->next << std::endl;
//
//	infor = infor->next;
//	std::cout << "(change) infor-���� " << infor << std::endl;
//
//	//change(one) ���� one ���� change �Լ� �� infor ���� �޶� ������ �־��� ���� (void)����
//	//-> ���� �ذ� �Լ��� struct�� �ٲٰ� infor ���� �����ϴ� �ּ� ���� ���� �Ǿ���!!
//	//�ӽ� �ּҶ� �Ҹ�Ǵ°� ����
//
//	return infor;
//}
//
//void print_infor(information* infor)
//{
//	std::cout <<"ID ����: " << infor->id << std::endl;
//	std::cout <<"�̸�: " << infor->name << std::endl;
//	std::cout << "���� ��: " << infor->money << std::endl;
//	std::cout << "  " << std::endl;
//	//std::cout << "(print_info) infor" << infor <<  std::endl;
//	//std::cout << "(print_info) infor->next " << infor->next << std::endl;
//
//	//infor->next �ּҰ� NULL�̴� �� �׷�����?
//}
//
//
//
//struct information* new_accout()
//{
//	information* infor = new information;
//	std::cout << "����ID: ";
//	std::cin >> infor->id;
//	std::cout << "�̸�: ";
//	std::cin >> infor->name;
//	std::cout << "�Աݾ�: ";
//	std::cin >> infor->money; 
//
//
//
//	return infor;
//}
//
//
//
//
//void menu()
//{
//	std::cout << "-----Menu-----" << std::endl << "1. ���°���" << std::endl << "2. �� ��" << std::endl << "3. ���" << std::endl << "4. �������� ��ü ���" << std::endl << "5. ���α׷� ����" << std::endl<<"����: ";
//}
//
//
//
//int main(void)
//{
//
//	information* one;
//	information* two[100];
//
//	void* next_infor;
//
//	one = new_information();
//	
//	int num = 0;
//	int sum = 0;
//
//	bool Q =1 ;
//
//
//
//
//	while ( num != 5)
//	{
//		menu();
//		std::cin >> num;
//
//		if (num == 1) //���� �輳
//		{
//			std::cout << "before one " << one << std::endl;
//
//			one = new_accout();
//			std::cout << "before one " << one << std::endl;
//
//			two[sum] = one;
//
//			std::cout << "two   " << two[sum] << std::endl;
//			std::cout << "two id  " << two[sum]->id << std::endl;
//
//			std::cout << "one id  " << one->id << std::endl;
//
//			//����Ե� two�� one�� �ּ� ���� �Ȱ��� ������ �翬�� two->id ���� ���� �� �˾�����
//			//one->id ���� �־������� �ұ��ϰ� two->id ���� 0�� ���Դ�.
//
//			one = change(one);
//
//			std::cout << "two->next   " << two[sum]->next << std::endl;
//
//			std::cout<<"after one " << one << std::endl;
//
//			++sum;
//
//		}
//		else if (num == 2) //�Ա� 
//		{
//			std::cout << "num = 2 " << std::endl;
//			int in, id = 0; 
//
//			//int i = 0;
//			
//
//			//�� �� �� ���ΰ� ���� two[i]�� �ƴ϶� �� id�� �Է������� 0���� sum���� ����� �ؾ��ϴµ� .. while�� �ƴѰ� ������.. 
//
//			int i;
//			bool x;
//
//			while (true)
//			{
//				std::cout << "�Է� ID: ";
//				std::cin >> id;
//
//				for (i = 0; i < sum; i++)
//				{
//					if (two[i]->id == id)
//					{
//						x = true;
//						break;
//					}
//				}
//				if (x == true)
//				{
//					break;
//				}
//
//				std::cout << "�������� �ʴ� ID " << std::endl;
//
//			}
//
//			std::cout << "�Ա��� �ݾ�: ";
//			std::cin >> in;
//
//			two[i]->money += in;
//		}
//
//		else if (num == 3) //���
//		{
//			std::cout << "num = 3 " << std::endl;
//			int in, id = 0;
//
//			//int i = 0;
//
//			int i;
//			bool x;
//
//			while (true)
//			{
//				std::cout << "�Է� ID: ";
//				std::cin >> id;
//
//				for (i = 0; i < sum; i++)
//				{
//					if (two[i]->id == id)
//					{
//						x = true;
//						break;
//					}
//				}
//				if (x == true)
//				{
//					break;
//				}
//
//				std::cout << "�������� �ʴ� ID " << std::endl;
//
//			}
//
//			std::cout << "����� �ݾ�: ";
//			std::cin >> in;
//
//			two[i]->money -= in;
//
//		}
//		else if (num == 4)//���� ��ü ���� �Է�
//		{
//
//			for (int i = 0; i < sum; i++)
//			{
//				print_infor(two[i]);
//			}
//		}
//
//	}
//
//}

//=========================================================================
//
//int main()
//{
//	int num = 12;
//	int* ptr = &num;
//	int** ptr2 = &ptr;
//
//	int* (&pa) = ptr;
//	int **(&pb) = ptr2;
//
//	std::cout << *pa << std::endl;
//	std::cout << **pb << std::endl;
//
//	std::cout << *pb <<" "<<*ptr2<< std::endl;
//	std::cout << ptr << " " << &num << std::endl;
//
//	std::cout << ptr2 << " " << &ptr << std::endl;
//
//
//}

//====================================================

//int test(int &a)
//{
//	a++;
//	return a;
//}
//
////�����ʹ� �ܼ��� �ּ� ���� �����ϴ� ������
////�����ڸ� ����ϸ� main�� �ִ� ptr1�� �ּҰ��� �����ϱ� ������
////���� ���� swap �� �� �ִ� ���࿡ �����ڸ� ������� �ʴ´ٸ� �Լ� ������ �ּ� ����
////���� ������ �Լ� �� ptr1�� ������ ����Ǹ� �Ҹ�ȴ�.
//void swapPoint(int *(&ptr1),int* (&ptr2))
//{
//	int* temp;
//
//	temp = ptr1;
//	ptr1 = ptr2;
//	ptr2 = temp;
//
//}
//
//int main()
//{
//	int b = 0;
//	
//	b = test(b);
//	b = test(b);
//	b = test(b);
//	b = test(b);
//	b = test(b);
//	b = test(b);
//	std::cout << b << std::endl;
//
//	int a = 5;
//	int c = 10;
//
//	int* ptr1 = &a;
//	int* ptr2 = &b;
//
//	std::cout << ptr1 << " " << ptr2 << std::endl;
//
//	//swapPoint(ptr1, ptr2);
//
//	swapPoint(ptr1, ptr2);
//
//	std::cout << ptr1 << " " << ptr2 << std::endl;
//}

//===========================================
//New�� Delete
// 
//typedef struct __Point
//{
//	int xpos;
//	int ypos;
//}Point;
//
//Point& PntAdder(const Point& p1, const Point& p2)
//{
//	Point* z = new Point;
//	
//	z->xpos = p1.xpos + p2.xpos;
//	z->ypos = p1.ypos + p2.ypos;
//
//	std::cout << z << std::endl;
//
//	return *z;
//}
//
//int main()
//{
//	//������ �� ���� �����Ͽ� �� �Լ��� �̿��� ���������� �����ϴ� main�Լ��� ����
//	//����ü Point ���� ������ new/ �Ҵ�� �޸� ������ �Ҹ굵 ö����
//
//	Point *x = new Point;
//	x->xpos = 5;
//	x->ypos = 10;
//
//	Point* y = new Point;
//	y->xpos = 5;
//	y->ypos = 10;
//
//	Point* z = new Point;
//
//	*z = PntAdder(*x, *y); //�ּҰ��� �ٸ�
//	std::cout << "z" << z << std::endl;
//
//	Point& k = PntAdder(*x, *y);//�ּҰ��� ����
//	std::cout << "k" << &k << std::endl;
//
//	std::cout << z->xpos << " " << z->ypos << std::endl;
//
//	delete x, y, z; 
//}


//===================================

//struct Point
//{
//	int xpos;
//	int ypos;
//
//	void ShowPosition() //���� x,y ��ǥ ���� ��� 
//	{
//		std::cout <<"xpos: " <<xpos <<" ypos: " <<ypos<< std::endl;
//	}
//
//	void MovePos(int x, int y) //���� ��ǥ�̵�
//	{
//		xpos += x;
//		ypos += y;
//	}
//
//	void AddPoint(const Point& pos) //���� ��ǥ ����(��ǥ + ��ǥ)
//	{
//		xpos += pos.xpos;
//		ypos += pos.ypos;
//	}
//};
//
//
//
//
//
//
//int main()
//{
//	Point pos1 = { 12,4 };
//	Point pos2 = { 20,30 };
//
//	pos1.MovePos(-7, 10);
//	pos1.ShowPosition();
//
//	pos1.AddPoint(pos2);
//	pos1.ShowPosition();
//	return 0;
//}

//==========================================
//enum�� struct 
// 
//namespace CAR_CONST
//{
//	enum
//	{
//		ID_LEN = 20,
//		MAX_SPD = 200,
//		FUEL_STEP = 2,
//		ACC_STEP = 10,
//		BRK_STEP = 10
//	};
//}
//
//struct Car
//{
//	char gamerID[CAR_CONST::ID_LEN];
//	int fuelGauge;
//	int curSpeed;
//
//	void ShowCarState(); //���� ���� ���
//	void Accel(); // ����, �ӵ� ����
//	void Break(); //�극��ũ, �ӵ�����
//};
//
//void Car::ShowCarState()
//{
//	std::cout << "������ ID" << gamerID << std::endl;
//	std::cout << "�����" << fuelGauge << std::endl;
//	std::cout << "����ӵ�" << curSpeed << std::endl;
//}
//
//void Car::Accel()
//{
//	if (fuelGauge <= 0)
//	{
//		return;
//	}
//	else
//	{
//		fuelGauge -= CAR_CONST::FUEL_STEP;
//	}
//
//	if ((curSpeed + CAR_CONST::ACC_STEP) > CAR_CONST::MAX_SPD)
//	{
//		curSpeed = CAR_CONST::MAX_SPD;
//		return;
//	}
//
//	curSpeed += CAR_CONST::ACC_STEP;
//}
//
//void Car::Break()
//{
//	if (curSpeed <= CAR_CONST::BRK_STEP)
//	{
//		curSpeed = 0;
//		return;
//	}
//
//	curSpeed = CAR_CONST::BRK_STEP;
//}
//
//int main()
//{
//	Car run99 = { "run99", 100, 0 };
//	run99.Accel();
//	run99.ShowCarState();
//	run99.Break();
//	run99.ShowCarState();
//	return 0;
//}

//==============================================================

//class Calculator
//{
//private:
//	int m_add;
//	int m_min;
//	int m_div;
//
//	char *m_str;
//
//public:
//	void Add(double a, double b);
//	void Div(double a, double b);
//	void Min(double a, double b);
//	void ShowOpCount();
//
//	Calculator()
//	{
//		m_add = 0;
//		m_min = 0;
//		m_div = 0;
//	}
//
//	Calculator(const char *str)
//	{
//		int i = 0;
//
//		i = strlen(str);
//
//		m_str = new char[i];
//		
//		for (int j = 0; j <= i; j++)
//		{
//			m_str[j] = str[j];
//		}
//	}
//
//	void Print();
//
//	int strlen(const char* str)
//	{
//		int i = 0;
//		while (str[i] != '\0')
//		{
//			i++;
//		}
//
//		return i;
//	}
//
//};
//
//void Calculator::Add(double a, double b)
//{
//	std::cout << a + b << std::endl;
//	m_add ++;
//}
//
//void Calculator::Div(double a, double b)
//{
//	std::cout << a / b << std::endl;
//	m_div++;
//}
//
//void Calculator::Min(double a, double b)
//{
//	std::cout << a - b << std::endl;
//	m_min ++;
//}
//
//void Calculator::ShowOpCount()
//{
//	std::cout << "���� " << m_add << " ���� " << m_min << " ���� " << 0 << " ������ " << m_div << std::endl;
//}
//
//void Calculator::Print()
//{
//	std::cout << m_str << std::endl;
//}
//
//
//int main()
//{
//	Calculator cal;
//	
//
//	cal.Add(3.2, 2.4);
//	cal.Div(3.5, 1.7);
//	cal.Min(2.2, 1.5);
//	cal.Div(4.9, 1.2);
//
//	cal.ShowOpCount();
//
//
//	//std::cout << str[4];
//
//	Calculator str("hello 6u6tu6u");
//
//	str.Print();
//
//	return 0;
//}

//=================================================================

//using namespace std;
//
//// ������� Ŭ����
//class FruitSeller
//{
//private:
//    int APPLE_PRICE;
//    int numOfApples;
//    int myMoney;
//
//public:
//    void InitMembers(int price, int num, int money)
//    {
//        APPLE_PRICE = price;
//        numOfApples = num;
//        myMoney = money;
//    }
//
//    int SaleAppples(int money)
//    {
//        int num = money / APPLE_PRICE;
//        if (numOfApples == 0)
//        {
//            cout << "���� ����� �����ϴ�. " << endl;
//            return 0;
//        }
//        numOfApples -= num;
//        myMoney += money;
//        return num;
//    }
//
//    void ShowSaleResult()const
//    {
//        cout << "���� ���: " << numOfApples << endl;
//        cout << "�Ǹ� ����: " << myMoney << endl << endl;
//    }
//
//};
//
//// ���ϼҺ��� Ŭ����
//class FruitBuyer
//{
//private:
//    int myMoney;
//    int numOfApples;
//
//public:
//    void InitMembers(int money)
//    {
//        myMoney = money;
//        numOfApples = 0;
//    }
//
//    void BuyApples(FruitSeller& seller, int money)
//    {
//        numOfApples += seller.SaleAppples(money);
//        if (seller.SaleAppples(money) != 0)
//        {
//            myMoney -= money;
//        }
//        
//    }
//
//    void ShowBuyResult()const
//    {
//        cout << "���� �ܾ�: " << myMoney << endl;
//        cout << "��� ����: " << numOfApples << endl << endl;
//    }
//
//};
//
//int main()
//{
//    //����� ������ �������� 0 ���� ���� ���� ���� �� �� ����.
//    
//    // ���� �Ǹ��� ��ü ����
//    // ���� �Ǹ��� ��ü�� ��� ����: 1,000��, ���� ���: 20��, �Ǹ����� �ں�: 0��
//    FruitSeller seller;
//    seller.InitMembers(1000, 0, 0);
//
//    // ���� �Һ��� ��ü ����
//    // ���� �Һ��� ��ü�� �ʱ� �ݾ�: 5,000��
//    FruitBuyer customer;
//    customer.InitMembers(5000);
//
//    customer.BuyApples(seller, 2000);
//
//    cout << "���� �Ǹ����� ��Ȳ " << endl;
//    seller.ShowSaleResult();
//    cout << "���� �������� ��Ȳ " << endl;
//    customer.ShowBuyResult();
//
//    return 0;
//}

//=====================================================

//using namespace std;
//
////Circle ��ü���� ��ǥ�� ��ġ ����, �������� ����
//
//class Point
//{
//private:
//	int xpos;
//	int ypos;
//
//public:
//	void init(int x, int y)
//	{
//		xpos = x;
//		ypos = y;
//	}
//
//	void showPointInfo() const
//	{
//		cout << "[" << xpos << "," << ypos << "]" << endl;
//	}
//};
//
//class Circle
//{
//private:
//	int m_r;
//	Point point;
//public:
//	void coordinate(int x,int y,int r)
//	{
//		
//		point.init(x, y);
//		m_r = r;
//	}
//
//	int showRadius()
//	{
//		return m_r;
//	}
//
//	void showPointInfo()
//	{
//		point.showPointInfo();
//	}
//
//};
//
//class Ring
//{
//private:
//	Circle circle;
//	Circle circle2;
//
//public:
//	void Init(int x1, int y1, int r1, int x2, int y2, int r2)
//	{
//		circle.coordinate(x1, y1, r1);
//
//		circle2.coordinate(x2, y2, r2);
//
//	}
//
//	void showRingInfo()
//	{
//		cout << "Inner Circle Info" << endl;
//		cout << "radius :" << circle.showRadius() << endl;
//		circle.showPointInfo();
//		cout << "outter Circle Info" << endl;
//		cout << "radius :" << circle2.showRadius() << endl;
//		circle2.showPointInfo();
//	}
//};
//
//int main()
//{
//	Ring ring;
//	ring.Init(1,2,4,2,2,9);
//	ring.showRingInfo();
//}

//===============================================================

//using namespace std;
//
////Circle ��ü���� ��ǥ�� ��ġ ����, �������� ����
////������ �߰�
//
//class Point
//{
//private:
//	int xpos;
//	int ypos;
//
//public:
//	Point(int x, int y)
//		:xpos(x),ypos(y)
//	{}
//
//	void showPointInfo() const
//	{
//		cout << "[" << xpos << "," << ypos << "]" << endl;
//	}
//};
//
//class Circle
//{
//private:
//	int m_r;
//	Point point;
//public:
//	Circle(int x, int y, int r)
//		:m_r(r),point(x,y)
//	{
//		
//	}
//
//	int showRadius()
//	{
//		return m_r;
//	}
//
//	void showPointInfo()
//	{
//		point.showPointInfo();
//	}
//
//};
//
//class Ring
//{
//private:
//	Circle circle;
//	Circle circle2;
//
//public:
//
//	Ring(int x1, int y1, int r1, int x2, int y2, int r2)
//		:circle(x1, y1, r1),circle2(x2, y2, r2)
//	{}
//
//	void showRingInfo()
//	{
//		cout << "Inner Circle Info" << endl;
//		cout << "radius :" << circle.showRadius() << endl;
//		circle.showPointInfo();
//		cout << "outter Circle Info" << endl;
//		cout << "radius :" << circle2.showRadius() << endl;
//		circle2.showPointInfo();
//	}
//};
//
//int main()
//{
//	Ring ring(1, 2, 4, 2, 2, 9);
//
//	ring.showRingInfo();
//}

//======================================================

//����, ȸ���̸�, ��ȭ��ȣ, ����

//���� ������ ������ �������� ���ڿ��� ���·� ����
//���̿� �� �´� �޸� ������ �Ҵ�(���� �Ҵ�)
//���� ������ int ���� ��������� �����Ͽ� ���� �ϵ�
//enum {CLERK, SENIOR, ASSIST, MANAGER};


//namespace COMP_POS
//{
//	enum
//	{
//		CLERK = 0,
//		SENIOT = 1,
//		ASSIST = 2,
//		MANAGER = 3
//	};
//}
//
//
//class NameCard 
//{
//private:
//	char* m_name;
//	char* m_company;
//	char* m_num;
//	int m_rank;
//public:
//
//	int strlen(const char* str)
//	{
//		int i = 0;
//		while (str[i] != '\0')
//		{
//			i++;
//		}
//
//		return i;
//	}
//
//	NameCard(const char *name, const char *company, const char*num,int rank) //const �� �ٿ��� ���� ������
//		:m_rank(rank)
//	{
//		int i;
//
//		i = strlen(name);
//
//		m_name = new char[i];
//
//		for (int j = 0; j <= i; j++)
//		{
//			m_name[j] = name[j];
//		}
//
//		i = strlen(company);
//
//		m_company = new char[i];
//
//		for (int j = 0; j <= i; j++)
//		{
//			m_company[j] = company[j];
//		}
//
//		i = strlen(num);
//
//		m_num = new char[i];
//
//		for (int j = 0; j <= i; j++)
//		{
//			m_num[j] = num[j];
//		}
//		
//	}
//
//	~NameCard()
//	{
//
//	}
//
//	void ShowNameCardInfo()
//	{
//		std::cout << "�̸� : " << m_name << std::endl;
//		std::cout << "ȸ�� : " << m_company << std::endl;
//		std::cout << "��ȭ��ȣ : " << m_num << std::endl;
//
//		
//		switch (m_rank)
//		{
//		case(0):
//			std::cout << "���� : " << "���" << std::endl;
//			break;
//		case(1):
//			std::cout << "���� : " << "����" << std::endl;
//			break;
//		case(2):
//			std::cout << "���� : " << "�븮" << std::endl;
//			break;
//		case(3):
//			std::cout << "���� : " << "����" << std::endl;
//			break;
//		default:
//			std::cout << "����� ������ �����ϴ�"  << std::endl;
//			break;
//		}
//	}
//
//};
//
//int main()
//{
//	NameCard manCleark("Lee", "ABC", "010-1234-5678", COMP_POS::ASSIST);
//	manCleark.ShowNameCardInfo();
//}

//==================================================================================


//class Account
//{
//private:
//	int m_id;
//	char* m_name;
//	int m_money;
//public:
//	Account()
//		:m_id(0),m_name(NULL),m_money(0)
//	{}
//	Account(int id, const char *name, int money)
//		:m_id(id), m_money(money)
//	{
//		int i = 0;
//		while (name[i] != '\0')
//		{
//			i++;
//		}
//		
//		m_name = new char[i];
//
//		for (int j = 0; j <= i; j++)
//		{
//			m_name[j] = name[j];
//		}
//
//	}
//
//	~Account()
//	{
//		delete[] m_name;
//	}
//
//	void print()
//	{
//		std::cout << "ID ����: " << m_id << std::endl;
//		std::cout << "�̸�: " << m_name << std::endl;
//		std::cout << "���� ��: " << m_money << std::endl;
//		std::cout << "  " << std::endl;
//	}
//	
//	void deposit(int money)
//	{
//		m_money += money;
//	}
//
//	void withdraw(int money)
//	{
//		m_money -= money;
//	}
//
//	int information()
//	{
//		return m_id;
//	}
//
//};
//
////���� ������ ���� ������ main �Լ� �ڿ� �ִ� �Լ��� �ν����� �� �Ѵ�.
////���� ������ ���� �ʰ� main�Լ� �տ� ������ Account *member�� �ν����� ���ؼ� ������ ����.
////-> �׷��� ���� ������ �ϰ� ���� �ذ� 
//
//void menu();
//int create(int i);
//void depositMoney(int i);
//void withdrawMoney(int i);
//
//Account* member[100];
//
//int main(void)
//{
//	int num = 0;
//	int i = 0;
//
//
//	while (num!=5)
//	{
//
//		menu();
//		std::cin >> num;
//
//		switch (num)
//		{
//
//		case 1:
//		{
//			i = create(i);
//			break;
//		}
//		case 2:
//		{
//			depositMoney(i);
//			break;
//		}
//		case 3:
//		{
//			withdrawMoney(i);
//			break;
//		}
//		case 4:
//		{
//			std::cout << "j" << std::endl;
//			for (int j = 0; j < i; j++)
//			{
//				std::cout << j << "j" << std::endl;
//				member[j]->print();
//			}
//			break;
//		}
//		case 5:
//		{
//			std::cout << "���񽺸� ���� �մϴ�." << std::endl << std::endl;
//			break;
//		}
//		default:
//		{
//			std::cout << "�� ���� �� �Է�" << std::endl << std::endl;
//		}
//
//		}
//
//	}
//
//
//}
//
//void menu()
//{
//	std::cout << "-----Menu-----" << std::endl << "1. ���°���" << std::endl << "2. �� ��" << std::endl << "3. ���" << std::endl << "4. �������� ��ü ���" << std::endl << "5. ���α׷� ����" << std::endl << "����: ";
//}
//
//int create(int i)
//{
//	int id;
//	char name[10];
//	int money;
//
//	std::cout << "����ID: ";
//	std::cin >> id;
//	std::cout << "�̸�: ";
//	std::cin >> name;
//	std::cout << "�Աݾ�: ";
//	std::cin >> money;
//
//	member[i++] = new Account(id, name, money);
//
//	return i;
//}
//
//void depositMoney(int i)
//{
//	int id, k;
//
//	bool id_True = false;
//
//
//
//	while (!id_True)
//	{
//		std::cout << "�Ա� �Ͻ� ID�� �����ʽÿ�.";
//		std::cin >> id;
//
//		for (int j = 0; j < i; j++)
//		{
//			if (member[j]->information() == id)
//			{
//				k = j;
//				id_True = true;
//				break;
//			}
//		}
//		if (!(id_True))
//		{
//			std::cout << "���� ID �Դϴ�." << std::endl;
//		}
//	}
//
//
//	std::cout << "�Ա� �Ͻ� �ݾ��� �����ʽÿ�.";
//	int money;
//	std::cin >> money;
//	member[k]->deposit(money);
//}
//
//void withdrawMoney(int i)
//{
//	int id, k;
//
//	bool id_True = false;
//
//
//
//	while (!id_True)
//	{
//		std::cout << "��� �Ͻ� ID�� �����ʽÿ�.";
//
//		std::cin >> id;
//
//		for (int j = 0; j < i; j++)
//		{
//			if (member[j]->information() == id)
//			{
//				k = j;
//				id_True = true;
//				break;
//			}
//		}
//		if (!(id_True))
//		{
//			std::cout << "���� ID �Դϴ�." << std::endl;
//		}
//	}
//
//
//	std::cout << "��� �Ͻ� �ݾ��� �����ʽÿ�.";
//	int money;
//	std::cin >> money;
//	member[k]->withdraw(money);
//}

//==================================================

////explicit
//
//class SoSimple
//{
//private:
//	int num1;
//	int num2;
//public:
//	SoSimple(int n1, int n2)
//		:num1(n1), num2(n2)
//	{
//
//	}
//
//	explicit SoSimple(int n1)
//		:num1(n1)
//	{}
//
//	explicit SoSimple(SoSimple& copy)
//		:num1(copy.num1),num2(copy.num2)
//	{
//		std::cout << "Called SoSimple" << std::endl;
//	}
//};
//
//int main()
//{
//	SoSimple s1(1, 2);
//	SoSimple s2 (3);
//
//
//}

//================================

//����, ȸ���̸�, ��ȭ��ȣ, ����

//���� ������ ������ �������� ���ڿ��� ���·� ����
//���̿� �� �´� �޸� ������ �Ҵ�(���� �Ҵ�)
//���� ������ int ���� ��������� �����Ͽ� ���� �ϵ�
//enum {CLERK, SENIOR, ASSIST, MANAGER};

//�߰��� ��������� �����

//
//namespace COMP_POS
//{
//	enum
//	{
//		CLERK = 0,
//		SENIOT = 1,
//		ASSIST = 2,
//		MANAGER = 3
//	};
//}
//
//
//class NameCard 
//{
//private:
//	char* m_name;
//	char* m_company;
//	char* m_num;
//	int m_rank;
//public:
//
//	int strlen(const char* str)
//	{
//		int i = 0;
//		while (str[i] != '\0')
//		{
//			i++;
//		}
//
//		return i;
//	}
//
//	NameCard(const char *name, const char *company, const char*num,int rank) //const �� �ٿ��� ���� ������
//		:m_rank(rank)
//	{
//		int i;
//
//		i = strlen(name);
//
//		m_name = new char[i+1];
//
//		std::cout << i << std::endl;
//
//		for (int j = 0; j <= i; j++)
//		{
//			m_name[j] = name[j];
//		}
//
//		i = strlen(company);
//
//		m_company = new char[i + 1];
//
//		for (int j = 0; j <= i; j++)
//		{
//			m_company[j] = company[j];
//		}
//
//		i = strlen(num);
//
//		m_num = new char[i + 1];
//
//		for (int j = 0; j <= i; j++)
//		{
//			m_num[j] = num[j];
//		}
//		
//	}
//	//char* m_name;
//	//char* m_company;
//	//char* m_num;
//	//int m_rank;
//	NameCard(const NameCard &copy)
//		:m_rank(copy.m_rank)
//	{
//		int i;
//		i = strlen(copy.m_name);
//		std::cout << i << std::endl;
//
//		m_name = new char[i + 1];
//
//		for (int j = 0; j <= i; j++)
//		{
//			m_name[j] = copy.m_name[j];
//		}
//
//		i = strlen(copy.m_company);
//		m_company = new char[i + 1];
//		for (int j = 0; j <= i; j++)
//		{
//			m_company[j] = copy.m_company[j];
//		}
//
//		i = strlen(copy.m_num);
//		m_num = new char[i + 1];
//		for (int j = 0; j <= i; j++)
//		{
//			m_num[j] = copy.m_num[j];
//		}
//
//	}
//
//	~NameCard()
//	{
//		delete[] m_name; 
//		delete[] m_company;
//		delete[] m_num;
//
//	}
//
//	void ShowNameCardInfo()
//	{
//		std::cout << "�̸� : " << m_name << std::endl;
//		std::cout << "ȸ�� : " << m_company << std::endl;
//		std::cout << "��ȭ��ȣ : " << m_num << std::endl;
//
//		
//		switch (m_rank)
//		{
//		case(COMP_POS::CLERK):
//			std::cout << "���� : " << "���" << std::endl;
//			break;
//		case(COMP_POS::SENIOT):
//			std::cout << "���� : " << "����" << std::endl;
//			break;
//		case(COMP_POS::ASSIST):
//			std::cout << "���� : " << "�븮" << std::endl; 
//			break;
//		case(COMP_POS::MANAGER):
//			std::cout << "���� : " << "����" << std::endl;
//			break;
//		default:
//			std::cout << "����� ������ �����ϴ�"  << std::endl;
//			break;
//		}
//	}
//
//};
//
//int main()
//{
//	//Lee 0 1 2 ���ڿ� ������ 3���ϱ� 3+1 '\0' �߰��ؼ� ���� �Ҷ��� [4]�� �ؾߵȴ�.
//	NameCard manCleark("Lee", "ABC", "010-1234-5678", COMP_POS::ASSIST);
//	NameCard copy = manCleark;
//
//	manCleark.ShowNameCardInfo();
//	copy.ShowNameCardInfo();
//}

//===============================================================

//BankingSystem Ver 0.3
//���� ���縦 �����ϴ� ��������ڸ� ����
//
//class Account
//{
//private:
//	int m_id;
//	char* m_name;
//	int m_money;
//public:
//	Account()
//		:m_id(0),m_name(NULL),m_money(0)
//	{}
//	Account(int id, const char *name, int money)
//		:m_id(id), m_money(money)
//	{
//		int i = 0;
//		while (name[i] != '\0')
//		{
//			i++;
//		}
//		
//		m_name = new char[i];
//
//		for (int j = 0; j <= i; j++)
//		{
//			m_name[j] = name[j];
//		}
//
//	}
//
//	Account(Account& acc)
//	{
//		m_id = acc.m_id;
//		m_money = acc.m_money;
//
//		int i;
//		i = len(acc.m_name);
//
//		for (int j = 0; j <= i; j++)
//		{
//			m_name[j] = acc.m_name[j];
//		}
//		
//	}
//
//	~Account()
//	{
//		delete[] m_name;
//	}
//
//	int len(const char *str)
//	{
//		int i = 0;
//		while (str[i] != '\0') //�ֵ���ǥ �ϸ� ����
//		{
//			i++; //s 0 t 1 r 2
//		}
//		i++;
//		//"str"
//		return i;
//	}
//
//	void print()
//	{
//		std::cout << "ID ����: " << m_id << std::endl;
//		std::cout << "�̸�: " << m_name << std::endl;
//		std::cout << "���� ��: " << m_money << std::endl;
//		std::cout << "  " << std::endl;
//	}
//	
//	void deposit(int money) //�Ա�
//	{
//		m_money += money;
//	}
//
//	void withdraw(int money) //���
//	{
//		m_money -= money;
//	}
//
//	int information()
//	{
//		return m_id;
//	}
//
//};
//
////���� ������ ���� ������ main �Լ� �ڿ� �ִ� �Լ��� �ν����� �� �Ѵ�.
////���� ������ ���� �ʰ� main�Լ� �տ� ������ Account *member�� �ν����� ���ؼ� ������ ����.
////-> �׷��� ���� ������ �ϰ� ���� �ذ� 
//
//void menu();
//int create(int i);
//void depositMoney(int i);
//void withdrawMoney(int i);
//
//Account* member[100];
//
//int main(void)
//{
//	int num = 0;
//	int i = 0;
//
//
//	while (num!=5)
//	{
//
//		menu();
//		std::cin >> num;
//
//		switch (num)
//		{
//
//		case 1:
//		{
//			i = create(i);
//			break;
//		}
//		case 2:
//		{
//			depositMoney(i);
//			break;
//		}
//		case 3:
//		{
//			withdrawMoney(i);
//			break;
//		}
//		case 4:
//		{
//			std::cout << "j" << std::endl;
//			for (int j = 0; j < i; j++)
//			{
//				std::cout << j << "j" << std::endl;
//				member[j]->print();
//			}
//			break;
//		}
//		case 5:
//		{
//			std::cout << "���񽺸� ���� �մϴ�." << std::endl << std::endl;
//			break;
//		}
//		default:
//		{
//			std::cout << "�� ���� �� �Է�" << std::endl << std::endl;
//		}
//
//		}
//
//	}
//
//
//}
//
//void menu()
//{
//	std::cout << "-----Menu-----" << std::endl << "1. ���°���" << std::endl << "2. �� ��" << std::endl << "3. ���" << std::endl << "4. �������� ��ü ���" << std::endl << "5. ���α׷� ����" << std::endl << "����: ";
//}
//
//int create(int i)
//{
//	int id;
//	char name[10];
//	int money;
//
//	std::cout << "����ID: ";
//	std::cin >> id;
//	std::cout << "�̸�: ";
//	std::cin >> name;
//	std::cout << "�Աݾ�: ";
//	std::cin >> money;
//
//	member[i++] = new Account(id, name, money);
//
//	return i;
//}
//
//void depositMoney(int i)
//{
//	int id, k;
//
//	bool id_True = false;
//
//
//
//	while (!id_True)
//	{
//		std::cout << "�Ա� �Ͻ� ID�� �����ʽÿ�.";
//		std::cin >> id;
//
//		for (int j = 0; j < i; j++)
//		{
//			if (member[j]->information() == id)
//			{
//				k = j;
//				id_True = true;
//				break;
//			}
//		}
//		if (!(id_True))
//		{
//			std::cout << "���� ID �Դϴ�." << std::endl;
//		}
//	}
//
//
//	std::cout << "�Ա� �Ͻ� �ݾ��� �����ʽÿ�.";
//	int money;
//	std::cin >> money;
//	member[k]->deposit(money);
//}
//
//void withdrawMoney(int i)
//{
//	int id, k;
//
//	bool id_True = false;
//
//
//
//	while (!id_True)
//	{
//		std::cout << "��� �Ͻ� ID�� �����ʽÿ�.";
//
//		std::cin >> id;
//
//		for (int j = 0; j < i; j++)
//		{
//			if (member[j]->information() == id)
//			{
//				k = j;
//				id_True = true;
//				break;
//			}
//		}
//		if (!(id_True))
//		{
//			std::cout << "���� ID �Դϴ�." << std::endl;
//		}
//	}
//
//
//	std::cout << "��� �Ͻ� �ݾ��� �����ʽÿ�.";
//	int money;
//	std::cin >> money;
//	member[k]->withdraw(money);
//}
//
//=================================================================

//ver 0.4 
//const�� ������ ������ ��� ����Լ��� const�� ����
//class Account
//{
//private:
//	int m_id;
//	char* m_name;
//	int m_money;
//public:
//	Account()
//		:m_id(0),m_name(NULL),m_money(0)
//	{}
//	Account(int id, const char *name, int money)
//		:m_id(id), m_money(money)
//	{
//		int i = 0;
//		while (name[i] != '\0')
//		{
//			i++;
//		}
//		
//		m_name = new char[i];
//
//		for (int j = 0; j <= i; j++)
//		{
//			m_name[j] = name[j];
//		}
//
//	}
//
//	Account(Account& acc)
//	{
//		m_id = acc.m_id;
//		m_money = acc.m_money;
//
//		int i;
//		i = len(acc.m_name);
//
//		for (int j = 0; j <= i; j++)
//		{
//			m_name[j] = acc.m_name[j];
//		}
//		
//	}
//
//	~Account()
//	{
//		delete[] m_name;
//	}
//
//	int len(const char *str)const
//	{
//		int i = 0;
//		while (str[i] != '\0') //�ֵ���ǥ �ϸ� ����
//		{
//			i++; //s 0 t 1 r 2
//		}
//		i++;
//		//"str"
//		return i;
//	}
//
//	void print()const
//	{
//		std::cout << "ID ����: " << m_id << std::endl;
//		std::cout << "�̸�: " << m_name << std::endl;
//		std::cout << "���� ��: " << m_money << std::endl;
//		std::cout << "  " << std::endl;
//	}
//	
//	void deposit(int money) //�Ա�
//	{
//		m_money += money;
//	}
//
//	void withdraw(int money) //���
//	{
//		m_money -= money;
//	}
//
//	int information()const
//	{
//		return m_id;
//	}
//
//};
//
////���� ������ ���� ������ main �Լ� �ڿ� �ִ� �Լ��� �ν����� �� �Ѵ�.
////���� ������ ���� �ʰ� main�Լ� �տ� ������ Account *member�� �ν����� ���ؼ� ������ ����.
////-> �׷��� ���� ������ �ϰ� ���� �ذ� 
//
//void menu();
//int create(int i);
//void depositMoney(int i);
//void withdrawMoney(int i);
//
//Account* member[100];
//
//int main(void)
//{
//	int num = 0;
//	int i = 0;
//
//
//	while (num!=5)
//	{
//
//		menu();
//		std::cin >> num;
//
//		switch (num)
//		{
//
//		case 1:
//		{
//			i = create(i);
//			break;
//		}
//		case 2:
//		{
//			depositMoney(i);
//			break;
//		}
//		case 3:
//		{
//			withdrawMoney(i);
//			break;
//		}
//		case 4:
//		{
//			std::cout << "j" << std::endl;
//			for (int j = 0; j < i; j++)
//			{
//				std::cout << j << "j" << std::endl;
//				member[j]->print();
//			}
//			break;
//		}
//		case 5:
//		{
//			std::cout << "���񽺸� ���� �մϴ�." << std::endl << std::endl;
//			break;
//		}
//		default:
//		{
//			std::cout << "�� ���� �� �Է�" << std::endl << std::endl;
//		}
//
//		}
//
//	}
//
//
//}
//
//void menu()
//{
//	std::cout << "-----Menu-----" << std::endl << "1. ���°���" << std::endl << "2. �� ��" << std::endl << "3. ���" << std::endl << "4. �������� ��ü ���" << std::endl << "5. ���α׷� ����" << std::endl << "����: ";
//}
//
//int create(int i)
//{
//	int id;
//	char name[10];
//	int money;
//
//	std::cout << "����ID: ";
//	std::cin >> id;
//	std::cout << "�̸�: ";
//	std::cin >> name;
//	std::cout << "�Աݾ�: ";
//	std::cin >> money;
//
//	member[i++] = new Account(id, name, money);
//
//	return i;
//}
//
//void depositMoney(int i)
//{
//	int id, k;
//
//	bool id_True = false;
//
//
//
//	while (!id_True)
//	{
//		std::cout << "�Ա� �Ͻ� ID�� �����ʽÿ�.";
//		std::cin >> id;
//
//		for (int j = 0; j < i; j++)
//		{
//			if (member[j]->information() == id)
//			{
//				k = j;
//				id_True = true;
//				break;
//			}
//		}
//		if (!(id_True))
//		{
//			std::cout << "���� ID �Դϴ�." << std::endl;
//		}
//	}
//
//
//	std::cout << "�Ա� �Ͻ� �ݾ��� �����ʽÿ�.";
//	int money;
//	std::cin >> money;
//	member[k]->deposit(money);
//}
//
//void withdrawMoney(int i)
//{
//	int id, k;
//
//	bool id_True = false;
//
//
//
//	while (!id_True)
//	{
//		std::cout << "��� �Ͻ� ID�� �����ʽÿ�.";
//
//		std::cin >> id;
//
//		for (int j = 0; j < i; j++)
//		{
//			if (member[j]->information() == id)
//			{
//				k = j;
//				id_True = true;
//				break;
//			}
//		}
//		if (!(id_True))
//		{
//			std::cout << "���� ID �Դϴ�." << std::endl;
//		}
//	}
//
//
//	std::cout << "��� �Ͻ� �ݾ��� �����ʽÿ�.";
//	int money;
//	std::cin >> money;
//	member[k]->withdraw(money);
//}

//=======================================================

// p.294
//������ ������ ����
//������ main �����

//class Car
//{
//private:
//	int m_gasolineGague;
//
//public:
//
//	Car(int gasolineGague): m_gasolineGague(gasolineGague)
//	{}
//
//	Car(): m_gasolineGague(0)
//	{}
//
//	int GetGasGauge()
//	{
//		return m_gasolineGague;
//	}
//};
//
//class HybridCar : public Car
//{
//private:
//	int m_electricGauge;
//
//public:
//	HybridCar(int gasolineGague, int electricGauge) : Car(gasolineGague), m_electricGauge(electricGauge)
//	{}
//
//	HybridCar(int electricGauge) :m_electricGauge(electricGauge)
//	{}
//
//	int GetEleGauge()
//	{
//		return m_electricGauge;
//	}
//};
//
//class HybridWaterCar : public HybridCar
//{
//private:
//	int m_waterGauge;
//
//public:
//	HybridWaterCar(int gasolineGague, int electricGauge, int waterGauge) : HybridCar(gasolineGague, electricGauge), m_waterGauge(waterGauge)
//	{}
//
//	void ShowCurrentGauge()
//	{
//		std::cout << "�ܿ� ���ָ� : " << GetGasGauge() << std::endl;
//		std::cout << "�ܿ� ���ⷮ : " << GetEleGauge()<< std::endl;
//		std::cout << "�ܿ� ���ͷ� : " << m_waterGauge << std::endl;
//
//	}
//};
//
//int main(void)
//{
//	HybridWaterCar h1(1,2,3);
//
//	h1.ShowCurrentGauge();
//}

//=========================================================

//p.296
//������ �����ڿ� �Ҹ��ڸ� ����

//class MyFriendInfo
//{
//private:
//	char* m_name;
//	int m_age;
//	
//public:
//	MyFriendInfo(const char *name,int age):m_age(age)
//	{
//		int i = 0;
//		i = len(name);
//		
//		m_name = new char[i];
//
//		for (int j = 0; j < i; j++)
//		{
//			m_name[j] = name[j];
//		}
//
//	}
//
//	~MyFriendInfo()
//	{
//		delete[] m_name;
//	}
//
//	void ShowMyFriendInfo()
//	{
//		std::cout << "�̸�: " << m_name << std::endl;
//		std::cout << "����: " << m_age << std::endl;
//	}
//
//	int len(const char *str)const
//	{
//		int i = 0;
//		while (str[i] != '\0') //�ֵ���ǥ �ϸ� ����
//		{
//			i++; //s 0 t 1 r 2
//		}
//		i++;
//		//"str"
//		return i;
//	}
//
//};
//
//class MyFreindDetailInfo :public MyFriendInfo
//{
//private:
//	char* m_addr;
//	char* m_phone;
//public:
//
//	MyFreindDetailInfo(const char* addr, const char*phone,const char *name,int age):MyFriendInfo(name,age)
//	{
//		int i = 0;
//		i = len(addr);
//
//		m_addr = new char[i];
//
//		for (int j = 0; j < i; j++)
//		{
//			m_addr[j] = addr[j];
//		}
//
//		i = len(phone);
//
//		m_phone = new char[i];
//
//		for (int j = 0; j < i; j++)
//		{
//			m_phone[j] = phone[j];
//		}
//
//	}
//
//	~MyFreindDetailInfo()
//	{
//		delete[] m_addr;
//		delete[] m_phone;
//	}
//
//	void ShowMyFriendDetailInfo()
//	{
//		ShowMyFriendInfo();
//		std::cout << "�ּ�: " << m_addr << std::endl;
//		std::cout << "��ȭ: " << m_phone << std::endl;
//	}
//
//};
//
//int main()
//{
//	MyFreindDetailInfo s1("�λ�","010-1234-5678","�ڼ���",25);
//	s1.ShowMyFriendDetailInfo();
//}

//========================================================================

//���� 1 p.312
//���簢���� �ǹ��ϴ� Square Ŭ������ ���簢���� �ǹ��ϴ� Rectangle Ŭ������ �����ϰ��� ��.
//���簢���� ���簢���� �����̹Ƿ� ��Ӱ��踦 ���� 

//class Rectangle
//{
//private:
//	int m_x;
//	int m_y;
//
//public:
//
//	Rectangle(int x,int y):m_x(x),m_y(y)
//	{}
//
//	void ShowAreaInfo()
//	{
//		std::cout << "����: " << m_x * m_y << std::endl;
//	}
//
//};
//
//class Square : public Rectangle
//{
//public:
//	Square(int x):Rectangle(x,x)
//	{}
//
//};
//
//int main(void)
//{
//	Rectangle rec(4, 3);
//	rec.ShowAreaInfo();
//
//	Square sqr(7);
//	sqr.ShowAreaInfo();
//	return 0;
//
//	//���� 12
//	//���� 49
//}

//======================================================

//���� 2 p.312

//å�� �ǹ��ϴ� Book Ŭ���� ����å�� �ǹ��ϴ� Ebook Ŭ���� ���� 
//����å -> å 

//class Book
//{
//private:
//	char* m_title; //å�� ����
//	char* m_isbn; // ����ǥ�ص��� ��ȣ
//	int m_price; // å�� ����
//
//public:
//	Book(const char* title, const char* isbn, int price):m_price(price)
//	{
//		int i = 0;
//
//		i = len(title);
//
//		m_title = new char[i];
//
//		//j<=i �� �ϸ� new char[i]�� ���� ���� �ʰ��ϱ� ������
//		//���ۿ������� �߻��Ѵ�.
//
//		for (int j = 0; j < i; j++)
//		{
//			m_title[j] = title[j];
//		}
//
//		i = len(isbn);
//		m_isbn = new char[i];
//
//		for (int j = 0; j < i; j++)
//		{
//			m_isbn[j] = isbn[j];
//		}
//
//	}
//
//	int len(const char *str)const
//	{
//		int i = 0;
//		while (str[i] != '\0')
//		{
//			i++;
//		}
//		i++;
//
//		std::cout <<"i: " << i << std::endl;
//		return i;
//	}
//
//	void ShowBookInfo()
//	{
//		std::cout << "����: " << m_title << std::endl;
//		std::cout << "ISBN: " << m_isbn << std::endl;
//
//		std::cout << "����: " << m_price << std::endl;
//
//	}
//
//	~Book()
//	{
//		delete[] m_title;
//		delete[] m_isbn;
//	}
//};
//
//class Ebook :public Book
//{
//private:
//	char* m_DRMKey; //���ϰ��� Ű
//
//public:
//	Ebook(const char* title, const char* isbn, int price, const char* DRMKey) :Book(title, isbn, price)
//	{
//		int i = 0;
//		i = len(DRMKey);
//		m_DRMKey = new char[i];
//
//		for (int j = 0; j < i; j++)
//		{
//			m_DRMKey[j] = DRMKey[j];
//		}
//	}
//
//
//
//	void ShowEBookInfo()
//	{
//		ShowBookInfo();
//
//		std::cout << "����Ű: " << m_DRMKey << std::endl;
//
//	}
//
//	~Ebook()
//	{
//		if (m_DRMKey != NULL)
//		{
//			delete[] m_DRMKey;
//		}
//	}
//};
//
//int main(void)
//{
//	Book book("���� C++", "555-1235-213215-0", 20000);
//	book.ShowBookInfo();
//	std::cout << std::endl;
//
//	Ebook ebook("���� C++", "555-1235-213215-02", 20000, "wgerg8w9q");
//	ebook.ShowEBookInfo();
//	//return 0;
//
//	//const char* a = "555-1235-213215-02";
//
//	//int i = 0;
//
//	//char* b;
//
//	//
//	//while (a[i] != '\0')
//	//{
//	//	printf("a[%d]: %c \n",i, a[i]);
//	//	//std::cout << "a[i]: " << a[i] << std::endl;
//	//	i++;
//	//}
//
//	//i++;
//	//b = new char[i];
//
//	//for (int j = 0; j <= i; j++)
//	//{
//	//	b[j] = a[j];
//	//}
//
//	//std::cout << "i: " << i <<" ����: " << b << std::endl;
//
//	//delete b;
//}

//================================================



// project 5 p.314
//AccountHandlr��� �̸��� ��Ʈ�� Ŭ������ �����ϰ�, �ռ� ������ "�����Լ����� �� Ŭ������ ����Լ�"�� ���Խ�Ų��.
//Account ��ü�� ������ ���� ������ �迭�� ������ �� Ŭ������ ����� ���Խ�Ų��.
//AccountHandlr Ŭ���� ������� ���α׷��� ����ǵ��� main �Լ��� �����Ѵ�.


//class Account
//{
//private:
//    int m_id;
//    char* m_name;
//    int m_money;
//
//public:
//    Account()
//        :m_id(0), m_name(NULL), m_money(0)
//    {}
//    Account(int id, const char* name, int money)
//        :m_id(id), m_money(money)
//    {
//        int i = 0;
//
//        i = len(name);
//
//        m_name = new char[i];
//
//        for (int j = 0; j < i; j++)
//        {
//            m_name[j] = name[j];
//        }
//
//    }
//
//    Account(Account& acc)
//    {
//        m_id = acc.m_id;
//        m_money = acc.m_money;
//
//        int i;
//        i = len(acc.m_name);
//
//        for (int j = 0; j < i; j++)
//        {
//            m_name[j] = acc.m_name[j];
//        }
//
//    }
//
//    ~Account()
//    {
//        delete[] m_name;
//    }
//
//    int len(const char* str)const
//    {
//        int i = 0;
//        while (str[i] != '\0') //�ֵ���ǥ �ϸ� ����
//        {
//            std::cout << i << std::endl;
//
//            i++; //s 0 -> 1 t 1 -> 2 r 2 -> 3
//        }
//        i++;
//        //"str"
//        std::cout << i << std::endl;
//        return i;
//    }
//
//    void print()const
//    {
//        std::cout << "ID ����: " << m_id << std::endl;
//        std::cout << "�̸�: " << m_name << std::endl;
//        std::cout << "���� ��: " << m_money << std::endl;
//        std::cout << "  " << std::endl;
//    }
//
//    void deposit(int money) //�Ա�
//    {
//        m_money += money;
//    }
//
//    void withdraw(int money) //���
//    {
//        m_money -= money;
//    }
//
//    int information()const
//    {
//        return m_id;
//    }
//
//};
//
//class AccountHandlr :public Account
//{
//private:
//
//    Account* member[100];
//
//public:
//    static int memNum;
//
//    AccountHandlr() :Account()
//    {
//
//    }
//
//    void menu()const
//    {
//        std::cout << "-----Menu-----" << std::endl << "1. ���°���" << std::endl << "2. �� ��" << std::endl << "3. ���" << std::endl << "4. �������� ��ü ���" << std::endl << "5. ���α׷� ����" << std::endl << "����: ";
//    }
//
//    void create()
//    {
//        int id;
//        char name[10];
//        int money;
//
//        std::cout << "����ID: ";
//        std::cin >> id;
//        std::cout << "�̸�: ";
//        std::cin >> name;
//        std::cout << "�Աݾ�: ";
//        std::cin >> money;
//
//        member[memNum++] = new Account(id, name, money);
//
//    }
//
//    void depositMoney()const //�Ա�
//    {
//        int id, k;
//
//        bool id_True = false;
//
//
//
//        while (!id_True)
//        {
//            std::cout << "�Ա� �Ͻ� ID�� �����ʽÿ�.";
//            std::cin >> id;
//
//            for (int j = 0; j < memNum; j++)
//            {
//                if (member[j]->information() == id)
//                {
//                    k = j;
//                    id_True = true;
//                    break;
//                }
//            }
//            if (!(id_True))
//            {
//                std::cout << "���� ID �Դϴ�." << std::endl;
//            }
//        }
//
//
//        std::cout << "�Ա� �Ͻ� �ݾ��� �����ʽÿ�.";
//        int money;
//        
//        std::cin >> money;
//        member[k]->deposit(money);
//    }
//
//    void withdrawMoney()const //���
//    {
//        int id, k;
//
//        bool id_True = false;
//
//
//
//        while (!id_True)
//        {
//            std::cout << "��� �Ͻ� ID�� �����ʽÿ�.";
//
//            std::cin >> id;
//
//            for (int j = 0; j < memNum; j++)
//            {
//                if (member[j]->information() == id)
//                {
//                    k = j;
//                    id_True = true;
//                    break;
//                }
//            }
//            if (!(id_True))
//            {
//                std::cout << "���� ID �Դϴ�." << std::endl;
//            }
//        }
//
//
//        std::cout << "��� �Ͻ� �ݾ��� �����ʽÿ�.";
//        int money;
//        std::cin >> money;
//        member[k]->withdraw(money);
//    }
//
//    void print(int n)const
//    {
//        member[n]->print();
//    }
//
//    ~AccountHandlr()
//    {
//        //�̷��� �ϴ� ���� ��ü ���� �ϳ��� ������ �迭 Account��
//        //������ �����Ҵ��� 100�� ��� ���� �ʾұ� ������
//        //�����Ҵ��� �迭�� ������ ����� ������ �߻����� �ʴ´�. (*����)
//        for (int i = 0; i < memNum; i++)
//        {
//            delete[] member[i];
//        }
//    }
//};
//
//int AccountHandlr::memNum = 0;
//
//
//int main(void)
//{
//    int num = 0;
//    int i = 0;
//
//    AccountHandlr bank;
//
//
//    while (num != 5)
//    {
//
//        bank.menu();
//        std::cin >> num;
//
//        switch (num)
//        {
//
//        case 1:
//        {
//            bank.create();
//            break;
//        }
//        case 2:
//        {
//            bank.depositMoney();
//            break;
//        }
//        case 3:
//        {
//            bank.withdrawMoney();
//            break;
//        }
//        case 4:
//        {
//            for (int j = 0; j < AccountHandlr::memNum; j++)
//            {
//                bank.print(j);
//            }
//
//            break;
//        }
//        case 5:
//        {
//            std::cout << "���񽺸� ���� �մϴ�." << std::endl << std::endl;
//            break;
//        }
//
//        default:
//        {
//            std::cout << "�� ���� �� �Է�" << std::endl << std::endl;
//        }
//
//        }
//
//    }
//
//}

//========================================================================

//�����Լ� �׽�Ʈ �غ���

//class Base
//{
//public:
//	void BaseFunc() { std::cout << "Base Function" << std::endl; }
//	virtual void DerivedFunc() { std::cout << "Base Derived Function" << std::endl; }
//};
//
//class Derived : public Base
//{
//public:
//	 void DerivedFunc() { std::cout << "Derived Function " << std::endl; }
//	 void Test() { std::cout << "Test" << std::endl; }
//};
//
//int main()
//{
//	Base* bptr = new Derived();
//	bptr->DerivedFunc();
//	bptr->Test(); //virtual Test ����
//}

//=====================================================================

//p.354
//���� EmployeeManager4.cpp�� Ȯ���Ͽ� ForeignSalesWorkerŬ������ �߰��� ����
//������ ���� �� �Ϻδ� �����갣���� ���尳ô�� �����ϰ� �ִ�. �Ϻδ� �Ƹ���, �Ϻδ�
//�׷��� ������ �ִ� �������� ����Ȱ���� ���� �߿� �ִ�. ���� �̷��� ������ �������
//������ ��������� �����ϰ��� �Ѵ�.

//��������� ���޹���� '������ ���⵵'�� ���� ������ �ѹ� ������ ������ '���� ���⵵'��
//������� �ʴ� �ٰ� �����Ѵ� (const��� ������ ������ �����ϴ� ���̴�.)
//����ũ A : ������ �⺻�޿��� �μ� Ƽ�� �հ� �Ѿ��� 30%�� �߰��� �����Ѵ�
//����ũ B : ������ �⺻�޿��� �μ� Ƽ�� �հ� �Ѿ��� 20%�� �߰��� �����Ѵ�
//����ũ C : ������ �⺻�޿��� �μ� Ƽ�� �հ� �Ѿ��� 10%�� �߰��� �����Ѵ�

//main �Լ��� �Բ� �۵��ϵ��� �Ѵ�. ForeignSalesWorker Ŭ������ ����
//Employee Ŭ������ ��ü ������ �Ұ����� �߻� Ŭ������ ����


//using namespace std;
//
//namespace RISK_LEVEL
//{
//	enum Risk
//	{
//		RISK_A = 30,
//		RISK_B = 20,
//		RISK_C = 10
//	};
//}
//
//class Employee //����� 
//{
//private:
//	char name[100];
//public:
//	Employee(const char* names)
//	{
//		int i = 0;
//		while (names[i] != '\0')
//		{
//			name[i] = names[i];
//
//			i++;
//		}
//		name[i] = names[i];
//
//		
//	}
//
//	virtual void ShowYourName() const 
//	{
//		cout << "name: " << name << endl;
//	}
//
//	virtual int GetPay() const = 0;
//
//	virtual void ShowSalaryInfo() const = 0;
//};
//
//class PermanentWorker : public Employee //������
//{
//private:
//	int salary;
//public:
//	PermanentWorker(const char* name, int money)
//		: Employee(name), salary(money)
//	{  }
//	int GetPay() const
//	{
//		return salary;
//	}
//	void ShowSalaryInfo() const
//	{
//		ShowYourName();
//		cout << "salary: " << GetPay()  << endl;
//	}
//};
//
//class TemporaryWorker : public Employee //�ӽ��� 
//{
//private:
//	int workTime;
//	int payPerHour;
//public:
//	TemporaryWorker(const char* name, int pay)
//		: Employee(name), workTime(0), payPerHour(pay)
//	{  }
//	void AddWorkTime(int time)
//	{
//		workTime += time;
//	}
//	int GetPay() const
//	{
//		return workTime * payPerHour;
//	}
//	void ShowSalaryInfo() const
//	{
//		ShowYourName();
//		cout << "salary: " << GetPay() <<endl;
//	}
//};
//
//class SalesWorker : public PermanentWorker //������
//{
//private:
//	int salesResult;    // �� �ǸŽ���
//	double bonusRatio;    // �󿩱� ���� 
//public:
//	SalesWorker(const char* name, int money, double ratio)
//		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
//	{  }
//	void AddSalesResult(int value)
//	{
//		salesResult += value;
//	}
//	int GetPay() const
//	{
//		return PermanentWorker::GetPay()
//			+ (int)(salesResult * bonusRatio);
//	}
//	void ShowSalaryInfo() const
//	{
//		ShowYourName();
//		cout << "salary: " << SalesWorker::GetPay()<< endl;
//		//SalesWorker:: ���ϴϱ� ForeignSalesWorker GetPay()�� ȣ�� ���� 
//	}
//};
//
//
//
//class ForeignSalesWorker : public SalesWorker
//{
//private:
//	int risk;
//public:
//
//	ForeignSalesWorker(const char* name, int money, double ratio, int risk)
//		:SalesWorker(name, money, ratio),risk(risk)
//	{
//		
//	}
//
//	void ShowSalaryInfo() const
//	{
//		SalesWorker::ShowSalaryInfo();
//		std::cout << "risk pay: " << (SalesWorker::GetPay() / 100 * this->risk) << std::endl;
//		std::cout << "sum: " << GetPay() << std::endl << std::endl;
//	}
//
//	int GetPay() const
//	{
//		
//		return (SalesWorker::GetPay() / 100 * this->risk) + SalesWorker::GetPay();
//	}
//};
//
//class EmployeeHandler
//{
//private:
//	Employee* empList[50];
//	int empNum;
//public:
//	EmployeeHandler() : empNum(0)
//	{ }
//	void AddEmployee(Employee* emp)
//	{
//		empList[empNum++] = emp;
//	}
//	void ShowAllSalaryInfo() const
//	{
//
//		for (int i = 0; i < empNum; i++)
//			empList[i]->ShowSalaryInfo();
//
//	}
//	void ShowTotalSalary() const
//	{
//		int sum = 0;
//
//		for (int i = 0; i < empNum; i++)
//			sum += empList[i]->GetPay();
//
//		cout << "salary sum: " << sum << endl;
//	}
//	~EmployeeHandler()
//	{
//		for (int i = 0; i < empNum; i++)
//			delete empList[i];
//	}
//};
//
//int main(void)
//{
//	EmployeeHandler handler;
//
//	ForeignSalesWorker* fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
//	fseller1->AddSalesResult(7000);
//	handler.AddEmployee(fseller1);
//
//	ForeignSalesWorker* fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
//	fseller2->AddSalesResult(7000);
//	handler.AddEmployee(fseller2);
//
//	ForeignSalesWorker* fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
//	fseller3->AddSalesResult(7000);
//	handler.AddEmployee(fseller3);
//
//	handler.ShowAllSalaryInfo();
//	return 0;
//}
//
//====================================================
//OOP 6�ܰ�

//�� Ŭ���� �߰� 
//NormalAccout ���� ���� ���� -> �ּ����� ���ڸ� �����ϴ� ���� ����ݽ� ����
//HighCreditAccount �ſ� �ŷ� ���� -> �ſ뵵�� ���� �����Ը� ������ ����ϴ� ���� ������ ����



//class Account
//{
//private:
//    int m_id;
//    char* m_name;
//    int m_money;
//
//public:
//    Account()
//        :m_id(0), m_name(NULL), m_money(0)
//    {}
//    Account(int id, const char* name, int money)
//        :m_id(id), m_money(money)
//    {
//        int i = 0;
//
//        i = len(name);
//
//        m_name = new char[i];
//
//        for (int j = 0; j < i; j++)
//        {
//            m_name[j] = name[j];
//        }
//
//    }
//
//    Account(Account& acc)
//    {
//        m_id = acc.m_id;
//        m_money = acc.m_money;
//
//        int i;
//        i = len(acc.m_name);
//
//        for (int j = 0; j < i; j++)
//        {
//            m_name[j] = acc.m_name[j];
//        }
//
//    }
//
//    virtual ~Account()
//    {
//        delete[] m_name;
//    }
//
//    int len(const char* str)const
//    {
//        int i = 0;
//        while (str[i] != '\0') //�ֵ���ǥ �ϸ� ����
//        {
//            //std::cout << i << std::endl;
//
//            i++; //s 0 -> 1 t 1 -> 2 r 2 -> 3
//        }
//        i++;
//        //"str"
//        //std::cout << i << std::endl;
//        return i;
//    }
//
//    virtual void print()const
//    {
//        std::cout << "ID ����: " << m_id << std::endl;
//        std::cout << "�̸�: " << m_name << std::endl;
//        std::cout << "���� ��: " << m_money << std::endl;
//    }
//
//    virtual void deposit(int money) //�Ա�
//    {
//        m_money += money;
//    }
//
//    void withdraw(int money) //���
//    {
//        if (m_money-money > 0)
//        {
//            m_money -= money;
//
//        }
//        else
//        {
//            std::cout << "�ܾ��� �����մϴ�. " << std::endl;
//        }
//    }
//
//    int information()const
//    {
//        return m_id;
//    }
//
//};
//
////���뿹�ݰ��¿��� ���� ������ ���
////�ſ�ŷڰ��´� ������¿� ���������� ��ü ������������ �⺻������ ���
////���� �ſ����� A,B,C�� ������ ���°��� �� �� ������ ���
////A 7% B 4% C 2%
//
////���°��� �������� �ʱ� �ԱݵǴ� �ݾ׿� ���ؼ��� ���ڸ� ��� X
////���°��� �� ������ �Աݰ����� ��ĥ ������ ���ڰ� �߻��ϴ� ������ �����Ѵ�.
////������ ���������� �߻��ϴ� �Ҽ��� ������ �ݾ��� �����Ѵ�.
//
//class NormalAccout:public Account//���뿹�ݰ���
//{
//private:
//    int m_interest; //����
//
//public:
//    NormalAccout(int interest,int id, const char* name,int money):Account(id,name,money), m_interest(interest)
//    {}
//
//    void print()const
//    {
//        Account::print();
//
//        std::cout << "����: " << m_interest << std::endl;
//    }
//
//    int interest()const
//    {
//        return m_interest;
//    }
//
//    void deposit(int money) //�Ա�
//    {
//        Account::deposit(money/100*m_interest+ money);
//    }
//
//
//};
//
//namespace CREDIT
//{
//    enum rating
//    {
//        RATING_A = 7,
//        RATING_B = 4,
//        RATING_C = 2
//    };
//}
//class HighCreditAccount:public NormalAccout //�ſ�ŷڰ���
//{
//private:
//    int m_rating; //��� 7 4 2
//
//public:
//    HighCreditAccount(int rating,int interest, int id, const char* name, int money) :NormalAccout(interest+rating, id, name, money), m_rating(rating)
//    {}
//
//    void print()const
//    {
//        NormalAccout::print();
//        switch (m_rating)
//        {
//        case CREDIT::RATING_A:
//            std::cout << "�� ��� : A" << std::endl;
//            break;
//        case CREDIT::RATING_B:
//            std::cout << "�� ��� : B" << std::endl;
//            break;
//        case CREDIT::RATING_C:
//            std::cout << "�� ��� : C" << std::endl;
//            break;
//        }
//        std::cout << "�߰� ����: " << m_rating << std::endl;
//    }
//
//    //void deposit(int money) //�Ա�
//    //{
//    //    NormalAccout::deposit(money);
//    //}
//};
//
//
//class AccountHandlr
//{
//private:
//
//    Account* member[100];
//
//public:
//    static int memNum;
//
//    void menu()const
//    {
//        std::cout << "-----Menu-----" << std::endl << "1. ���°���" << std::endl << "2. �� ��" << std::endl << "3. ���" << std::endl << "4. �������� ��ü ���" << std::endl << "5. ���α׷� ����" << std::endl << "����: ";
//    }
//
//    void create() //���� ����
//    {
//        int id;
//        char name[10];
//        int money;
//        int option =0;
//        int normal;
//        int high ;
//
//        while (option < 1 || option>2)
//        {
//            std::cout << "[������������]" << std::endl;
//            std::cout << "1. ���뿹�ݰ��� 2. �ſ�ŷڰ��� " << std::endl;
//            std::cin >> option;
//
//            if (option < 1 || option>2)
//            {
//                std::cout << "�� ���� �Է� �Դϴ�." << std::endl;
//                break;
//            }
//
//        }
//
//            if (option == 1 || option ==2)
//            {
//                std::cout << "����ID: ";
//                std::cin >> id;
//                std::cout << "�̸�: ";
//                std::cin >> name;
//                std::cout << "�Աݾ�: ";
//                std::cin >> money;
//                std::cout << "������: ";
//                std::cin >> normal;
//
//                if (option == 1)
//                {
//                    member[memNum++] = new NormalAccout(normal, id, name, money);
//                }
//                
//            }
//
//            if (option == 2)
//            {
//                
//                std::cout << "�ſ���(1toA, 2toB, 3toC): ";
//                std::cin >> high;
//
//                do
//                {
//                    if ((high <= 0 || high > 3))
//                    {
//                        std::cout << "�� ���� �Է��Դϴ�. " << std::endl;
//                    }
//                } while ((high <= 0 || high > 3));
//
//                switch (high)
//                {
//                case 1:
//                    high = CREDIT::RATING_A;
//                    break;
//                case 2:
//                    high = CREDIT::RATING_B;
//                    break;
//                case 3:
//                    high = CREDIT::RATING_C;
//                    break;
//                }
//                member[memNum++] = new HighCreditAccount(high, normal, id, name, money);
//            }
//        
//
//
//    }
//
//    void depositMoney()const //�Ա�
//    {
//        int id, k;
//
//        bool id_True = false;
//
//
//
//        while (!id_True)
//        {
//            std::cout << "�Ա� �Ͻ� ID�� �����ʽÿ�.";
//            std::cin >> id;
//
//            for (int j = 0; j < memNum; j++)
//            {
//                if (member[j]->information() == id)
//                {
//                    k = j;
//                    id_True = true;
//                    break;
//                }
//            }
//            if (!(id_True))
//            {
//                std::cout << "���� ID �Դϴ�." << std::endl;
//            }
//        }
//
//
//        std::cout << "�Ա� �Ͻ� �ݾ��� �����ʽÿ�.";
//        int money;
//        
//        std::cin >> money;
//        member[k]->deposit(money);
//    }
//
//    void withdrawMoney()const //���
//    {
//        int id, k;
//
//        bool id_True = false;
//
//
//
//        while (!id_True)
//        {
//            std::cout << "��� �Ͻ� ID�� �����ʽÿ�.";
//
//            std::cin >> id;
//
//            for (int j = 0; j < memNum; j++)
//            {
//                if (member[j]->information() == id)
//                {
//                    k = j;
//                    id_True = true;
//                    break;
//                }
//            }
//            if (!(id_True))
//            {
//                std::cout << "���� ID �Դϴ�." << std::endl;
//            }
//        }
//
//
//        std::cout << "��� �Ͻ� �ݾ��� �����ʽÿ�.";
//        int money;
//        std::cin >> money;
//        member[k]->withdraw(money);
//    }
//
//    void print(int n)const
//    {
//        member[n]->print();
//    }
//
//    ~AccountHandlr()
//    {
//        //�̷��� �ϴ� ���� ��ü ���� �ϳ��� ������ �迭 Account��
//        //������ �����Ҵ��� 100�� ��� ���� �ʾұ� ������
//        //�����Ҵ��� �迭�� ������ ����� ������ �߻����� �ʴ´�. (*����)
//        for (int i = 0; i < memNum; i++)
//        {
//            delete[] member[i];
//        }
//    }
//};
//
//int AccountHandlr::memNum = 0;
//
//int main(void)
//{
//    int num = 0;
//    int i = 0;
//
//    AccountHandlr manager;
//
//
//    while (num != 5)
//    {
//
//        manager.menu();
//        std::cin >> num;
//
//        switch (num)
//        {
//
//        case 1:
//        {
//            manager.create();
//            break;
//        }
//        case 2:
//        {
//            manager.depositMoney();
//            break;
//        }
//        case 3:
//        {
//            manager.withdrawMoney();
//            break;
//        }
//        case 4:
//        {
//            for (int j = 0; j < AccountHandlr::memNum; j++)
//            {
//                manager.print(j);
//                std::cout << "  " << std::endl;
//
//            }
//
//            break;
//        }
//        case 5:
//        {
//            std::cout << "���񽺸� ���� �մϴ�." << std::endl << std::endl;
//            break;
//        }
//
//        default:
//        {
//            std::cout << "�� ���� �� �Է�" << std::endl << std::endl;
//        }
//
//        }
//
//    }
//
//}

//==============================================================================

//���� 10 -1 p.409
//
//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{}
//
//
//
//	void ShowPosition() const
//	{
//		std::cout << "[" << xpos << "," << ypos << "]" << std::endl;
//	}
//
//	Point operator+=(const Point& pos)
//	{
//		xpos += pos.xpos;
//		ypos + pos.ypos;
//		return *this;
//	}
//
//	Point operator-=(const Point& pos)
//	{
//		xpos -= pos.xpos;
//		ypos -= pos.ypos;
//		return *this;
//	}
//
//
//	friend Point operator- (const Point& pos1, const Point& pos2);
//	friend bool operator== (const Point& pos1, const Point& pos2);
//	friend bool operator!= (const Point& pos1, const Point& pos2);
//
//};
//
//Point operator- (const Point& pos1, const Point& pos2)
//{
//	Point X(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
//	return X;
//}
//
//bool operator== (const Point& pos1, const Point& pos2)
//{
//	if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
//	{
//		return true;
//	}
//	else //else�� ������ ������ ��ȯ��
//	{
//		return false;
//	}
//}
//
//bool operator!= (const Point& pos1, const Point& pos2)
//{
//	if (pos1.xpos != pos2.xpos && pos1.ypos != pos2.ypos)
//	{
//		Point pos(true);
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//
//int main()
//{
//	Point A(1, 2);
//	Point B(3, 3);
//
//	Point C = A - B;//��� A.operator-(const Point &B),���� operator-(const Point &A, const Point &B)
//
//	C.ShowPosition();
//
//	A += B; //A.operator+=(const Point *pos)
//
//	A.ShowPosition();
//	B.ShowPosition();
//
//	if (A == B)
//	{
//		std::cout << "���� ����." << std::endl;
//	}
//
//	if (A != B)
//	{
//		std::cout << "���� �ٸ���." << std::endl;
//	}
//
//}

//======================================================

//p.418 10-2

//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{
//	}
//
//	void ShowPostion() const
//	{
//		std::cout << "[" << xpos << "," << ypos << "]" << std::endl;
//	}
//
//	Point operator-() //X.operator-()
//	{
//		Point pos;
//		pos.xpos = -xpos;
//		pos.ypos = -ypos;
//		return pos;
//	}
//
//	Point operator~()
//	{
//		Point pos;
//		pos.xpos = ypos;
//		pos.ypos = xpos;
//		return pos;
//	}
//};
//
//int main()
//{
//	Point X(1, 2);
//
//	Point Y = -X;
//
//	Y.ShowPostion();
//	X = ~Y;
//	X.ShowPostion();
//}

//================================

//p.436
// 
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y=0):xpos(x),ypos(y)
//	{}
//	void ShowPositon()const
//	{
//		std::cout << '[' << xpos << "," << ypos << ']' << std::endl;
//	}
//
//	friend std::ostream& operator<<(std::ostream &os, Point &pos);
//	friend std::istream& operator>>(std::istream&is, Point &pos);
//};
//
//std::ostream& operator <<(std::ostream& os, Point& pos)
//{
//	os <<"[" << pos.xpos <<"," << pos.ypos <<"]" << std::endl;
//	return os;
//}
//
//std::istream& operator >>(std::istream& is, Point& pos)
//{
//	is >> pos.xpos >>pos.ypos;
//
//	return is;
//}
//
//int main()
//{
//	Point pos1;
//	std::cout << "x, y ��ǥ ������ �Է�: ";
//	std::cin >> pos1;
//	std::cout << pos1;
//
//	Point pos2;
//	std::cout << "x, y ��ǥ ������ �Է�: ";
//	std::cin >> pos2;
//	std::cout << pos2;
//}

//===================================

//class Person
//{
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* myname, int myage):age(myage)
//	{
//		int i = 0;
//		while (myname[i] != '\0')
//		{
//			std::cout << myname[i] << std::endl;
//
//			//a 0 1 b 1  2 c 2 3 
//			i++;
//		}
//		i++;
//		
//	name = new char[i];
//
//	for (int j = 0; j < i; j++)
//	{
//		name[j] = myname[j];
//	}
//
//	}
//
//	void ShowPersonInfo() const
//	{
//		std::cout << "����: " << age << std::endl;
//		std::cout << "�̸�: " << name << std::endl;
//	}
//
//	~Person()
//	{
//		delete[] name;
//	}
//
//	Person& operator=(Person& man)
//	{
//		std::cout << "Person& operator" << std::endl;
//		int i = 0;
//		while (man.name[i] != '\0')
//		{
//			//a 0 1 b 1  2 c 2 3 \n 3 4
//			i++;
//		}
//		i++;
//		delete[] name;
//		name = new char[i];
//		for (int j = 0; j < i; j++)
//		{
//			name[j] = man.name[j];
//		}
//
//		age = man.age;
//		return *this;
//	}
//};
//
//int main()
//{
//	Person man1("Lee", 29);
//	Person man2("Park", 22);
//	man2 = man1;
//
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//
//	return 0;
//}

//=======================================
////p.452 11-1
//#include <iostream>
//#include <cstring>
//using namespace std;
////���� ������ ���� ������ ����
//class Gun
//{
//private:
//	int bullet;    	// ������ �Ѿ��� ��
//public:
//	Gun(int bnum) : bullet(bnum)
//	{ }
//
//	Gun operator=(Gun gun)
//	{
//		std::cout << "Gun = " << std::endl;
//		bullet = gun.bullet;
//	}
//
//	int returnBullet()
//	{
//		return bullet;
//	}
//
//	void Shut()
//	{
//		cout << "BBANG!" << endl;
//		bullet--;
//	}
//
//	void information()
//	{
//		if (bullet == 0)
//		{
//			std::cout << "���� �Ѿ� ����: 0" << std::endl;
//		}
//		else
//		{
//			std::cout << "���� �Ѿ� ����: " << bullet << std::endl;
//		}
//	}
//};
//
//class Police
//{
//private:
//	int handcuffs;    // ������ ������ ��
//	Gun* pistol;     // �����ϰ� �ִ� ����
//public:
//	Police(int bnum=0, int bcuff=0)
//		: handcuffs(bcuff)
//	{
//		if (bnum > 0)
//			pistol = new Gun(bnum);
//		else
//			pistol = NULL;
//	}
//
//	Police(const Police& pol)
//	{
//		handcuffs = pol.handcuffs;
//		if (pol.pistol != NULL)
//		{
//			pistol = new Gun(pol.pistol->returnBullet());
//		}
//		else
//		{
//			pistol = NULL;
//		}
//	}
//
//	Police& operator=(Police& pol)
//	{
//		handcuffs = pol.handcuffs;
//		if (pol.pistol != NULL)
//		{
//			pistol = new Gun(pol.pistol->returnBullet());
//		}
//		else
//		{
//			pistol = NULL;
//		}
//		return *this;
//	}
//
//	void PutHandcuff()
//	{
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//	void Shut()
//	{
//		if (pistol == NULL)
//			cout << "Hut BBANG!" << endl;
//		else
//			pistol->Shut();
//	}
//
//	void information()
//	{
//		if (pistol != NULL)
//		{
//			pistol->information();
//		}
//		cout << "���� ���� �� : " << handcuffs << endl;
//	}
//
//	~Police()
//	{
//		if (pistol != NULL)
//			delete pistol;
//	}
//};
//
//int main(void)
//{
//	Police pman1(5, 3);
//	pman1.Shut();
//	pman1.PutHandcuff();
//
//	Police pman2(0, 3);     // ���Ѽ������� ���� ����
//	pman2.Shut();
//	pman2.PutHandcuff();
//	pman2.information();
//
//	Police pman3 = pman1;
//	pman3.information();
//
//	Police pman4(pman3);
//	pman4.information();
//	return 0;
//}

//----------
//����, ���� ������ ����

//class Book
//{
//private:
//	char* m_title; //å�� ����
//	char* m_isbn; // ����ǥ�ص��� ��ȣ
//	int m_price; // å�� ����
//
//public:
//	Book(const char* title, const char* isbn, int price):m_price(price)
//	{
//		int i = 0;
//
//		i = len(title);
//
//		m_title = new char[i];
//
//		//j<=i �� �ϸ� new char[i]�� ���� ���� �ʰ��ϱ� ������
//		//���ۿ������� �߻��Ѵ�.
//
//		for (int j = 0; j < i; j++)
//		{
//			m_title[j] = title[j];
//		}
//
//		i = len(isbn);
//		m_isbn = new char[i];
//
//		for (int j = 0; j < i; j++)
//		{
//			m_isbn[j] = isbn[j];
//		}
//
//	}
//
//	Book()
//	{
//		m_title =NULL; //å�� ����
//		m_isbn=NULL; // ����ǥ�ص��� ��ȣ
//		m_price = 0; // å�� ����
//	}
//
//	Book& operator=(const Book& book)
//	{
//		m_price = book.m_price;
//		int i = 0;
//
//		i = len(book.m_title);
//
//		m_title = new char[i];
//
//		//j<=i �� �ϸ� new char[i]�� ���� ���� �ʰ��ϱ� ������
//		//���ۿ������� �߻��Ѵ�.
//
//		for (int j = 0; j < i; j++)
//		{
//			m_title[j] = book.m_title[j];
//		}
//
//		i = len(book.m_isbn);
//		m_isbn = new char[i];
//
//		for (int j = 0; j < i; j++)
//		{
//			m_isbn[j] = book.m_isbn[j];
//		}
//
//		return *this;
//	}
//
//	Book(const Book& book):m_price(book.m_price)
//	{
//		int i = 0;
//
//		i = len(book.m_title);
//
//		m_title = new char[i];
//
//		//j<=i �� �ϸ� new char[i]�� ���� ���� �ʰ��ϱ� ������
//		//���ۿ������� �߻��Ѵ�.
//
//		for (int j = 0; j < i; j++)
//		{
//			m_title[j] = book.m_title[j];
//		}
//
//		i = len(book.m_isbn);
//		m_isbn = new char[i];
//
//		for (int j = 0; j < i; j++)
//		{
//			m_isbn[j] = book.m_isbn[j];
//		}
//
//	}
//
//
//	int len(const char *str)const
//	{
//		int i = 0;
//		while (str[i] != '\0')
//		{
//			i++;
//		}
//		i++;
//
//		std::cout <<"i: " << i << std::endl;
//		return i;
//	}
//
//	void ShowBookInfo()
//	{
//		std::cout << "����: " << m_title << std::endl;
//		std::cout << "ISBN: " << m_isbn << std::endl;
//
//		std::cout << "����: " << m_price << std::endl;
//
//	}
//
//	~Book()
//	{
//		delete[] m_title;
//		delete[] m_isbn;
//	}
//};
//
//class Ebook :public Book
//{
//private:
//	char* m_DRMKey; //���ϰ��� Ű
//
//public:
//
//	Ebook(const char* title, const char* isbn, int price, const char* DRMKey) :Book(title, isbn, price)
//	{
//		int i = 0;
//		i = len(DRMKey);
//		m_DRMKey = new char[i];
//
//		for (int j = 0; j < i; j++)
//		{
//			m_DRMKey[j] = DRMKey[j];
//		}
//	}
//
//	Ebook(const Ebook& ebook)
//	{
//		std::cout << "Ebook ���� ������ " << std::endl;
//		Book::operator=(ebook);
//		int i = 0;
//		i = len(ebook.m_DRMKey);
//		m_DRMKey = new char[i];
//
//		for (int j = 0; j < i; j++)
//		{
//			m_DRMKey[j] = ebook.m_DRMKey[j];
//
//		}
//	}
//
//	Ebook& operator =(const Ebook& ebook)
//	{
//		Book::operator=(ebook);
//		int i = 0;
//		i = len(ebook.m_DRMKey);
//		m_DRMKey = new char[i];
//
//		for (int j = 0; j < i; j++)
//		{
//			m_DRMKey[j] = ebook.m_DRMKey[j];
//
//		}
//
//		return *this;
//	}
//
//
//	void ShowEBookInfo()
//	{
//		ShowBookInfo();
//
//		std::cout << "����Ű: " << m_DRMKey << std::endl;
//
//	}
//
//	~Ebook()
//	{
//		if (m_DRMKey != NULL)
//		{
//			delete[] m_DRMKey;
//		}
//	}
//};
//
//int main(void)
//{
//	Book book("���� C++", "555-1235-213215-0", 20000);
//	book.ShowBookInfo();
//	std::cout << std::endl;
//
//	Book book2("�ڹ�", "123-421512-3213", 10000);
//	book2.ShowBookInfo();
//	book2 = book;
//	book2.ShowBookInfo();
//
//	Book book3(book);
//	book3.ShowBookInfo();
//
//	std::cout << "------------------" << std::endl;
//
//	Ebook ebook("���� C++", "555-1235-213215-02", 20000, "wgerg8w9q");
//	ebook.ShowEBookInfo();
//	//return 0;
//
//	Ebook ebook2 = ebook;
//	ebook2.ShowEBookInfo();
//
//	Ebook ebook3(" C++", "555-1235-02", 20000, "wgerg8w9q");
//	ebook3 = ebook2; // opertor = �� ������ ���� 
//	
//
//
//
//}
//=======================================================
//���� 11-2
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {  }
//	friend ostream& operator<<(ostream& os, const Point& pos);
//	friend ostream& operator<<(ostream& os, const Point* pos);
//
//};
//
//ostream& operator<<(ostream& os, const Point& pos)
//{
//	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
//	return os;
//}
//
//ostream& operator<<(ostream& os,const Point* pos)
//{
//	os << '[' << pos->xpos << ", " << pos->ypos << ']' << endl;
//	return os;
//}
//
//typedef Point* POINT_PTR;
//
//class BoundCheckPointPtrArray
//{
//private:
//	Point** arr;
//	int arrlen;
//
//	BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr) { } //������
//	BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray& arr) { }
//
//public:
//	BoundCheckPointPtrArray(int len) :arrlen(len)
//	{
//		arr = new Point * [len];
//	}
//
//	Point*& operator[] (int idx)
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//
//		return arr[idx];
//	}
//
//
//	Point*& operator[] (int idx) const
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//
//		return arr[idx];
//	}
//
//
//	int GetArrLen() const
//	{
//		return arrlen;
//	}
//	~BoundCheckPointPtrArray()
//	{
//		delete[]arr;
//	}
//
//};
//
//
//
//int main(void)
//{
//	BoundCheckPointPtrArray arr(3);
//
//	arr[0] = new Point(3, 4);
//	arr[1] = new Point(5, 6);
//	arr[2] = new Point(7, 8);
//
//	for (int i = 0; i < arr.GetArrLen(); i++)
//		cout << arr[i];
//
//	//for (int i = 0; i < arr.GetArrLen(); i++)
//	//	cout << *(arr[i]);
//
//	delete arr[0];
//	delete arr[1];
//	delete arr[2];
//
//
//	//int b = 5;
//	//int *a = &b;
//	//int** pnum;
//	//pnum = new int* [3];
//	//pnum[1] = new int[2];
//	//pnum[0] = a;
//	//cout << *pnum[0] << endl;
//
//	return 0;
//}

//------------------------------------------
//2���� �迭���ٿ� ���� ������ �����ε��� ����

//�� ������ ���� ������ ��
// BoundCheck2DIntArray arr2d(n,m)
//arr2d[n][m] = n + m;�� ������
//operator ������ arr2d.operator[](int n) arr2d ��ü ����->
//arr2d.operator[](int m) arr2d��ü ����->
// arr2d.operator=(int n+m) arr2d��ü ���� -> �� ����
//#include <cstdlib>
//
//class Length
//{
//private:
//	int width, height;
//
//public:
//	Length(int width, int height):width(width),height(height)
//	{}
//
//};
//
//class BoundCheck2DIntArray
//{
//	int** leng;
//	int width,height; //����� ���ÿ� ���� ��
//	int width_current, height_current; //for���� ������ ���� ���� ���� ����
//	bool dimention; //true�� 1���� false�� 2����
//
//	BoundCheck2DIntArray& operator=(const BoundCheck2DIntArray& arr);
//	BoundCheck2DIntArray(BoundCheck2DIntArray& arr);
//
//public:
//	BoundCheck2DIntArray(int width,int height) :width(width), height(height),dimention(true),width_current(0),height_current(0)
//	{
//		leng = new int*[width]; //[3][2]
//		for (int i = 0; i < width; i++)
//		{
//			leng[i] = new int[height];
//		}
//	}
//	BoundCheck2DIntArray& operator=(const int len)
//	{
//		//std::cout << "=" << std::endl;
//
//		leng[width_current][height_current] = len;
//
//		return *this;
//	}
//
//	BoundCheck2DIntArray& operator[](const int i)
//	{
//		//std::cout << "[]" << std::endl;
//		if (i<0 || i>= width &&dimention==true)
//		{
//			std::cout << "�迭�� ������ �ʰ��߽��ϴ�. " << std::endl;
//			exit(1);
//		}
//		else if(i < 0 || i >= height && dimention == false)
//		{
//			std::cout << "�迭�� ������ �ʰ��߽��ϴ�. " << std::endl;
//			exit(1);
//		}
//		
//		if (dimention == true)
//		{
//			dimention = false;
//			width_current = i;
//			return *this;
//		}
//		else
//		{
//			dimention = true;
//			height_current = i;
//			return *this;
//		}
//	}
//
//	~BoundCheck2DIntArray()
//	{
//		delete[]leng; //���� �Ҹ��� Ȯ���ϱ�
//	}
//
//	friend std::ostream& operator<<(std::ostream& os, BoundCheck2DIntArray& arr);
//};
//std::ostream& operator<<(std::ostream& os, BoundCheck2DIntArray& arr)
//{
//	//std::cout << arr.height_current;
//	os << arr.leng[arr.width_current][arr.height_current];
//	return os;
//}
//
//
//int main(void)
//{
//
//	BoundCheck2DIntArray arr2d(3,4);
//	//���ο� ������ ���̰� 3,4�� INT�� 2���� �迭ó�� �����ϴ� arr2d��ü�� �����Ǿ�
//	//������ ���·� �����͸� ���� �� ������ �� �� �־���Ѵ�.
//
//	for (int n = 0; n < 3; n++)
//	{
//		for (int m = 0; m < 4; m++)
//		{
//			arr2d[n][m] = n + m;
//			std::cout << n << std::endl;
// 		}
//	}
//
//	for (int n = 0; n < 3; n++)
//	{
//		for (int m = 0; m < 4; m++)
//		{
//			std::cout <<"arr2d ["<<n<<"]["<<m<<"]:  " << arr2d[n][m] << ' ';
//			std::cout << std::endl;
//		}
//	}
//
//	//����� �� ���� []�����ڸ� ���ÿ� �����ε��ϴ� ���� ������ X,���� ���� ������
//	//arr2d[n][m]
//	//�ι��� []������ ȣ���� �����ϰԲ� �����ؾ��Ѵ�. �� ù ��°[] ���꿡 ���ؼ� ���� ������
//	//������ ���� �ؼ��Ǿ����.
//	// (arr2d.operator[](n))[m];
//
//	//�׸��� arr2d.operator[](n) ������ ��ȯ ���� �̿��ؼ� �� ��° [] ������ ������ ���� �ؼ��ؾ��Ѵ�.
//	//((��ȯ ��).operotor[])(m);
//
//}

//=======================================
//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{
//		cout << "Point ��ü ����" << endl;
//	}
//	~Point()
//	{
//		cout << "Point ��ü �Ҹ�" << endl;
//	}
//	void SetPos(int x, int y)
//	{
//		xpos = x;
//		ypos = y;
//	}
//	friend ostream& operator<<(ostream& os, const Point& pos);
//};
//ostream& operator<<(ostream& os, const Point& pos)
//{
//	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
//	return os;
//}
//
//class SmartPtr
//{
//private:
//	Point* posptr;
//public:
//	SmartPtr(Point* ptr) : posptr(ptr)
//	{  }
//
//	Point& operator*() const
//	{
//		return *posptr;
//	}
//	Point* operator->() const
//	{
//		return posptr;
//	}
//	~SmartPtr()
//	{
//		delete posptr;
//	}
//};
//
//int main(void)
//{
//	SmartPtr sptr1(new Point(1, 2)); //new Point(1, 2)�� �ּ� �Ҵ� 
//	SmartPtr sptr2(new Point(2, 3));
//	SmartPtr sptr3(new Point(4, 5));
//	cout << *sptr1;
//	cout << *sptr2;
//	cout << *sptr3;
//
//	sptr1->SetPos(10, 20);
//	sptr2->SetPos(30, 40);
//	sptr3->SetPos(50, 60);
//	cout << *sptr1;
//	cout << *sptr2;
//	cout << *sptr3;
//	return 0;
//}
//=======================================================


//using namespace std;
//#include <cstdlib>
////�� ������ ���� ������ ��
//// BoundCheck2DIntArray arr2d(n,m)
////arr2d[n][m] = n + m;�� ������
////operator ������ arr2d.operator[](int n) arr2d ��ü ����->
////arr2d.operator[](int m) arr2d��ü ����->
//// arr2d.operator=(int n+m) arr2d��ü ���� -> �� ����
//
////�� ���� [] �����ڸ� ���ÿ� �����ε� �ϴ� ���� ��� X
//// arr2d[n][m] �� ���� []������ ȣ���� �����ϰԲ� �����ؾ��Ѵ�.
////ù ��°[]���꿡 ���ؼ� ���� ������ ������ ���� �ؼ�
////(arr2d.operator[](n))[m];
////�׸��� arr2d.operator[](n) ������ ��ȯ ���� �̿��ؼ� �� ��° [] ������ ������ ���� �ؼ�
//// ((��ȯ ��).operator[])(m);
//
//
//
//class BoundCheck2DIntArray
//{
//private:
//	int** arr; //Ŭ���� �� ��������� �����ͷ� ����
//	int arrlenX; //�迭 ���� ����
//	int arrlenY;
//	int m_x; //���ϰ� ��ǥ ����
//	int m_y;
//	bool dimention;
//
//	BoundCheck2DIntArray& operator =(const BoundCheck2DIntArray& arr2);
//	BoundCheck2DIntArray(const BoundCheck2DIntArray& arr2);
//public:
//	BoundCheck2DIntArray(int x, int y) :arrlenX(x), arrlenY(y), dimention(true) // 3 4
//	{
//		arr = new int* [x]; // 0 1 2
//		for (int i = 0; i < x; i++)
//		{
//			arr[i] = new int[y];// 0 1 2 3
//		}
//		
//	}
//
//	BoundCheck2DIntArray& operator[](const int idx)
//	{
//
//		if (dimention)
//		{
//			//cout << idx << endl;
//			if (idx < 0 || idx >= arrlenX) //�迭 ���� ����
//			{
//				cout << "Array index out of bound exception" << endl;
//				exit(1);
//			}
//			else
//			{
//				dimention = false;
//				m_x = idx;
//
//				return *this;
//			}
//		}
//		else
//		{
//			//cout << idx <<"Y" << endl;
//			if (idx < 0 || idx >= arrlenY)
//			{
//				cout << "Array index out of bound exception" << endl;
//				exit(1);
//			}
//			else
//			{
//				dimention = true;
//				m_y = idx;
//				return *this;
//			}
//		}
//
//		//		arr2d[n][m] = n + m; //(arr2d.operator[](n))[m];   (��ȯ ��).operator[](m);
//	}
//
//	BoundCheck2DIntArray & operator=(const int num)
//	{
//		arr[m_x][m_y] = num;
//		return *this;
//	}
//
//	~BoundCheck2DIntArray()
//	{
//		// �� int �����Ͱ� ����Ű�� �޸� ����
//		for (int i = 0; i < arrlenX; i++) { //arrlenX = 3 
//			delete[] arr[i];
//		}
//
//		// ������ �迭�� ���� �޸� ����
//		delete arr;
//	}
//
//	friend std::ostream& operator<<(std::ostream& os, BoundCheck2DIntArray& arr2);
//};
//
//std::ostream& operator<<(std::ostream& os, BoundCheck2DIntArray& arr2)
//{
//	os << arr2.arr[arr2.m_x][arr2.m_y];
//	return os;
//}
//
//
//
//int main()
//{
//	cout << "---------------------------" << endl;
//	BoundCheck2DIntArray arr2d(3, 4);
//
//	for (int n = 0; n < 3; n++)
//	{
//		for (int m = 0; m < 4; m++)
//		{
//			arr2d[n][m] = n + m;
//		}
//	}
//
//	for (int n = 0; n < 3; n++)
//	{
//		for (int m = 0; m < 4; m++)
//		{
//			cout << arr2d[n][m] << ' '; //cout << *this
//		}
//		cout << endl;
//	}
//
//}

//===================================================

//#include<iostream>
//
//class String
//{
//private:
//	char* m_str;
//	int m_len;
//public:
//	String()
//	{
//		m_len = 0;
//		//m_str = NULL;
//		m_str = new char[100]; //���ڰ� �ۼ�
//	}
//
//	String(const char* xstr)
//	{
//		m_len = makeLen(xstr);
//		m_str = new char[m_len];
//		for (int i = 0; i < m_len; i++)
//		{
//			m_str[i] = xstr[i];
//		}
//		
//	}
//
//	~String()
//	{
//		delete[] m_str;
//	}
//
//	String& operator=(const String& xstr)
//	{
//		std::cout << "operator = " << std::endl;
//
//		if (m_str != nullptr)
//		{
//			deleteIndex();
//		}
//
//		m_len = xstr.m_len;
//		m_str = new char[m_len];
//		for (int i = 0; i < m_len; i++)
//		{
//			m_str[i] = xstr.m_str[i];
//		}
//		return *this;
//	}
//
//	bool operator==(const String& xstr)
//	{
//		int j = 0;
//		if (xstr.m_len == m_len)
//		{
//			for (int i = 0; i < m_len; i++)
//			{
//				if (m_str[i] == xstr.m_str[i])
//				{
//					j++;
//				}
//			}
//			if (j == m_len)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	String operator+(const String &xstr)
//	{
//		std::cout << "operator + " << std::endl;
//		
//		int tempLen = m_len+ xstr.m_len -1;
//
//		char* tempStr = new char[tempLen];
//
//		std::cout << tempLen << std::endl;// -> 27
//		std::cout << m_len << std::endl; // -> 16
//
//		for (int i = 0; i < m_len-1; i++)
//		{
//			tempStr[i] = m_str[i];
//		}
//		
//		for (int i = 0; i < xstr.m_len; i++)// 0 1 2 3
//		{
//			tempStr[m_len - 1 + i] = xstr.m_str[i];
//		}
//
//		String xstr2(tempStr);
//
//		delete[] tempStr;
//		tempStr = nullptr;
//
//		return xstr2;
//
//		//String str3 = str1 + str2; ���� str1�� ���� �Ǵ� ������ �߻�
//		//m_len += xstr.m_len;
//		//m_str = new char[m_len - 1];
//
//		//for (int i = 0; i < tempLen - 1; i++)
//		//{
//		//	m_str[i] = tempStr[i];
//		//}
//
//		//for (int i = 0; i < m_len; i++)// 0 1 2 3
//		//{
//		//	m_str[tempLen-1 + i] = xstr.m_str[i];
//		//}
//
//
//	}
//
//	String& operator +=(const String& xstr)
//	{
//		std::cout << "operator += " << std::endl;
//
//		int tempLen = m_len;
//		char* tempStr = new char[tempLen];
//		for (int i = 0; i < m_len; i++)
//		{
//			tempStr[i] = m_str[i];
//		}
//
//		deleteIndex();
//
//		m_len += xstr.m_len;
//		m_str = new char[m_len - 1];
//
//		for (int i = 0; i < tempLen - 1; i++)
//		{
//			m_str[i] = tempStr[i];
//		}
//
//		for (int i = 0; i < m_len; i++)// 0 1 2 3
//		{
//			m_str[tempLen - 1 + i] = xstr.m_str[i];
//		}
//		//std::cout << m_len << std::endl; -> 40 ?? str1�� �״�� �����
//
//		delete[] tempStr;
//		tempStr = nullptr;
//
//		return *this;
//	}
//
//	void deleteIndex()
//	{
//		delete[] m_str;
//		m_str = nullptr;
//	}
//
//	int makeLen(const char * xstr)
//	{
//		int i = 0;
//		
//		while (xstr[i] != '\0')
//		{
//			i++;
//		} // s -> 1 t->2 r->3
//		i++; //-> 4
//		return i;
//	}
//
//
//	friend std::ostream& operator<<(std::ostream &os,const String &str );
//	friend void operator>>(std::istream& is, const String& str); //���ڰ� �ۼ�
//	//friend std::istream& operator >> (std::istream& is, String& str);
//};
//
//void operator>>(std::istream& is, const String& xstr)
//{
//
//	is >> xstr.m_str;
//}
//
////std::istream& operator >> (std::istream& is, String& str) //å ����
////{
////	char s[100];
////	is >> s;
////	str = String(s); // str.operator=(String(s))
////	return is;
////}
//
//std::ostream& operator<<(std::ostream& os, const String& xstr)
//{
//	os << xstr.m_str;
//	return os;
//}
//
//int main()
//{
//	//String str1("I Like");
//	String str1 = " I Like Orange ";
//	String str2 = "";
//	String str3 = str1 + str2;
//	str2 += str1;
//
//	str2 = str3;
//	
//	std::cout << str3 << std::endl;
//	std::cout << str2 << std::endl;
//
//	if (str2 == str3)
//	{
//		std::cout << "���� ���ڿ�" << std::endl;
//	}
//	else
//	{
//		std::cout << "�ٸ� ���ڿ�" << std::endl;
//	}
//
//	String str4;
//	
//	std::cout << "���� �Է� : ";
//	std::cin >> str4;
//
//	std::cout << "���� �Է� : ";
//	std::cin >> str1;
//
//	if (str4 == str1)
//	{
//		std::cout << "���� ���ڿ�" << std::endl;
//	}
//	else
//	{
//		std::cout << "�ٸ� ���ڿ�" << std::endl;
//	}
//}

