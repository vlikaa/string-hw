#pragma once

#include <iostream>

class String
{
public:

	~String();
	String();
	String(const int capacity);
	String(const char* string);

	void setStr(const char* string);
	char* getStr();
	static int getCount();
	char Front();
	char Back();
	void Append(const char* string);
	void Append(const String& string);
	int Find(const char symbol);
	int ReverseFind(const char symbol);
	void Clear();
	char* Substring(const int index);
	bool IsEmpty();
	void LeftTrim();
	void RightTrim();
	void Trim();
	void ToUpper();
	void ToLower();
	void Reverse();
	bool StartsWith(const char* string);
	bool StartsWith(const String& string);
	bool EndsWith(const char* string);
	bool EndsWith(const String& string);

private:
	static int count;
	char* string;
	int size;
	int capacity;
	void relocate();
	
};

