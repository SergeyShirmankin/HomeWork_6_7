#include <iostream>
#include "Telephons.h"
Telephons::Telephons()
{
	this->nameProd = "Telephons";
	this->maxProd = 30;
	this->currProd = 0;
	this->idDep = 4;// название в цифровом эквиваленте
	this->idStore = 1;
	this->idProd = 0;//номер на складе при активации он равен нулю
}
Telephons::Telephons(const int idPr)
{
	this->nameProd = "Telephons";
	this->maxProd = 10;
	this->currProd = 0;
	this->idDep = 1;// название в цифровом эквиваленте
	this->idStore = 1;
	this->idProd = idPr;//номер на складе. Он равен элементу массива
	std::cout << nameProd << " Constructor  idProd = " << idProd << "  " << this << endl;
}
void Telephons::addProd(int idProd)//Добавляем на склад продукт
{
	if (this->currProd <= this->maxProd)
	{
		this->idProd++;
		this->currProd++;
	}
	else
	{
		std::cout << "Store  have not place for Computers" << std::endl;
	}

}
void  Telephons::subProd(int idProd)//Продаем  продукт
{
	if (0 <= this->currProd)
	{
		this->idProd--;
		this->currProd--;
	}
	else
	{
		std::cout << "Store  have not Computers" << std::endl;
	}
}