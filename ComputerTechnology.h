#pragma once
#include "Lactops.h"
#include "Monitors.h" 
#include "Computers.h"


class ComputerTechnology  : public Computers,Lactops//������������ �������. ����������: Lactops, Monitors, Computers
//class ComputerTechnology : public Computers//������������ �������. ����������: Lactops, Monitors, Computers
{
public:
	ComputerTechnology();
	ComputerTechnology(const int idPr);
//	void Show() override;
};
