#include "Number.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Number::Number(double N) : number(N)	
{ }
Number::Number(const Number& num)
{
	this->number = num.number;
}	
Number::~Number()
{}
Number::operator string() const
{
	stringstream ss;
	ss << " " << number << endl;
	return ss.str();
}
Number operator -(const Number& num1, const Number& num2)
{
	return Number(num1.number - num2.number);
}
Number operator *(const Number& num1, const Number& num2)
{
	return Number(num1.number * num2.number);
}
ostream& operator <<(ostream& out, const Number& num)
{
	out << string(num);
	return out;
}
istream& operator >>(istream& in, Number& num)
{
	cout << "Number = "; in >> num.number;
	return in;
}