#include<iostream>
#include<string.h>


// 개념



//#include <iostream>
//#include <array>
//#include <algorithm>
//#include <sstream>
//
////size_t 는 unsigned int 이며, 문자열이나 메모리의 사이즈를 나타낼 때 사용
//// 32비트 운영체제에서는 "부호없는 32비트 정수"이고, 64비트 운영체제에서는 "부호없는 64비트 정수
// 
//template<size_t N>
//void print(/* std::array<int, 5>arr */ const std::array<int, N>& arr) //원래는 const char a * 이랬어야 했음  //N개로 설정하여 범용적으로 설정
//{
//	for (auto ele : arr)
//		std::cout << ele << " , ";
//	
//
//	std::cout << arr.data();
//	//begin()함수는 첫 번째 원소를 가리키는 반복자 반환
//	//end() 함수는 가장 마지막 원소 다음 위치 반환
//	for (auto it = arr.begin(); it != arr.end(); it++)
//	{
//		auto element = (*it);
//		std::cout << element <<' ';
//	}
//
//	std::cout <<arr.front() <<std::endl; // -> 첫 번째 원소 출력
//	std::cout << arr.back() << std::endl; // -> 마지막 원소 출력
//	std::cout << arr.data() << std::endl; // -> 배열 메모리 버퍼
//}
//
//int main()
//{
//	std::array<int, 10> arr1;
//
//	arr1[0] = 1;
//	std::cout << "arr1 배열의 첫 번째 원소: " << arr1[0] << std::endl;
//
//	std::array<int, 4>arr2 = { 1,2,3,4 };
//	std::cout << "arr2의 모든 원소: " << std::endl;
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
//		//at 형식 함수는 index가 초과할 경우 std::out_of_range 예외를 발생 시킨다.
//		//[]보다 at이 느리지만 예외를 적절히 처리 할 수 있다.
//	}
//	catch (const std::out_of_range& ex)
//	{
//		std::cerr << ex.what() << std::endl; // -> invalid array<T, N> subscript
//	}
//
//	std::array<int, 5>arr = { 1,2,3,4,5 };
//	print(arr);
//}

