#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

#pragma once
class BaseFrame
{
public:
	BaseFrame();
	BaseFrame(size_t size);
	BaseFrame(const BaseFrame& copy);
	~BaseFrame();

	typedef vector<float> Container;
	typedef Container::size_type WindowSizeType;
	typedef Container::iterator WindowIterator;
	typedef Container::const_iterator ConstWindowIterator;

	BaseFrame& operator=(const BaseFrame& copy);

	WindowSizeType Size();
	WindowIterator Begin();
	WindowIterator End();

	int Init(size_t size);

protected:
	Container samples;
};

