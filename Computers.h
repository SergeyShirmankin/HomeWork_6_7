#pragma once
#include "IProduct.h"
class Computers :  public virtual  IProduct //Компьютеры
{
public:
	Computers(); 
	Computers(const int idPr);//Конструктор

	//void Show() override;
	void addProd(int idProd)override;
	void subProd(int idProd)override;
protected:
	int mouse;//Колтчество мышек
	int keybord;//Количество клавиатур
};