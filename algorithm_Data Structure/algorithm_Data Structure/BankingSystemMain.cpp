#include "AccountHandlr.h"

//OOP 7�ܰ� MAIN, ������ϰ� �ҽ����� ������ 
//Account.h Account.cpp 
//NormalAccount.h
//HighCreditAccout.h
//AccountHandlr.h AccountHandlr.cpp
//BankingCommon.h -> ������� �� ��� ����
//BankingSystemMain.cpp -> main �Լ� ����

//int main(void)
//{
//    int num = 0;
//    int i = 0;
//
//    AccountHandlr manager;
//
//
//    while (num != 5)
//    {
//
//        manager.menu();
//        std::cin >> num;
//
//        switch (num)
//        {
//
//        case 1:
//        {
//            manager.create();
//            break;
//        }
//        case 2:
//        {
//            manager.depositMoney();
//            break;
//        }
//        case 3:
//        {
//            manager.withdrawMoney();
//            break;
//        }
//        case 4:
//        {
//            for (int j = 0; j < AccountHandlr::memNum; j++)
//            {
//                manager.print(j);
//                std::cout << "  " << std::endl;
//
//            }
//
//            break;
//        }
//        case 5:
//        {
//            std::cout << "���񽺸� ���� �մϴ�." << std::endl << std::endl;
//            break;
//        }
//
//        default:
//        {
//            std::cout << "�� ���� �� �Է�" << std::endl << std::endl;
//        }
//
//        }
//
//    }
//
//}