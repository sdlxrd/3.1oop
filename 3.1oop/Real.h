#pragma once
#include "Number.h"

class Real : public Number
{
private:
	int step;
public:
	Real();
	Real(int step, double number);
	Real(const Real& x);
	~Real();
	
	double getStep() const { return step; }
	void setStep(int step) { this->step = step; }

	operator string();

	friend ostream& operator<<(ostream& os, Real& x);
	friend istream& operator>>(istream& is, Real& x);
	
	double Square(int step);
	double Step(int step);
};

