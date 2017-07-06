#include "stdafx.h"
#include "Window.h"

#define PI 3.14159265358979323846

int Window::BlackmanHarris(size_t size) {

	const float a0 = 0.35875f;
	const float a1 = 0.48829f;
	const float a2 = 0.14128f;
	const float a3 = 0.01168f;

	int N = size - 1;

	try
	{
		this->samples.resize(size);
		for (size_t i = 0; i < size; ++i)
		{
			this->samples[i] = (a0 - (a1 * cosf((2.0f * PI * i) / N)) + (a2 * cosf((4.0f * PI * i) / N)) - (a3 * cosf((6.0f * PI * i) / N)));
		}

		return 0;
	}
	catch (const exception&)
	{
		return -1;
	}
}

int Window::Hanning(size_t size) {

	int N = size - 1;

	try
	{
		this->samples.resize(size);
		for (size_t i = 0; i < size; ++i)
		{
			this->samples[i] = 0.5 * (1-cosf(2*PI*i/N));
		}

		return 0;
	}
	catch (const exception&)
	{
		return -1;
	}
}

int Window::Triangular(size_t size) {

	try
	{
		this->samples.resize(size);

		if (size % 2 != 0)
		{
			int h2 = (size + 1) / 2 - 1;
			for (size_t i = 0; i < h2; ++i)
			{
				this->samples[i] = float(2 * i / (float)size);
				this->samples[i + h2] = float(2 - (2 * (i + h2)) / (float)size);
			}
		}
		else {
			int h2 = (size / 2) - 1;
			for (size_t i = 0; i < h2; ++i)
			{
				this->samples[i] = float((2 * i - 1) / (float)size);
				this->samples[i + h2] = float(2 - (2 * (i + h2) - 1) / (float)size);
			}
		}

		return 0;
	}
	catch (const exception&)
	{
		return -1;
	}

}