#include <iostream>
#include "String.h"
#include <cstring>
using namespace std;

int String::num_strings = 0;

String::String(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_strings++;
	return;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
	return;
}

String::String(const String& st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	return;
}

String::~String()
{
	--num_strings;
	delete[]str;
	return;
}

String& String::operator=(const String& st)
{
	if (this == &st) {
		return *this;
	}
	delete[]str;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	return*this;
}

String& String::operator=(const char* s)
{
	delete[]str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}

char& String::operator[](int i)
{
	return str[i];
}

const char& String::operator[](int i) const
{
	return str[i];
}

int String::HowMany()
{
	return num_strings;
}