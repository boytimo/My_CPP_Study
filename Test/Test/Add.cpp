#include "Add.h"

Add::Add(int op1, int op2)
{
	m_op1 = op1;
	m_op2 = op2;
}

int Add::Process()
{
	return m_op1 + m_op2;
}
