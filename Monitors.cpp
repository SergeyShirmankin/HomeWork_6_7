#include <iostream>
#include "Monitors.h"
Monitors::Monitors(int idPr)
{
	this->nameProd = "Monitors";
	this->maxProd = 7;
	this->currProd = 0;
	this->idDep = 3;// �������� � �������� �����������
	this->idStore = 1;
	this->idProd = idPr;//����� �� ������ ��� ��������� �� ����� ����
	std::cout << nameProd << "Constructor  idProd = " << idProd << "  " << this << endl;
}
Monitors::Monitors()
{
	std::cout << "Constructor Default  Monitor  " <<this<< std::endl;
}
void Monitors::addProd(int idProd)//��������� �� ����� �������
{
	if (this->currProd <= this->maxProd)
	{
		this->idProd++;
		this->currProd++;
	}
	else
	{
		std::cout << "Store  have not place for Monitors" << std::endl;
	}

}
void  Monitors::subProd(int idProd)//�������  �������
{
	if (0 <= this->currProd)
	{
		this->idProd--;
		this->currProd--;
	}
	else
	{
		std::cout << "Store  have not Monitors" << std::endl;
	}
}