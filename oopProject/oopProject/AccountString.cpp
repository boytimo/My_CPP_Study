#include"AccountString.h"

String::String()
{
	std::cout << "String()" << std::endl;
	m_len = 0;
	m_str = NULL; 
}

String::String(const char* xstr)
{
	std::cout << "String(const char * xstr)" << std::endl;

	m_len = makeLen(xstr);
	
	m_str = new char[m_len];
	for (int i = 0; i < m_len; i++)
	{
		m_str[i] = xstr[i];
	}

}

String::String(const String& xstr) //���� ������ ȣ�� ���ؼ� �� �ڵ尡 ���� ������
{
	std::cout << "String(const String &xstr) " << std::endl;

	//�� m_str�� NULL�� �ƴұ�?
	if(m_str != NULL) //�����ڶ� �ʿ� ���� �̰� ȣ�� �Ǽ� ����
	{
		std::cout << "m_str !_ NULL  " ;
		std::cout << m_len << std::endl;
	}

	m_len = xstr.m_len;

	m_str = new char[m_len];

	for (int i = 0; i < m_len; i++)
	{
		m_str[i] = xstr.m_str[i];
	}

}

String::~String()
{
	if (m_str != NULL)
	{
		delete[] m_str;
	}
}

String& String::operator=(const String& xstr)
{
	std::cout << "operator = " << std::endl;

	if (xstr.m_str != NULL)
	{
		if (m_str != nullptr)
		{
			deleteIndex();
		}

		m_len = xstr.m_len;
		m_str = new char[m_len];
		for (int i = 0; i < m_len; i++)
		{
			m_str[i] = xstr.m_str[i];
		}
	}

	return *this;
}

bool String::operator==(const String& xstr)
{
	int j = 0;

	if (xstr.m_len == m_len)
	{
		if (xstr.m_len == 0 && m_len == 0)
		{
			return true;
		}
		for (int i = 0; i < m_len; i++)
		{
			if (m_str[i] == xstr.m_str[i])
			{
				j++;
			}
		}
		if (j == m_len)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

String String::operator+(const String& xstr)
{
	std::cout << "operator + " << std::endl;
	//A = C+B; C�� B���� ����ٸ�



	if (m_len == 0 && xstr.m_len == 0)
	{
		String xstr2;
		return xstr2;
	}

	int tempLen;
	if ((m_len != 0 && xstr.m_len == 0) || (m_len == 0 && xstr.m_len != 0))
	{
		tempLen = m_len + xstr.m_len;
	}
	else
	{
		tempLen = m_len + xstr.m_len - 1;
	}


	char* tempStr = new char[tempLen];

	//std::cout << tempLen << std::endl;// -> 27
	//std::cout << m_len << std::endl; // -> 16


	//for (int i = 0; i < m_len - 1; i++)
	//{
	//	tempStr[i] = m_str[i];
	//}

	for (int i = 0; i < tempLen; i++)// 0 1 2 3 A = C + B
	{
		if (xstr.m_len == 0)  //B�� NULL�̶��
		{
			tempStr[i] = m_str[i];
		}
		else
		{
			if (i < m_len - 1) //C�� B�� ������ �����ϱ� ����, -1�� \0�� ���� ���ؼ� ����
			{
				tempStr[i] = m_str[i];
			}
			else
			{
				tempStr[i] = xstr.m_str[i - (m_len - 1)];
			}
		}

	}

	String xstr2(tempStr);

	delete[] tempStr;
	tempStr = nullptr;

	return xstr2;
	
}

String& String::operator +=(const String& xstr)//a += b
{
	std::cout << "operator += " << std::endl;
	if (xstr.m_len == 0) //B�� ����ٸ�
	{
		return *this;
	}
	else
	{
		if (m_len == 0) //A�� ����ٸ�
		{
			*this = xstr;
			return *this;
		}
		else
		{
			char* tempStr = new char[m_len];
			int tempLen = m_len - 1; // \0 ����

			m_len = tempLen + xstr.m_len;

			for (int i = 0; i < tempLen; i++)
			{
				tempStr[i] = m_str[i];

			}

			deleteIndex();

			m_str = new char[m_len];

			for (int i = 0; i < m_len; i++)
			{
				if (i < tempLen)
				{
					m_str[i] = tempStr[i];
				}
				else
				{
					m_str[i] = xstr.m_str[i - tempLen];
				}

				std::cout << m_str[i] << std::endl;
			}

			delete[] tempStr;
			tempStr = nullptr;

			return *this;
		}


	}


}

void String::deleteIndex()
{
	delete[] m_str;
	m_str = nullptr;
}

int String::makeLen(const char* xstr)
{
	int i = 0;

	while (xstr[i] != '\0')
	{
		i++;
	} // s -> 1 t->2 r->3
	i++; //-> 4
	return i;
}


std::istream& operator>>(std::istream& is, String& xstr)
{
	char a[100];
	is >> a;
	std::cout << a << " operator >>" << std::endl;

	//String temps(a); //String::String(const char* xstr)
	//xstr = temps; //operator = 
	
	//String &temps = xstr; //String::String(const char* xstr)
	//temps = a; //operator = 

	xstr = String(a); //String::String(const char* xstr) //operator = 

	return is;
}

std::ostream& operator<<(std::ostream& os, const String& xstr)
{
	if (xstr.m_len == 0)
	{
		os << "���� ����";
		return os;
	}
	else
	{
		os << xstr.m_str;
		return os;
	}

}
