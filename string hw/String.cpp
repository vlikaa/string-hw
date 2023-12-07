#include "String.h"

String::~String()
{
	delete[] string;
}

String::String()
{
	length = 80;
	string = new char[length];
}

String::String(const int length)
{
	this->length = length;
	string = new char[this->length];
}

String::String(const char* string)
{
	length = strlen(string);
	this->string = new char[length];
	for (int i = 0; i < length; i++) {
		this->string[i] = string[i];
	}
}

void String::setStr(const char* string)
{

	for (int i = 0; i < strlen(string) + 1; i++) {
		this->string[i] = string[i];
	}
}

char* String::getStr()
{
	return string;
}

