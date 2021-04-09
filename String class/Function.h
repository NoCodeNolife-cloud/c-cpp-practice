#pragma once
#include <iostream>
#include "String.h"
using namespace std;

bool operator<(const String& st, const String& st2);
bool operator>(const String& st1, const String& st2);
bool operator==(const String& st1, const String& st2);
ostream& operator<<(ostream& os, const String& st);
istream& operator>>(istream& is, String& st);