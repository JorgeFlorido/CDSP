#include "stdafx.h"
#include "ComplexFrame.h"

using namespace std;

void ComplexFrame::Push(double real, double imag) {
	Complex n = Complex::Complex(real, imag);
	c.push_back(n);
}