//-----------------------------네임 스페이스 예시
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
//struct information* change(information* infor) //임시객체 ?? 그래서 주소값이 다른가/??
//{
//	infor->next = new_information();
//	std::cout << "(change) infor->next 정보 " << infor->next << std::endl;
//
//	infor = infor->next;
//	std::cout << "(change) infor-정보 " << infor << std::endl;
//
//	//change(one) 에서 one 값과 change 함수 내 infor 값이 달라서 오류가 있었다 원래 (void)였음
//	//-> 문제 해결 함수를 struct로 바꾸고 infor 값을 리턴하니 주소 값이 같게 되었다!!
//	//임시 주소라 소멸되는거 같다
//
//	return infor;
//}
//
//void print_infor(information* infor)
//{
//	std::cout <<"ID 정보: " << infor->id << std::endl;
//	std::cout <<"이름: " << infor->name << std::endl;
//	std::cout << "남은 돈: " << infor->money << std::endl;
//	std::cout << "  " << std::endl;
//	//std::cout << "(print_info) infor" << infor <<  std::endl;
//	//std::cout << "(print_info) infor->next " << infor->next << std::endl;
//
//	//infor->next 주소가 NULL이다 왜 그런거지?
//}
//
//
//
//struct information* new_accout()
//{
//	information* infor = new information;
//	std::cout << "계좌ID: ";
//	std::cin >> infor->id;
//	std::cout << "이름: ";
//	std::cin >> infor->name;
//	std::cout << "입금액: ";
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
//	std::cout << "-----Menu-----" << std::endl << "1. 계좌개설" << std::endl << "2. 입 금" << std::endl << "3. 출금" << std::endl << "4. 계좌정보 전체 출력" << std::endl << "5. 프로그램 종료" << std::endl<<"선택: ";
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
//		if (num == 1) //계좌 계설
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
//			//놀랍게도 two와 one이 주소 값이 똑같기 때문에 당연히 two->id 값이 같을 줄 알았으나
//			//one->id 값을 넣었음에도 불구하고 two->id 값은 0이 나왔다.
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
//		else if (num == 2) //입금 
//		{
//			std::cout << "num = 2 " << std::endl;
//			int in, id = 0; 
//
//			//int i = 0;
//			
//
//			//잘 못 된 식인거 같다 two[i]가 아니라 음 id를 입력했을때 0부터 sum까지 계산을 해야하는데 .. while이 아닌거 같은데.. 
//
//			int i;
//			bool x;
//
//			while (true)
//			{
//				std::cout << "입력 ID: ";
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
//				std::cout << "존재하지 않는 ID " << std::endl;
//
//			}
//
//			std::cout << "입금할 금액: ";
//			std::cin >> in;
//
//			two[i]->money += in;
//		}
//
//		else if (num == 3) //출금
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
//				std::cout << "입력 ID: ";
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
//				std::cout << "존재하지 않는 ID " << std::endl;
//
//			}
//
//			std::cout << "출금할 금액: ";
//			std::cin >> in;
//
//			two[i]->money -= in;
//
//		}
//		else if (num == 4)//계좌 전체 정보 입력
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
////포인터는 단순히 주소 값만 저장하는 변수다
////참조자를 사용하면 main에 있는 ptr1의 주소값을 참조하기 때문에
////서로 값을 swap 할 수 있다 만약에 참조자를 사용하지 않는다면 함수 내에서 주소 값은
////변경 되지만 함수 내 ptr1은 실행이 종료되면 소멸된다.
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
//New와 Delete
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
//	//임의의 두 점을 선언하여 위 함수를 이용한 덧셈연산을 진행하는 main함수를 정의
//	//구조체 Point 관련 변수는 new/ 할당된 메모리 공간의 소멸도 철저히
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
//	*z = PntAdder(*x, *y); //주소값이 다름
//	std::cout << "z" << z << std::endl;
//
//	Point& k = PntAdder(*x, *y);//주소값이 같음
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
//	void ShowPosition() //현재 x,y 좌표 정보 출력 
//	{
//		std::cout <<"xpos: " <<xpos <<" ypos: " <<ypos<< std::endl;
//	}
//
//	void MovePos(int x, int y) //점의 좌표이동
//	{
//		xpos += x;
//		ypos += y;
//	}
//
//	void AddPoint(const Point& pos) //점의 좌표 증가(좌표 + 좌표)
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
//enum과 struct 
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
//	void ShowCarState(); //상태 정보 출력
//	void Accel(); // 엑셀, 속도 증가
//	void Break(); //브레이크, 속도감소
//};
//
//void Car::ShowCarState()
//{
//	std::cout << "소유자 ID" << gamerID << std::endl;
//	std::cout << "연료랑" << fuelGauge << std::endl;
//	std::cout << "현재속도" << curSpeed << std::endl;
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
//	std::cout << "덧셈 " << m_add << " 뺄셈 " << m_min << " 곱셈 " << 0 << " 나눗셈 " << m_div << std::endl;
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
//// 과일장수 클래스
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
//            cout << "남은 사과가 없습니다. " << endl;
//            return 0;
//        }
//        numOfApples -= num;
//        myMoney += money;
//        return num;
//    }
//
//    void ShowSaleResult()const
//    {
//        cout << "남은 사과: " << numOfApples << endl;
//        cout << "판매 수익: " << myMoney << endl << endl;
//    }
//
//};
//
//// 과일소비자 클래스
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
//        cout << "현재 잔액: " << myMoney << endl;
//        cout << "사과 개수: " << numOfApples << endl << endl;
//    }
//
//};
//
//int main()
//{
//    //사과의 구매의 목적으로 0 보다 작은 수를 전달 할 수 없다.
//    
//    // 과일 판매자 객체 생성
//    // 과인 판매자 객체의 사과 가격: 1,000원, 소유 사과: 20개, 판매자의 자본: 0원
//    FruitSeller seller;
//    seller.InitMembers(1000, 0, 0);
//
//    // 과일 소비자 객체 생성
//    // 과일 소비자 객체의 초기 금액: 5,000원
//    FruitBuyer customer;
//    customer.InitMembers(5000);
//
//    customer.BuyApples(seller, 2000);
//
//    cout << "과일 판매자의 현황 " << endl;
//    seller.ShowSaleResult();
//    cout << "과일 구매자의 현황 " << endl;
//    customer.ShowBuyResult();
//
//    return 0;
//}

//=====================================================

//using namespace std;
//
////Circle 객체에는 좌표성 위치 정보, 반지름의 길이
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
////Circle 객체에는 좌표성 위치 정보, 반지름의 길이
////생성자 추가
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

//성명, 회사이름, 전화번호, 직급

