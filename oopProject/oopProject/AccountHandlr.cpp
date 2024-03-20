#include "AccountHandlr.h"

void AccountHandlr::menu()const
{
    std::cout << "-----Menu-----" << std::endl << "1. ���°���" << std::endl << "2. �� ��" << std::endl << "3. ���" << std::endl << "4. �������� ��ü ���" << std::endl << "5. ���α׷� ����" << std::endl << "����: ";
}

void AccountHandlr::create() //���� ����
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
        std::cout << "[������������]" << std::endl;
        std::cout << "1. ���뿹�ݰ��� 2. �ſ�ŷڰ��� " << std::endl;
        std::cin >> option;

        if (option < 1 || option>2)
        {
            std::cout << "�� ���� �Է� �Դϴ�." << std::endl;
            break;
        }

    }

    if (option == 1 || option == 2)
    {
        std::cout << "����ID: ";
        std::cin >> id;
        if (memNum > 0)
        {
            for (int i = 0; i < memNum; i++)
            {

            }
        }

        std::cout << "�̸�: ";
        std::cin >> name;
        std::cout << "�Աݾ�: ";
        std::cin >> money;
        std::cout << "������: ";
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

        std::cout << "�ſ���(1toA, 2toB, 3toC): ";
        std::cin >> high;

        do
        {
            if ((high <= 0 || high > 3))
            {
                std::cout << "�� ���� �Է��Դϴ�. " << std::endl;
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

void AccountHandlr::depositMoney()const //�Ա�
{
    int id, k;

    bool id_True = false;



    while (!id_True)
    {
        std::cout << "�Ա� �Ͻ� ID�� �����ʽÿ�.";
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
            std::cout << "���� ID �Դϴ�." << std::endl;
        }
    }


    std::cout << "�Ա� �Ͻ� �ݾ��� �����ʽÿ�.";
    int money;

    std::cin >> money;
    member[k]->deposit(money);
}

void AccountHandlr::withdrawMoney()const //���
{
    int id, k;

    bool id_True = false;



    while (!id_True)
    {
        std::cout << "��� �Ͻ� ID�� �����ʽÿ�.";

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
            std::cout << "���� ID �Դϴ�." << std::endl;
        }
    }


    std::cout << "��� �Ͻ� �ݾ��� �����ʽÿ�.";
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
    //�̷��� �ϴ� ���� ��ü ���� �ϳ��� ������ �迭 Account��
    //������ �����Ҵ��� 100�� ��� ���� �ʾұ� ������
    //�����Ҵ��� �迭�� ������ ����� ������ �߻����� �ʴ´�. (*����)
    for (int i = 0; i < memNum; i++)
    {
        delete[] member[i];
    }
}

int AccountHandlr::memNum = 0;//�̰� ������Ͽ� ������ ���� ����
