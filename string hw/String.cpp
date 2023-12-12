#include "String.h"

int String::count = 0;

String::~String()
{
	delete[] string;
}

String::String()
{
	capacity = 80;
	size = 0;
	string = new char[capacity];
	count++;
}

String::String(const int capacity)
{
	this->capacity = capacity;
	size = 0;
	string = new char[this->capacity];
	count++;
}

String::String(const char* string)
{
	capacity = strlen(string) + 1;
	size = capacity - 1;
	this->string = new char[capacity];
	for (int i = 0; i < capacity; i++) {
		this->string[i] = string[i];
	}
	count++;
}

void String::relocate() {
	char* newString = new char[capacity *= 5];
	for (int i = 0; i < size; i++)
		newString[i] = string[i];

	delete[] string;
	string = newString;
}

void String::setStr(const char* string)
{
	size = strlen(string);
	for (int i = 0; i < size + 1; i++) {
		this->string[i] = string[i];
	}
}

char* String::getStr()
{
	return string;
}

int String::getCount() {
	return count;
}

char String::Front() {
	return string[0];
}

char String::Back() {
	return string[size - 1];
}

void String::Append(const char* string) {
	if (size + strlen(string) + 1 >= capacity)
		relocate();
	for (int i = size, j = 0; j < strlen(string) + 1; i++, j++) {
		this->string[i] = string[j];
	}
	size += strlen(string);
}

int String::Find(const char symbol) {
	for (int i = 0; i < size; i++) {
		if (string[i] == symbol)
			return i;
	}
	return -1;
}

int String::ReverseFind(const char symbol) {
	for (int i = size - 1; i > 0; i--) {
		if (string[i] == symbol)
			return i;
	}
	return -1;
}

void String::Clear() {
	size = 0;
}

char* String::Substring(const int index) {
	return index >= 0 && index < size ? string + index : string;
}

bool String::IsEmpty() {
	return size > 0 ? false : true;
}

void String::LeftTrim() {

}

void String::RightTrim() {

}

void String::Trim() {

}

void String::ToUpper() {
	_strupr_s(string, capacity);
}

void String::ToLower() {
	_strlwr_s(string, capacity);
}

void String::Reverse() {
	char* newString = new char[capacity];
	for (int i = 0, j = size - 1; i < size; i++, j--) {
		newString[i] = string[j];
	}
	newString[size] = '\0';
	delete[] string;
	string = newString;
}

bool String::StartsWith(const char* string) {
	for (int i = 0; i < strlen(string); i++) {
		if (this->string[i] != string[i])
			return false;
	}
	return true;
}

//bool String::StartsWith(const String& string) {
//
//}

bool String::EndsWith(const char* string) {
	int j = strlen(string);
	for (int i = size - 1, j = 0; j < strlen(string); i--, j++) {
		if (this->string[i] != string[j])
			return false;
	}
	return true;
}

//bool EndsWith(const String& string) {
//
//}

