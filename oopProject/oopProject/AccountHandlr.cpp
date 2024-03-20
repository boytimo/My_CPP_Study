#include "AccountHandlr.h"

void AccountHandlr::menu()const
{
    std::cout << "-----Menu-----" << std::endl << "1. 계좌개설" << std::endl << "2. 입 금" << std::endl << "3. 출금" << std::endl << "4. 계좌정보 전체 출력" << std::endl << "5. 프로그램 종료" << std::endl << "선택: ";
}

void AccountHandlr::create() //계좌 개설
{
    int id;
    //char name[10];
    String name;
    int money;
    int option = 0;
    int normal;
    int high;

    while (option < 1 || option>2)
    {
        std::cout << "[계좌종류선택]" << std::endl;
        std::cout << "1. 보통예금계좌 2. 신용신뢰계좌 " << std::endl;
        std::cin >> option;

        if (option < 1 || option>2)
        {
            std::cout << "잘 못된 입력 입니다." << std::endl;
            break;
        }

    }

    if (option == 1 || option == 2)
    {
        std::cout << "계좌ID: ";
        std::cin >> id;
        if (memNum > 0)
        {
            for (int i = 0; i < memNum; i++)
            {

            }
        }

        std::cout << "이름: ";
        std::cin >> name;
        std::cout << "입금액: ";
        std::cin >> money;
        std::cout << "이자율: ";
        std::cin >> normal;

        std::cout << name << " Account Han" << std::endl;

        if (option == 1)
        {
            //member[memNum++] = new NormalAccout(normal, id, "name", money);
            member[memNum++] = new Account(id, name, money);
        }

    }

    if (option == 2)
    {

        std::cout << "신용등급(1toA, 2toB, 3toC): ";
        std::cin >> high;

        do
        {
            if ((high <= 0 || high > 3))
            {
                std::cout << "잘 못된 입력입니다. " << std::endl;
            }
        } while ((high <= 0 || high > 3));

        switch (high)
        {
        case 1:
            high = CREDIT::RATING_A;
            break;
        case 2:
            high = CREDIT::RATING_B;
            break;
        case 3:
            high = CREDIT::RATING_C;
            break;
        }
        member[memNum++] = new HighCreditAccount(high, normal, id, name, money);
    }



}

void AccountHandlr::depositMoney()const //입금
{
    int id, k;

    bool id_True = false;



    while (!id_True)
    {
        std::cout << "입금 하실 ID를 적으십시오.";
        std::cin >> id;

        for (int j = 0; j < memNum; j++)
        {
            if (member[j]->information() == id)
            {
                k = j;
                id_True = true;
                break;
            }
        }
        if (!(id_True))
        {
            std::cout << "없는 ID 입니다." << std::endl;
        }
    }


    std::cout << "입금 하실 금액을 적으십시오.";
    int money;

    std::cin >> money;
    member[k]->deposit(money);
}

void AccountHandlr::withdrawMoney()const //출금
{
    int id, k;

    bool id_True = false;



    while (!id_True)
    {
        std::cout << "출금 하실 ID를 적으십시오.";

        std::cin >> id;

        for (int j = 0; j < memNum; j++)
        {
            if (member[j]->information() == id)
            {
                k = j;
                id_True = true;
                break;
            }
        }
        if (!(id_True))
        {
            std::cout << "없는 ID 입니다." << std::endl;
        }
    }


    std::cout << "출금 하실 금액을 적으십시오.";
    int money;
    std::cin >> money;
    member[k]->withdraw(money);
}

void AccountHandlr::print(int n)const
{
    member[n]->print();
}

AccountHandlr::~AccountHandlr()
{
    //이렇게 하는 이유 객체 변수 하나에 포인터 배열 Account을
    //했지만 동적할당은 100개 모두 하지 않았기 때문에
    //동적할당한 배열만 삭제를 해줘야 오류가 발생하지 않는다. (*주의)
    for (int i = 0; i < memNum; i++)
    {
        delete[] member[i];
    }
}

int AccountHandlr::memNum = 0;//이거 헤더파일에 넣으면 오류 생김
