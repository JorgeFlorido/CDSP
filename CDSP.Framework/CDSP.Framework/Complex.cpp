#include "stdafx.h"
#include "Complex.h"


Complex::Complex()
{
}

Complex::Complex(const Complex& c)
{
	real = c.real;
	imag = c.imag;
}

Complex::Complex(double r, double i) {
	this->real = r;
	this->imag = i;
}

Complex::~Complex()
{
}

void Complex::SetReal(double value) {
	real = value;
}

void Complex::SetImag(double value) {
	imag = value;
}

double Complex::Abs() {
	return sqrt(pow(real, 2.0) + pow(imag, 2.0));
}

double Complex::Arg() {
	return atan2(real, imag);
}
