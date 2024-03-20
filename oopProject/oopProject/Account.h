#pragma once
#include "AccountString.h"
#include <iostream>
//#include <string>

class Account
{
private:
    int m_id;
    String m_name; 
    //char* m_name;
    int m_money;
    

public:
    Account();

    Account(int id, String name, int money);
   // Account(int id, const char* name, int money);

    Account(Account& acc);


    virtual ~Account();

    Account& operator=(const Account& ref);

    int len(const char* str)const;

    virtual void print()const;


    virtual void deposit(int money); //입금


    void withdraw(int money); //출금


    int information()const;

};