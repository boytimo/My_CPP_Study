#pragma once

#include "HighCreditAccout.h"
#include "AccountArray.h"

class AccountHandlr
{
private:
    
    Account* member[100];
    BoundCheckPointPtrArray accArr; //oop 8

public:
    static int memNum;

    void menu()const;


    void create(); //���� ����

    void withdrawMoney()const;//���

    void depositMoney()const; //�Ա�
   

    void print(int n)const;
    

    ~AccountHandlr();
   
};

