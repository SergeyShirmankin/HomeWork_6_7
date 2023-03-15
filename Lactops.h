#pragma once
#include "IProduct.h"
class Lactops : public   IProduct //Ноутбуки
{
public:
	Lactops();
	Lactops(int idPr);//Конструктор

//	void Show() override;
	void addProd(int idProd)override;
	void subProd(int idProd)override;
protected:
	int numbAdPower;//количество адаптеров питания
};