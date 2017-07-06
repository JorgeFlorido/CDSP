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

	typedef vector<double> Container;
	typedef Container::size_type WindowSizeType;
	typedef Container::iterator WindowIterator;
	typedef Container::const_iterator ConstWindowIterator;

	BaseFrame& operator=(const BaseFrame& copy);

	WindowSizeType Size();
	WindowIterator Begin();
	WindowIterator End();

	virtual double Get(size_t p);
	virtual void Set(size_t p, double value);

	void Push(double value);
	void Pop();

	int Init(size_t size);

protected:
	Container samples;
};