//직급 정보를 제외한 나머지는 문자열의 형태로 저장
//길이에 딱 맞는 메모리 공간을 할당(동적 할당)
//직급 정보는 int 형의 멤버변수를 선언하여 저장 하되
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
//	NameCard(const char *name, const char *company, const char*num,int rank) //const 안 붙여서 오류 났었음
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
//		std::cout << "이름 : " << m_name << std::endl;
//		std::cout << "회사 : " << m_company << std::endl;
//		std::cout << "전화번호 : " << m_num << std::endl;
//
//		
//		switch (m_rank)
//		{
//		case(0):
//			std::cout << "직급 : " << "사원" << std::endl;
//			break;
//		case(1):
//			std::cout << "직급 : " << "주임" << std::endl;
//			break;
//		case(2):
//			std::cout << "직급 : " << "대리" << std::endl;
//			break;
//		case(3):
//			std::cout << "직급 : " << "과장" << std::endl;
//			break;
//		default:
//			std::cout << "저장된 직급이 없습니다"  << std::endl;
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
//		std::cout << "ID 정보: " << m_id << std::endl;
//		std::cout << "이름: " << m_name << std::endl;
//		std::cout << "남은 돈: " << m_money << std::endl;
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
////전방 선언을 하지 않으면 main 함수 뒤에 있는 함수를 인식하지 못 한다.
////전방 선언을 하지 않고 main함수 앞에 적으면 Account *member을 인식하지 못해서 오류가 났다.
////-> 그래서 전방 선언을 하고 오류 해결 
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
//			std::cout << "서비스를 종료 합니다." << std::endl << std::endl;
//			break;
//		}
//		default:
//		{
//			std::cout << "잘 못된 수 입력" << std::endl << std::endl;
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
//	std::cout << "-----Menu-----" << std::endl << "1. 계좌개설" << std::endl << "2. 입 금" << std::endl << "3. 출금" << std::endl << "4. 계좌정보 전체 출력" << std::endl << "5. 프로그램 종료" << std::endl << "선택: ";
//}
//
//int create(int i)
//{
//	int id;
//	char name[10];
//	int money;
//
//	std::cout << "계좌ID: ";
//	std::cin >> id;
//	std::cout << "이름: ";
//	std::cin >> name;
//	std::cout << "입금액: ";
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
//		std::cout << "입금 하실 ID를 적으십시오.";
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
//			std::cout << "없는 ID 입니다." << std::endl;
//		}
//	}
//
//
//	std::cout << "입금 하실 금액을 적으십시오.";
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
//		std::cout << "출금 하실 ID를 적으십시오.";
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
//			std::cout << "없는 ID 입니다." << std::endl;
//		}
//	}
//
//
//	std::cout << "출금 하실 금액을 적으십시오.";
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

//성명, 회사이름, 전화번호, 직급

//직급 정보를 제외한 나머지는 문자열의 형태로 저장
//길이에 딱 맞는 메모리 공간을 할당(동적 할당)
//직급 정보는 int 형의 멤버변수를 선언하여 저장 하되
//enum {CLERK, SENIOR, ASSIST, MANAGER};

//추가로 복사생성자 만들기

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
//	NameCard(const char *name, const char *company, const char*num,int rank) //const 안 붙여서 오류 났었음
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
//		std::cout << "이름 : " << m_name << std::endl;
//		std::cout << "회사 : " << m_company << std::endl;
//		std::cout << "전화번호 : " << m_num << std::endl;
//
//		
//		switch (m_rank)
//		{
//		case(COMP_POS::CLERK):
//			std::cout << "직급 : " << "사원" << std::endl;
//			break;
//		case(COMP_POS::SENIOT):
//			std::cout << "직급 : " << "주임" << std::endl;
//			break;
//		case(COMP_POS::ASSIST):
//			std::cout << "직급 : " << "대리" << std::endl; 
//			break;
//		case(COMP_POS::MANAGER):
//			std::cout << "직급 : " << "과장" << std::endl;
//			break;
//		default:
//			std::cout << "저장된 직급이 없습니다"  << std::endl;
//			break;
//		}
//	}
//
//};
//
//int main()
//{
//	//Lee 0 1 2 문자열 개수가 3개니깐 3+1 '\0' 추가해서 선언 할때는 [4]로 해야된다.
//	NameCard manCleark("Lee", "ABC", "010-1234-5678", COMP_POS::ASSIST);
//	NameCard copy = manCleark;
//
//	manCleark.ShowNameCardInfo();
//	copy.ShowNameCardInfo();
//}

//===============================================================

