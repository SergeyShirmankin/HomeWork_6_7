#include <iostream>
#include "Monitors.h"
Monitors::Monitors(int idPr)
{
	this->nameProd = "Monitors";
	this->maxProd = 7;
	this->currProd = 0;
	this->idDep = 3;// название в цифровом эквиваленте
	this->idStore = 1;
	this->idProd = idPr;//номер на складе при активации он равен нулю
	std::cout << nameProd << "Constructor  idProd = " << idProd << "  " << this << endl;
}
Monitors::Monitors()
{
	std::cout << "Constructor Default  Monitor  " <<this<< std::endl;
}
void Monitors::addProd(int idProd)//Добавляем на склад продукт
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
void  Monitors::subProd(int idProd)//Продаем  продукт
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