#include <iostream>
#include "ComputerTechnology.h"
#include "Department.h"
#include "Seller.h"
Seller::Seller() {
	std::cout << "Default Seller constructor " << this << std::endl;
}
void Seller::orderDepar() {//Заказываем товар и загружаем на склад
	depMonitor=new Department("Monitors", 10, 1);
	depTelephone =new Department("Telephons", 10, 1);
	depLactop= new Department ("Lactops", 10, 1);
	depComputer = new Department ("Computers", 10, 1);
	depTechnology = new ComputerTechnology (1);
}
IProduct* Seller::returnPoint(char * name,int ofsetArray)//Забираем указатель через  указатель родителя 
{
	if (name == "Computers")
	{
	   return	this->depComputer->getArrayCom( ofsetArray);
	}
	else if (name == "Lactops")
	{
		return	this->depLactop->getArrayLact( ofsetArray);
	}
	else if (name == "Monitors")
	{
		return 	this->depMonitor->getArrayMonit( ofsetArray);
	}
	else if (name == "Telephons")
	{
		return	this->depTelephone->getArrayTeleph( ofsetArray);
	}
}
void Seller::moveProdut(IProduct * objProduct, int ofsetArray)//Реализуем полиформизм, перемещение товара со склада 
{
	objProduct->subProd(ofsetArray);//Удаляем товар со склада
}
