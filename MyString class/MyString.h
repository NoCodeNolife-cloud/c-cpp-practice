#pragma once
class MyString
{
private:
	MyString(unsigned short len) {
		itsMyString = new char[len + 1];
		for (unsigned short i = 0; i < len; i++) {
			itsMyString[i] = '\0';
		}
		itsLen = len;
		return;
	}
	char* itsMyString;
	unsigned short itsLen;
public:
	MyString() {
		itsMyString = new char[1];
		itsMyString[0] = '\0';
		itsLen = 0;
		return;
	}
	~MyString() {
		delete[] itsMyString;
		itsLen = 0;
		return;
	}
	MyString(const char* const cMyString) {
		itsLen = strlen(cMyString);
		itsMyString = new char[itsLen + 1];
		for (unsigned short i = 0; i < itsLen; i++) {
			itsMyString[i] = cMyString[i];
		}
		itsMyString[itsLen] = '\0';
		return;
	};
	MyString(const MyString& rhs) {
		itsLen = rhs.getLen();
		itsMyString = new char[itsLen + 1];
		for (unsigned short i = 0; i < itsLen; i++) {
			itsMyString[i] = rhs[i];
		}
		itsMyString[itsLen] = '\0';
		return;
	}
	unsigned short getLen()const {
		return itsLen;
	}
	const char* getMyString()const {
		return itsMyString;
	}
	MyString& operator=(const MyString& rhs) {
		if (this == &rhs) {
			return *this;
		}
		delete[]itsMyString;
		itsLen = rhs.getLen();
		itsMyString = new char[itsLen + 1];
		for (unsigned short i = 0; i < itsLen; i++) {
			itsMyString[i] = rhs[i];
		}
		itsMyString[itsLen] = '\0';
		return *this;
	}
	char& operator[](unsigned short offset) {
		if (offset > itsLen) {
			return itsMyString[itsLen - 1];
		}
		else {
			return itsMyString[offset];
		}
	}
	char operator[](unsigned short offset)const {
		if (offset > itsLen) {
			return itsMyString[itsLen - 1];
		}
		else {
			return itsMyString[offset];
		}
	}
	MyString operator+(const MyString& rhs) {
		unsigned short totalLen = itsLen + rhs.getLen();
		MyString temp(totalLen);
		unsigned short i = 0;
		for (i = 0; i < itsLen; i++) {
			temp[i] = itsMyString[i];
		}
		for (unsigned short j = 0; j < rhs.getLen(); j++, i++) {
			temp[i] = rhs[j];
		}
		temp[totalLen] = '\0';
		return temp;
	}
	void operator+=(const MyString& rhs) {
		unsigned short rhsLen = rhs.getLen();
		unsigned short totalLen = itsLen + rhsLen;
		MyString temp(totalLen);
		unsigned short i = 0;
		for (i = 0; i < itsLen; i++) {
			temp[i] = itsMyString[i];
		}
		for (unsigned short j = 0; j < rhs.getLen(); j++, i++) {
			temp[i] = rhs[i - itsLen];
		}
		temp[totalLen] = '\0';
		*this = temp;
	}
};
