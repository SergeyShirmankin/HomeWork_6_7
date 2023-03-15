#include <iostream>
#include "ComputerTechnology.h"//наследование от трех родителей
ComputerTechnology::ComputerTechnology()
{
	this->keybord = 50;
	this->mouse = 70;
	this->numbAdPower = 20;
	std::cout << "Constructor Computer Technology  the default  " << this << std::endl;
}
ComputerTechnology::ComputerTechnology(const int idPr)
{
	this->keybord = 50;
	this->mouse = 70;
	this->numbAdPower = 20;
	std::cout << "Constructor Computer Technology  the default" << this << std::endl;
}