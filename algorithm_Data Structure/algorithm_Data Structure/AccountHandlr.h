#pragma once

#include "HighCreditAccout.h"

class AccountHandlr
{
private:

    Account* member[100];

public:
    static int memNum;

    void menu()const;


    void create(); //���� ����

    void withdrawMoney()const;//���

    void depositMoney()const; //�Ա�
   

    void print(int n)const;
    

    ~AccountHandlr();
   
};

