#pragma once
#include "NormalAccount.h"
#include "BankingCommon.h"

class HighCreditAccount :public NormalAccout //�ſ�ŷڰ���
{
private:
    int m_rating; //��� 7 4 2

public:
    HighCreditAccount(int rating, int interest, int id, const char* name, int money) :NormalAccout(interest + rating, id, name, money), m_rating(rating)
    {}

    void print()const
    {
        NormalAccout::print();
        switch (m_rating)
        {
        case CREDIT::RATING_A:
            std::cout << "�� ��� : A" << std::endl;
            break;
        case CREDIT::RATING_B:
            std::cout << "�� ��� : B" << std::endl;
            break;
        case CREDIT::RATING_C:
            std::cout << "�� ��� : C" << std::endl;
            break;
        }
        std::cout << "�߰� ����: " << m_rating << std::endl;
    }

    //void deposit(int money) //�Ա�
    //{
    //    NormalAccout::deposit(money);
    //}
};