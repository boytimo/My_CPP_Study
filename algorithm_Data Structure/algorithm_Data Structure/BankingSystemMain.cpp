#include "AccountHandlr.h"

//OOP 7단계 MAIN, 헤더파일과 소스파일 나누기 
//Account.h Account.cpp 
//NormalAccount.h
//HighCreditAccout.h
//AccountHandlr.h AccountHandlr.cpp
//BankingCommon.h -> 공통헤더 및 상수 선언
//BankingSystemMain.cpp -> main 함수 정의

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
//            std::cout << "서비스를 종료 합니다." << std::endl << std::endl;
//            break;
//        }
//
//        default:
//        {
//            std::cout << "잘 못된 수 입력" << std::endl << std::endl;
//        }
//
//        }
//
//    }
//
//}