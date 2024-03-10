#pragma once
#include "NormalAccount.h"
#include "BankingCommon.h"

class HighCreditAccount :public NormalAccout //신용신뢰계좌
{
private:
    int m_rating; //등급 7 4 2

public:
    HighCreditAccount(int rating, int interest, int id, const char* name, int money) :NormalAccout(interest + rating, id, name, money), m_rating(rating)
    {}

    void print()const
    {
        NormalAccout::print();
        switch (m_rating)
        {
        case CREDIT::RATING_A:
            std::cout << "고객 등급 : A" << std::endl;
            break;
        case CREDIT::RATING_B:
            std::cout << "고객 등급 : B" << std::endl;
            break;
        case CREDIT::RATING_C:
            std::cout << "고객 등급 : C" << std::endl;
            break;
        }
        std::cout << "추가 이율: " << m_rating << std::endl;
    }

    //void deposit(int money) //입금
    //{
    //    NormalAccout::deposit(money);
    //}
};