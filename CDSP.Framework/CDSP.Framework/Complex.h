#pragma once
#include <cmath>

class Complex
{
public:
	Complex();
	Complex(const Complex& c);
	Complex(double real, double imag);
	~Complex();
	void SetReal(double value);
	void SetImag(double value);
	double Abs();
	double Arg();
private:
	double real;
	double imag;
};

