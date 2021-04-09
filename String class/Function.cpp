#include "Function.h"
#include "String.h"
bool operator<(const String& st, const String& st2)
{
	return (strcmp(st.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
	return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
	return (strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}

istream& operator>>(istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is) {
		st = temp;
	}
	while (is && is.get() != '\n') {
		continue;
	}
	return is;
}