#include "Real.h"
#include "Number.h"
#include <math.h>
#define PI 3.14159265358979323846

Real::Real()
{}
Real::Real(int step, double number)
{
	setStep(step);
	setNumber(number);
}
Real::Real(const Real& x)
{
	double KS = x.getStep();
	double number = x.getNumber();
	setStep(KS);
	setNumber(number);
}
Real::~Real()
{}
Real::operator string()
{
	stringstream ss;
	ss << "square = " << Square(step) << endl;
	ss << "step of Pi = " << Step(step) << endl;
	return ss.str();
}
ostream& operator<<(ostream& out, Real& r)
{
	out << string(r);
	return out;
}
istream& operator>>(istream& in, Real& r)
{
	int stepin;
	double numb;

	cout << "Enter number: ";in >> numb;
	cout << "Enter step: ";in >> stepin;
	cout << endl;
	r.setStep(stepin);
	r.setNumber(numb);

	return in;
}
double Real::Square(int step)
{

	return pow(getNumber(), (1. / step));
}
double Real::Step(int step)
{
	return pow(PI, step);
}