//BankingSystem Ver 0.3
//깊은 복사를 진행하는 복사생성자를 정의
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
//		while (str[i] != '\0') //쌍따옴표 하면 오류
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
//		std::cout << "ID 정보: " << m_id << std::endl;
//		std::cout << "이름: " << m_name << std::endl;
//		std::cout << "남은 돈: " << m_money << std::endl;
//		std::cout << "  " << std::endl;
//	}
//	
//	void deposit(int money) //입금
//	{
//		m_money += money;
//	}
//
//	void withdraw(int money) //출금
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
////전방 선언을 하지 않으면 main 함수 뒤에 있는 함수를 인식하지 못 한다.
////전방 선언을 하지 않고 main함수 앞에 적으면 Account *member을 인식하지 못해서 오류가 났다.
////-> 그래서 전방 선언을 하고 오류 해결 
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
//			std::cout << "서비스를 종료 합니다." << std::endl << std::endl;
//			break;
//		}
//		default:
//		{
//			std::cout << "잘 못된 수 입력" << std::endl << std::endl;
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
//	std::cout << "-----Menu-----" << std::endl << "1. 계좌개설" << std::endl << "2. 입 금" << std::endl << "3. 출금" << std::endl << "4. 계좌정보 전체 출력" << std::endl << "5. 프로그램 종료" << std::endl << "선택: ";
//}
//
//int create(int i)
//{
//	int id;
//	char name[10];
//	int money;
//
//	std::cout << "계좌ID: ";
//	std::cin >> id;
//	std::cout << "이름: ";
//	std::cin >> name;
//	std::cout << "입금액: ";
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
//		std::cout << "입금 하실 ID를 적으십시오.";
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
//			std::cout << "없는 ID 입니다." << std::endl;
//		}
//	}
//
//
//	std::cout << "입금 하실 금액을 적으십시오.";
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
//		std::cout << "출금 하실 ID를 적으십시오.";
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
//			std::cout << "없는 ID 입니다." << std::endl;
//		}
//	}
//
//
//	std::cout << "출금 하실 금액을 적으십시오.";
//	int money;
//	std::cin >> money;
//	member[k]->withdraw(money);
//}
//
//=================================================================

//ver 0.4 
//const로 선언이 가능한 모든 멤버함수를 const로 선언
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
//		while (str[i] != '\0') //쌍따옴표 하면 오류
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
//		std::cout << "ID 정보: " << m_id << std::endl;
//		std::cout << "이름: " << m_name << std::endl;
//		std::cout << "남은 돈: " << m_money << std::endl;
//		std::cout << "  " << std::endl;
//	}
//	
//	void deposit(int money) //입금
//	{
//		m_money += money;
//	}
//
//	void withdraw(int money) //출금
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
////전방 선언을 하지 않으면 main 함수 뒤에 있는 함수를 인식하지 못 한다.
////전방 선언을 하지 않고 main함수 앞에 적으면 Account *member을 인식하지 못해서 오류가 났다.
////-> 그래서 전방 선언을 하고 오류 해결 
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
//			std::cout << "서비스를 종료 합니다." << std::endl << std::endl;
//			break;
//		}
//		default:
//		{
//			std::cout << "잘 못된 수 입력" << std::endl << std::endl;
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
//	std::cout << "-----Menu-----" << std::endl << "1. 계좌개설" << std::endl << "2. 입 금" << std::endl << "3. 출금" << std::endl << "4. 계좌정보 전체 출력" << std::endl << "5. 프로그램 종료" << std::endl << "선택: ";
//}
//
//int create(int i)
//{
//	int id;
//	char name[10];
//	int money;
//
//	std::cout << "계좌ID: ";
//	std::cin >> id;
//	std::cout << "이름: ";
//	std::cin >> name;
//	std::cout << "입금액: ";
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
//		std::cout << "입금 하실 ID를 적으십시오.";
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
//			std::cout << "없는 ID 입니다." << std::endl;
//		}
//	}
//
//
//	std::cout << "입금 하실 금액을 적으십시오.";
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
//		std::cout << "출금 하실 ID를 적으십시오.";
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
//			std::cout << "없는 ID 입니다." << std::endl;
//		}
//	}
//
//
//	std::cout << "출금 하실 금액을 적으십시오.";
//	int money;
//	std::cin >> money;
//	member[k]->withdraw(money);
//}

//=======================================================

// p.294
//적절한 생성자 삽입
//적절한 main 만들기

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
//		std::cout << "잔여 가솔린 : " << GetGasGauge() << std::endl;
//		std::cout << "잔여 전기량 : " << GetEleGauge()<< std::endl;
//		std::cout << "잔여 워터량 : " << m_waterGauge << std::endl;
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
//적절한 생성자와 소멸자를 생성

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
//		std::cout << "이름: " << m_name << std::endl;
//		std::cout << "나이: " << m_age << std::endl;
//	}
//
//	int len(const char *str)const
//	{
//		int i = 0;
//		while (str[i] != '\0') //쌍따옴표 하면 오류
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
//		std::cout << "주소: " << m_addr << std::endl;
//		std::cout << "전화: " << m_phone << std::endl;
//	}
//
//};
//
//int main()
//{
//	MyFreindDetailInfo s1("부산","010-1234-5678","박세현",25);
//	s1.ShowMyFriendDetailInfo();
//}

//========================================================================

//문제 1 p.312
//정사각형을 의미하는 Square 클래스와 직사각형을 의미하는 Rectangle 클래스를 정의하고자 함.
//정사각형은 직사각형의 일종이므로 상속관계를 구성 

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
//		std::cout << "면적: " << m_x * m_y << std::endl;
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
//	//면적 12
//	//면적 49
//}

//======================================================

//문제 2 p.312

//책을 의미하는 Book 클래스 전자책을 의미하는 Ebook 클래스 정의 
//전자책 -> 책 

