#pragma once
#include <iostream>
#include <string>
#include <sstream>
using	namespace std;
class Number
{
private:
	double number;
public:
	Number(const double N = 0);
	Number(const Number& num);
	~Number();

	double getNumber() const { return number; }
	void setNumber(double number) { this->number = number; }
	
	operator string () const;
	
	friend Number operator - (const Number& , const Number& );
	friend Number operator * (const Number& , const Number& );
	friend istream& operator >> (istream& , Number& );
	friend ostream& operator << (ostream& , const Number& );
	
};
