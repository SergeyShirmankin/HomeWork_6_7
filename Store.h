#pragma once
#include "IShop.h"
//#include "Department.h" Приводит к ошибке  С2504
class Store :  public IShop // Склад в магазине
{
public:
	Store(int numbSt);//Конструктор Склада

//	void Show() override;
protected:
	int numbStore;//номер склада
};