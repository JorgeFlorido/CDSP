#pragma once
#include <cmath>
#include <vector>
#include <cstdlib>
#include "BaseFrame.h"
#include "Complex.h"

class ComplexFrame
{
public:

	typedef vector<Complex> Container;

	void Set(double real, double imag);
	void Push(double real, double imag);

private:
	Container c;
};

