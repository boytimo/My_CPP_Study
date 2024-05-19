#pragma once
#include<iostream>

class String
{
private:
	char* m_str;
	int m_len;
public:
	
	String();

	String(const char* xstr);

	String(const String& xstr);

	~String();

	String& operator=(const String& xstr);
	

	bool operator==(const String& xstr);
	

	String operator+(const String& xstr);
	
	String& operator +=(const String& xstr);//A += B

	void deleteIndex();
	
	int makeLen(const char* xstr);

	friend std::ostream& operator<<(std::ostream& os, const String& xstr);
	//필자가 작성 -> return is를 하지 않으니 오류 발생
	//friend void operator>>(std::istream& is, const String& str); 
	friend std::istream& operator>>(std::istream& is, String& xstr); 
};


