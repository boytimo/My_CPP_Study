#include "Add.h"
#include "Cal.h"

void Cal::Run()
{
	cout << "�� ���� �Է��Ͻÿ�: ";
	int a, b;
	cin >> a >> b;
	Add a1(a, b);
	cout << a1.Process() << endl;
}

