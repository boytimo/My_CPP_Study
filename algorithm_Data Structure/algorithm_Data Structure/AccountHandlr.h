#pragma once

#include "HighCreditAccout.h"

class AccountHandlr
{
private:

    Account* member[100];

public:
    static int memNum;

    void menu()const;


    void create(); //계좌 개설

    void withdrawMoney()const;//출금

    void depositMoney()const; //입금
   

    void print(int n)const;
    

    ~AccountHandlr();
   
};

