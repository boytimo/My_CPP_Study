#pragma once

#include <iostream>
using namespace std;

class Add
{
private:
	int m_op1;
	int m_op2;

public:
	Add(int op1, int op2);

	int Process();
};