//class Book
//{
//private:
//	char* m_title; //책의 제목
//	char* m_isbn; // 국제표준도서 번호
//	int m_price; // 책의 정가
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
//		//j<=i 를 하면 new char[i]의 범위 보다 초과하기 때문에
//		//버퍼오버런이 발생한다.
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
//		std::cout << "제목: " << m_title << std::endl;
//		std::cout << "ISBN: " << m_isbn << std::endl;
//
//		std::cout << "가격: " << m_price << std::endl;
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
//	char* m_DRMKey; //보완관련 키
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
//		std::cout << "인증키: " << m_DRMKey << std::endl;
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
//	Book book("좋은 C++", "555-1235-213215-0", 20000);
//	book.ShowBookInfo();
//	std::cout << std::endl;
//
//	Ebook ebook("좋은 C++", "555-1235-213215-02", 20000, "wgerg8w9q");
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
//	//std::cout << "i: " << i <<" 문자: " << b << std::endl;
//
//	//delete b;
//}

//================================================



// project 5 p.314
//AccountHandlr라는 이름의 컨트롤 클래스를 정의하고, 앞서 정의한 "전역함수들을 이 클래스의 멤버함수"에 포함시킨다.
//Account 객체의 저장을 위해 선언한 배열과 변수도 이 클래스의 멤버에 포함시킨다.
//AccountHandlr 클래스 기반으로 프로그램이 실행되도록 main 함수를 변경한다.


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
//        while (str[i] != '\0') //쌍따옴표 하면 오류
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
//        std::cout << "ID 정보: " << m_id << std::endl;
//        std::cout << "이름: " << m_name << std::endl;
//        std::cout << "남은 돈: " << m_money << std::endl;
//        std::cout << "  " << std::endl;
//    }
//
//    void deposit(int money) //입금
//    {
//        m_money += money;
//    }
//
//    void withdraw(int money) //출금
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
//        std::cout << "-----Menu-----" << std::endl << "1. 계좌개설" << std::endl << "2. 입 금" << std::endl << "3. 출금" << std::endl << "4. 계좌정보 전체 출력" << std::endl << "5. 프로그램 종료" << std::endl << "선택: ";
//    }
//
//    void create()
//    {
//        int id;
//        char name[10];
//        int money;
//
//        std::cout << "계좌ID: ";
//        std::cin >> id;
//        std::cout << "이름: ";
//        std::cin >> name;
//        std::cout << "입금액: ";
//        std::cin >> money;
//
//        member[memNum++] = new Account(id, name, money);
//
//    }
//
//    void depositMoney()const //입금
//    {
//        int id, k;
//
//        bool id_True = false;
//
//
//
//        while (!id_True)
//        {
//            std::cout << "입금 하실 ID를 적으십시오.";
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
//                std::cout << "없는 ID 입니다." << std::endl;
//            }
//        }
//
//
//        std::cout << "입금 하실 금액을 적으십시오.";
//        int money;
//        
//        std::cin >> money;
//        member[k]->deposit(money);
//    }
//
//    void withdrawMoney()const //출금
//    {
//        int id, k;
//
//        bool id_True = false;
//
//
//
//        while (!id_True)
//        {
//            std::cout << "출금 하실 ID를 적으십시오.";
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
//                std::cout << "없는 ID 입니다." << std::endl;
//            }
//        }
//
//
//        std::cout << "출금 하실 금액을 적으십시오.";
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
//        //이렇게 하는 이유 객체 변수 하나에 포인터 배열 Account을
//        //했지만 동적할당은 100개 모두 하지 않았기 때문에
//        //동적할당한 배열만 삭제를 해줘야 오류가 발생하지 않는다. (*주의)
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
//            std::cout << "서비스를 종료 합니다." << std::endl << std::endl;
//            break;
//        }
//
//        default:
//        {
//            std::cout << "잘 못된 수 입력" << std::endl << std::endl;
//        }
//
//        }
//
//    }
//
//}

//========================================================================

//가상함수 테스트 해보기

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
//	bptr->Test(); //virtual Test 오류
//}

//=====================================================================

//p.354
//예제 EmployeeManager4.cpp를 확장하여 ForeignSalesWorker클래스를 추가로 정의
//영업직 직원 중 일부는 오지산간으로 시장개척을 진행하고 있다. 일부는 아마존, 일부는
//테러의 위험이 있는 지역에서 영업활동을 진행 중에 있다. 따라서 이러한 직원을 대상으로
//별도의 위험수당을 지급하고자 한다.

//위험수당의 지급방식은 '위험의 노출도'에 따라서 나눠짐 한번 결정한 직원의 '위험 노출도'는
//변경되지 않는 다고 가정한다 (const멤버 변수의 선언을 유도하는 것이다.)
//리스크 A : 영업직 기본급여와 인센 티브 합계 총액의 30%를 추가로 지급한다
//리스크 B : 영업직 기본급여와 인센 티브 합계 총액의 20%를 추가로 지급한다
//리스크 C : 영업직 기본급여와 인센 티브 합계 총액의 10%를 추가로 지급한다

