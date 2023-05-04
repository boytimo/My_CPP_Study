#include "Add.h"
#include "Cal.h"

void Cal::Run()
{
	cout << "두 수를 입력하시오: ";
	int a, b;
	cin >> a >> b;
	Add a1(a, b);
	cout << a1.Process() << endl;
}

