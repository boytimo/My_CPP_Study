#pragma once

#include<stdio.h>

namespace mystd
{
	class ostream
	{
	public:
		ostream& operator << (const char* str)
		{
			printf("%s", str);
			return *this;
		}

		ostream& operator<<(int i)
		{
			printf("%d", i);
			return *this;
		}
		ostream& operator<<(double i)
		{
			printf("%e", i);
			return *this;
		}
	};

	ostream cout; 
	
}