//main 함수와 함께 작동하도록 한다. ForeignSalesWorker 클래스를 정의
//Employee 클래스는 객체 생성이 불가능한 추상 클래스로 정의


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
//class Employee //고용인 
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
//class PermanentWorker : public Employee //정규직
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
//class TemporaryWorker : public Employee //임시직 
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
//class SalesWorker : public PermanentWorker //영업직
//{
//private:
//	int salesResult;    // 월 판매실적
//	double bonusRatio;    // 상여금 비율 
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
//		//SalesWorker:: 안하니깐 ForeignSalesWorker GetPay()를 호출 했음 
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
//OOP 6단계

//두 클래스 추가 
//NormalAccout 보통 예금 계좌 -> 최소한의 이자를 지급하는 자율 입출금식 계좌
//HighCreditAccount 신용 신뢰 계좌 -> 신용도가 높은 고객에게만 개설을 허용하는 높은 이율의 계좌



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
//        while (str[i] != '\0') //쌍따옴표 하면 오류
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
//        std::cout << "ID 정보: " << m_id << std::endl;
//        std::cout << "이름: " << m_name << std::endl;
//        std::cout << "남은 돈: " << m_money << std::endl;
//    }
//
//    virtual void deposit(int money) //입금
//    {
//        m_money += money;
//    }
//
//    void withdraw(int money) //출금
//    {
//        if (m_money-money > 0)
//        {
//            m_money -= money;
//
//        }
//        else
//        {
//            std::cout << "잔액이 부족합니다. " << std::endl;
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
////보통예금계좌에는 이율 정보를 등록
////신용신뢰계좌는 보통계좌와 마찬가지로 객체 생성과정에서 기본이율을 등록
////고객의 신용등급을 A,B,C로 나누고 계좌개설 시 이 정보를 등록
////A 7% B 4% C 2%
//
////계좌개설 과정에서 초기 입금되는 금액에 대해서는 이자를 계산 X
////계좌개설 후 별도의 입금과정을 거칠 때에만 이자가 발생하는 것으로 간주한다.
////이자의 계산과정에서 발생하는 소수점 이하의 금액은 무시한다.
//
//class NormalAccout:public Account//보통예금계좌
//{
//private:
//    int m_interest; //이자
//
//public:
//    NormalAccout(int interest,int id, const char* name,int money):Account(id,name,money), m_interest(interest)
//    {}
//
//    void print()const
//    {
//        Account::print();
//
//        std::cout << "이율: " << m_interest << std::endl;
//    }
//
//    int interest()const
//    {
//        return m_interest;
//    }
//
//    void deposit(int money) //입금
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
//class HighCreditAccount:public NormalAccout //신용신뢰계좌
//{
//private:
//    int m_rating; //등급 7 4 2
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
//            std::cout << "고객 등급 : A" << std::endl;
//            break;
//        case CREDIT::RATING_B:
//            std::cout << "고객 등급 : B" << std::endl;
//            break;
//        case CREDIT::RATING_C:
//            std::cout << "고객 등급 : C" << std::endl;
//            break;
//        }
//        std::cout << "추가 이율: " << m_rating << std::endl;
//    }
//
//    //void deposit(int money) //입금
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
//        std::cout << "-----Menu-----" << std::endl << "1. 계좌개설" << std::endl << "2. 입 금" << std::endl << "3. 출금" << std::endl << "4. 계좌정보 전체 출력" << std::endl << "5. 프로그램 종료" << std::endl << "선택: ";
//    }
//
//    void create() //계좌 개설
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
//            std::cout << "[계좌종류선택]" << std::endl;
//            std::cout << "1. 보통예금계좌 2. 신용신뢰계좌 " << std::endl;
//            std::cin >> option;
//
//            if (option < 1 || option>2)
//            {
//                std::cout << "잘 못된 입력 입니다." << std::endl;
//                break;
//            }
//
//        }
//
//            if (option == 1 || option ==2)
//            {
//                std::cout << "계좌ID: ";
//                std::cin >> id;
//                std::cout << "이름: ";
//                std::cin >> name;
//                std::cout << "입금액: ";
//                std::cin >> money;
//                std::cout << "이자율: ";
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
//                std::cout << "신용등급(1toA, 2toB, 3toC): ";
//                std::cin >> high;
//
//                do
//                {
//                    if ((high <= 0 || high > 3))
//                    {
//                        std::cout << "잘 못된 입력입니다. " << std::endl;
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
//    void depositMoney()const //입금
//    {
//        int id, k;
//
//        bool id_True = false;
//
//
//
//        while (!id_True)
//        {
//            std::cout << "입금 하실 ID를 적으십시오.";
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
//                std::cout << "없는 ID 입니다." << std::endl;
//            }
//        }
//
//
//        std::cout << "입금 하실 금액을 적으십시오.";
//        int money;
//        
//        std::cin >> money;
//        member[k]->deposit(money);
//    }
//
//    void withdrawMoney()const //출금
//    {
//        int id, k;
//
//        bool id_True = false;
//
//
//
//        while (!id_True)
//        {
//            std::cout << "출금 하실 ID를 적으십시오.";
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
//                std::cout << "없는 ID 입니다." << std::endl;
//            }
//        }
//
//
//        std::cout << "출금 하실 금액을 적으십시오.";
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
//        //이렇게 하는 이유 객체 변수 하나에 포인터 배열 Account을
//        //했지만 동적할당은 100개 모두 하지 않았기 때문에
//        //동적할당한 배열만 삭제를 해줘야 오류가 발생하지 않는다. (*주의)
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
//            std::cout << "서비스를 종료 합니다." << std::endl << std::endl;
//            break;
//        }
//
//        default:
//        {
//            std::cout << "잘 못된 수 입력" << std::endl << std::endl;
//        }
//
//        }
//
//    }
//
//}

