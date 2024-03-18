#pragma once
#include <iostream>

class Account
{
private:
    int m_id;
    char* m_name;
    int m_money;

public:
    Account();

    Account(int id, const char* name, int money);

    Account(Account& acc);


    virtual ~Account();

    Account& operator=(const Account& ref);

    int len(const char* str)const;

    virtual void print()const;


    virtual void deposit(int money); //입금


    void withdraw(int money); //출금


    int information()const;

};