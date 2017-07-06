#include "stdafx.h"
#include "BaseFrame.h"


BaseFrame::BaseFrame() {
	this->samples.reserve(0);
}

BaseFrame::BaseFrame(size_t size) {
	this->samples.reserve(size);
}

BaseFrame::BaseFrame(const BaseFrame& copy) {
	this->samples = copy.samples;
}

BaseFrame::~BaseFrame() {

}

BaseFrame& BaseFrame::operator=(const BaseFrame& copy) {
	this->samples = copy.samples;
	return *this;
}

BaseFrame::WindowSizeType BaseFrame::Size() {
	return this->samples.size();
}

BaseFrame::WindowIterator BaseFrame::Begin() {
	return this->samples.begin();
}

BaseFrame::WindowIterator BaseFrame::End() {
	return this->samples.end();
}

void BaseFrame::Push(double v) {
	this->samples.push_back(v);
}

void BaseFrame::Pop() {
	this->samples.pop_back();
}


// Init with zeros
int BaseFrame::Init(size_t size) {
	try
	{
		this->samples.resize(size);
		for (size_t i = 0; i < size; ++i)
		{
			this->samples[i] = 0;
		}

		return 0;
	}
	catch (const std::exception&)
	{
		return -1;
	}
}