//==============================================================================

//문제 10 -1 p.409
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
//	else //else가 없으면 참으로 반환함
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
//	Point C = A - B;//멤버 A.operator-(const Point &B),전역 operator-(const Point &A, const Point &B)
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
//		std::cout << "값이 같다." << std::endl;
//	}
//
//	if (A != B)
//	{
//		std::cout << "값이 다르다." << std::endl;
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
//	std::cout << "x, y 좌표 순으로 입력: ";
//	std::cin >> pos1;
//	std::cout << pos1;
//
//	Point pos2;
//	std::cout << "x, y 좌표 순으로 입력: ";
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
//		std::cout << "나이: " << age << std::endl;
//		std::cout << "이름: " << name << std::endl;
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
////대입 연산자 복사 연산자 생성
//class Gun
//{
//private:
//	int bullet;    	// 장전된 총알의 수
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
//			std::cout << "남은 총알 개수: 0" << std::endl;
//		}
//		else
//		{
//			std::cout << "남은 총알 개수: " << bullet << std::endl;
//		}
//	}
//};
//
//class Police
//{
//private:
//	int handcuffs;    // 소유한 수갑의 수
//	Gun* pistol;     // 소유하고 있는 권총
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
//		cout << "남은 수갑 수 : " << handcuffs << endl;
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
//	Police pman2(0, 3);     // 권총소유하지 않은 경찰
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
//대입, 복사 연산자 생성

//class Book
//{
//private:
//	char* m_title; //책의 제목
//	char* m_isbn; // 국제표준도서 번호
//	int m_price; // 책의 정가
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
//		//j<=i 를 하면 new char[i]의 범위 보다 초과하기 때문에
//		//버퍼오버런이 발생한다.
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
//		m_title =NULL; //책의 제목
//		m_isbn=NULL; // 국제표준도서 번호
//		m_price = 0; // 책의 정가
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
//		//j<=i 를 하면 new char[i]의 범위 보다 초과하기 때문에
//		//버퍼오버런이 발생한다.
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
//		//j<=i 를 하면 new char[i]의 범위 보다 초과하기 때문에
//		//버퍼오버런이 발생한다.
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
//		std::cout << "제목: " << m_title << std::endl;
//		std::cout << "ISBN: " << m_isbn << std::endl;
//
//		std::cout << "가격: " << m_price << std::endl;
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
//	char* m_DRMKey; //보완관련 키
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
//		std::cout << "Ebook 복사 생성자 " << std::endl;
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
//		std::cout << "인증키: " << m_DRMKey << std::endl;
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
//	Book book("좋은 C++", "555-1235-213215-0", 20000);
//	book.ShowBookInfo();
//	std::cout << std::endl;
//
//	Book book2("자바", "123-421512-3213", 10000);
//	book2.ShowBookInfo();
//	book2 = book;
//	book2.ShowBookInfo();
//
//	Book book3(book);
//	book3.ShowBookInfo();
//
//	std::cout << "------------------" << std::endl;
//
//	Ebook ebook("좋은 C++", "555-1235-213215-02", 20000, "wgerg8w9q");
//	ebook.ShowEBookInfo();
//	//return 0;
//
//	Ebook ebook2 = ebook;
//	ebook2.ShowEBookInfo();
//
//	Ebook ebook3(" C++", "555-1235-02", 20000, "wgerg8w9q");
//	ebook3 = ebook2; // opertor = 가 없으면 오류 
//	
//
//
//
//}
//=======================================================
//문제 11-2
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
//	BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr) { } //방지용
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
//2차원 배열접근에 대한 연산자 오버로딩을 진행

