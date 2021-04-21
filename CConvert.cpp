#include <iostream>
#include <string.h>

#include "CConvert.h"
#include "CReceive.h"


long CConvert::Sum()
{
	std::string str = GetString();
	str.substr(str.size - 1, 1);
}
long CConvert::Calc(int n)
{
	
}
long CConvert::Exp(int num, int index)
{
	long powered = 1;
	long buf = 1;
	if (index == 0) return powered;
	for (int ic = 1; ic <= index; ic++)
	{
		buf *= num;
	}
	powered = buf;

	return powered;
}