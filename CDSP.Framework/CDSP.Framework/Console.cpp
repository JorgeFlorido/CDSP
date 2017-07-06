// CDSP.Framework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Window.h"
#include <iostream>


int main()
{
	Window w = Window();
	w.Init(16);
	w.Triangular(16);
    return 0;
}