//이 문제를 통해 깨달은 점
// BoundCheck2DIntArray arr2d(n,m)
//arr2d[n][m] = n + m;가 있으면
//operator 순서는 arr2d.operator[](int n) arr2d 객체 리턴->
//arr2d.operator[](int m) arr2d객체 리턴->
// arr2d.operator=(int n+m) arr2d객체 리턴 -> 값 도출
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
//	int width,height; //선언과 동시에 고정 값
//	int width_current, height_current; //for문을 돌리기 위한 현재 상태 변수
//	bool dimention; //true면 1차원 false면 2차원
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
//			std::cout << "배열의 범위를 초과했습니다. " << std::endl;
//			exit(1);
//		}
//		else if(i < 0 || i >= height && dimention == false)
//		{
//			std::cout << "배열의 범위를 초과했습니다. " << std::endl;
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
//		delete[]leng; //정답 소멸자 확인하기
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
//	//세로와 가로의 길이가 3,4인 INT형 2차원 배열처럼 동작하는 arr2d객체가 생성되어
//	//다음의 형태로 데이터를 저장 및 참조를 할 수 있어야한다.
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
//	//참고로 두 개의 []연산자를 동시에 오버로딩하는 것은 허용되지 X,위의 다음 문장은
//	//arr2d[n][m]
//	//두번의 []연산자 호출을 동반하게끔 구현해야한다. 즉 첫 번째[] 연산에 의해서 위의 문장은
//	//다음과 같이 해석되어야함.
//	// (arr2d.operator[](n))[m];
//
//	//그리고 arr2d.operator[](n) 연산의 반환 값을 이용해서 두 번째 [] 연산은 다음과 같이 해석해야한다.
//	//((반환 값).operotor[])(m);
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
//		cout << "Point 객체 생성" << endl;
//	}
//	~Point()
//	{
//		cout << "Point 객체 소멸" << endl;
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
//	SmartPtr sptr1(new Point(1, 2)); //new Point(1, 2)의 주소 할당 
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
////이 문제를 통해 깨달은 점
//// BoundCheck2DIntArray arr2d(n,m)
////arr2d[n][m] = n + m;가 있으면
////operator 순서는 arr2d.operator[](int n) arr2d 객체 리턴->
////arr2d.operator[](int m) arr2d객체 리턴->
//// arr2d.operator=(int n+m) arr2d객체 리턴 -> 값 도출
//
////두 개의 [] 연산자를 동시에 오버로딩 하는 것은 허용 X
//// arr2d[n][m] 두 번의 []연산자 호출을 동반하게끔 구현해야한다.
////첫 번째[]연산에 의해서 위의 문장은 다음과 같이 해석
////(arr2d.operator[](n))[m];
////그리고 arr2d.operator[](n) 연산의 반환 값을 이용해서 두 번째 [] 연산은 다음과 같이 해석
//// ((반환 값).operator[])(m);
//
//
//
//class BoundCheck2DIntArray
//{
//private:
//	int** arr; //클래스 형 멤버변수는 포인터로 설정
//	int arrlenX; //배열 길이 측정
//	int arrlenY;
//	int m_x; //리턴값 좌표 측정
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
//			if (idx < 0 || idx >= arrlenX) //배열 범위 설정
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
//		//		arr2d[n][m] = n + m; //(arr2d.operator[](n))[m];   (반환 값).operator[](m);
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
//		// 각 int 포인터가 가리키는 메모리 해제
//		for (int i = 0; i < arrlenX; i++) { //arrlenX = 3 
//			delete[] arr[i];
//		}
//
//		// 포인터 배열에 대한 메모리 해제
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
//		m_str = new char[100]; //필자가 작성
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
//		//String str3 = str1 + str2; 에서 str1에 저장 되는 오류가 발생
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
//		//std::cout << m_len << std::endl; -> 40 ?? str1이 그대로 저장됨
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
//	friend void operator>>(std::istream& is, const String& str); //필자가 작성
//	//friend std::istream& operator >> (std::istream& is, String& str);
//};
//
//void operator>>(std::istream& is, const String& xstr)
//{
//
//	is >> xstr.m_str;
//}
//
////std::istream& operator >> (std::istream& is, String& str) //책 내용
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
//		std::cout << "같은 문자열" << std::endl;
//	}
//	else
//	{
//		std::cout << "다른 문자열" << std::endl;
//	}
//
//	String str4;
//	
//	std::cout << "문자 입력 : ";
//	std::cin >> str4;
//
//	std::cout << "문자 입력 : ";
//	std::cin >> str1;
//
//	if (str4 == str1)
//	{
//		std::cout << "같은 문자열" << std::endl;
//	}
//	else
//	{
//		std::cout << "다른 문자열" << std::endl;
//	}
//}

