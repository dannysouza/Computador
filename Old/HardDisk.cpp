#include <iostream>
#include "HardDisk.h"

using namespace std;

HardDisk::HardDisk(const float &size)
{
	if
	this->hdSize = size;
}

HardDisk::~HardDisk()
{
}

float HardDisk::formatHD()
{
	cout << "\n Hard disk formatted.";
	return hdSize;
}
