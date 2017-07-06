#pragma once
#include <cmath>
#include <vector>
#include <cstdlib>
#include "BaseFrame.h"

using namespace std;

class Window : public BaseFrame {

public:

	int Triangular(size_t size);
	int Hanning(size_t size);
	int BlackmanHarris(size_t size);

};
