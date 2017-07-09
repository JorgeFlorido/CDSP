// CDSP.Framework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Window.h"
#include "IFrame.h"
#include <iostream>


int main()
{
	Window w = Window();
	Window h = Window();
	w.Triangular(16);
	h.BlackmanHarris(16);

	BaseFrame a = w + h;


	IFrame im = IFrame();

	for (size_t i = 0; i < a.Size(); i++)
	{
		cout << a.Get(i) << endl;
	}
	system("pause");
    return 0;
}

