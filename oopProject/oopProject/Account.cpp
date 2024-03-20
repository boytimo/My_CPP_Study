#include "Account.h"
//virtual 은 cpp 소스파일에 적지 않아도 된다

Account::Account()
    :m_id(0), m_name(NULL), m_money(0)
{}

//Account::Account(int id, const char* name, int money)
//    :m_id(id), m_money(money)
//{
//    int i = 0;
//
//  
//    i = len(name);
//
//    m_name = new char[i];
//
//    for (int j = 0; j < i; j++)
//    {
//        m_name[j] = name[j];
//    }
//
//}

Account::Account(int id, String name, int money)
    :m_id(id), m_money(money)
{
    m_name = name;
    std::cout <<"Account : " << name << std::endl;
}

Account::Account(Account& acc)
{
    m_id = acc.m_id;
    m_money = acc.m_money;

    m_name = acc.m_name;

    //int i;
    //i = len(acc.m_name);

    //for (int j = 0; j < i; j++)
    //{
    //    m_name[j] = acc.m_name[j];
    //}

}

 Account:: ~Account()
{
    //delete[] m_name;
}

 Account& Account::operator=(const Account& ref) //oop8
 {
     m_id = ref.m_id;
     m_money = ref.m_money;
     m_name = ref.m_name;

     //int i = len(ref.m_name);
     //for (int j = 0; j < i; j++)
     //{
     //    m_name[i] = ref.m_name[i];
     //}

     return *this;
 }

//int Account::len(const char* str)const
//{
//    int i = 0;
//    while (str[i] != '\0') //쌍따옴표 하면 오류
//    {
//        //std::cout << i << std::endl;
//
//        i++; //s 0 -> 1 t 1 -> 2 r 2 -> 3
//    }
//    i++;
//    //"str"
//    //std::cout << i << std::endl;
//    return i;
//}

void Account::print()const
{
    std::cout << "ID 정보: " << m_id << std::endl;
    std::cout << "이름: " << m_name << std::endl;
    std::cout << "남은 돈: " << m_money << std::endl;
}

void Account::deposit(int money) //입금
{
    m_money += money;
}

void Account::withdraw(int money) //출금
{
    if (m_money - money > 0)
    {
        m_money -= money;

    }
    else
    {
        std::cout << "잔액이 부족합니다. " << std::endl;
    }
}

int Account::information()const
{
    return m_id;
}