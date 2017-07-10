// CDSP.Framework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Window.h"
#include "ComplexFrame.h"
#include <iostream>


int main()
{

	ComplexFrame im = ComplexFrame();

	for (size_t i = 0; i < 16; i++)
	{
		im.Push(1, 1);
	}
	system("pause");
    return 0;
}

