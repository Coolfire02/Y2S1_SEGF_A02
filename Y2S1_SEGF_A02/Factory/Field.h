#pragma once
#include <string>

class Field
{
private:
	const int m_field_no;
public:
	Field(int n) : m_field_no(n) {};
	int getValue() { return m_field_no; }
	std::string toString() { return "ObjectType-Field[m_field_no: " + std::to_string(m_field_no) + "]";  };
};

