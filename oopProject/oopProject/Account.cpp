#include "Account.h"
//virtual �� cpp �ҽ����Ͽ� ���� �ʾƵ� �ȴ�

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
//    while (str[i] != '\0') //�ֵ���ǥ �ϸ� ����
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
    std::cout << "ID ����: " << m_id << std::endl;
    std::cout << "�̸�: " << m_name << std::endl;
    std::cout << "���� ��: " << m_money << std::endl;
}

void Account::deposit(int money) //�Ա�
{
    m_money += money;
}

void Account::withdraw(int money) //���
{
    if (m_money - money > 0)
    {
        m_money -= money;

    }
    else
    {
        std::cout << "�ܾ��� �����մϴ�. " << std::endl;
    }
}

int Account::information()const
{
    return m_id;
}