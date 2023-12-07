#pragma once

#include <iostream>

class String
{
public:
	~String();
	String();
	String(const int length);
	String(const char* string);
	void setStr(const char* string);
	char* getStr();
private:
	char* string;
	int length;
};

