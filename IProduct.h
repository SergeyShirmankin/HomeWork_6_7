#pragma once
#include <iostream>
using namespace std;
class IProduct // Абстракный класс Отделы на складе по продаже электроники
{
public:
	//Товар. Абстракный класс. для (Мониторов,Компьюторов,Ноутбуков и телефонов.)
	//virtual void Show() = 0;
	IProduct(const int idPr)
	{
		std::cout << "Constructor IProduct  " <<this<< endl;
	}
	IProduct()
	{
		std::cout << "Constructor Default IProduct " << this<<endl;
	}
	virtual ~IProduct() = default;
//-----------------------------------------------------------------------------------------------
	virtual void addProd(int idProd) = 0;
	virtual void subProd(int idProd) = 0;
//-----------------------------------------------------------------------------------------
protected:
	char * nameProd;// имя продукта
	int idProd;// номер продукта
	int maxProd;// количество штук в партии
	int currProd;//номер продукта с которым производятся операции
	int idDep;//номер отдела на складе
	int idStore;//номер склада
};