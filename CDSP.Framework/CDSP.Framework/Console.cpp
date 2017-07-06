// CDSP.Framework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Window.h"
#include "IFrame.h"
#include <iostream>


int main()
{
	Window w = Window();
	w.Triangular(16);

	IFrame im = IFrame();

	for (size_t i = 0; i < im.Size(); i++)
	{
		cout << w.Get(i) << endl;
	}
	system("pause");
    return 0;
}

