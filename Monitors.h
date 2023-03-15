#pragma once
#include "IProduct.h"
class Monitors :public IProduct //Мониторы
{
public:
	Monitors(int idPr);//Конструктор
	Monitors();
//	void Show() override;
	void addProd(int idProd)override;
	void subProd(int idProd)override;
protected:

};