#pragma once
#include "Lactops.h"
#include "Monitors.h" 
#include "Computers.h"


class ComputerTechnology  : public Computers,Lactops//Компьютерная техника. Наследдует: Lactops, Monitors, Computers
//class ComputerTechnology : public Computers//Компьютерная техника. Наследдует: Lactops, Monitors, Computers
{
public:
	ComputerTechnology();
	ComputerTechnology(const int idPr);
//	void Show() override;
};
