#pragma once
#include "Account.h"

class NormalAccout :public Account//보통예금계좌
{
private:
    int m_interest; //이자

public:
    //NormalAccout(int interest, int id, const char* name, int money) :Account(id, name, money), m_interest(interest)
    //{}
    NormalAccout(int interest, int id, String name, int money) :Account(id, name, money), m_interest(interest)
    {
        std::cout << "NormalAccout : " << name << std::endl;
    }

    void print()const
    {
        Account::print();

        std::cout << "이율: " << m_interest << std::endl;
    }

    int interest()const
    {
        return m_interest;
    }

    void deposit(int money) //입금
    {
        Account::deposit(money / 100 * m_interest + money);
    }


};