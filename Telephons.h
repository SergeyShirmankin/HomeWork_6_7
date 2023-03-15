#pragma once
#include "IProduct.h"
class Telephons :  public IProduct //Телефоны
{
public:
	Telephons();//Конструктор
	Telephons(const int idPr);//Конструктор
//	void Show() override;
	void addProd(int idProd)override;
	void subProd(int idProd)override;

protected:
  
};