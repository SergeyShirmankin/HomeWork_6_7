#include <iostream>
#include "CashCheck.h"
CashCheck::CashCheck()//конструктор чека
        	{
				cout << "Constructor CashCheck " << this << endl;
				number = 100;
				nameStore = "Electronic";
				nameProduct = "Monitor Yamaha 512";
				Price = 100.5;
			}
CashCheck* CashCheck::getDataCheck(char* nameProduct)//Забрать данные с чека
			{
				CashCheck*	pCheck = new CashCheck(); //Создания чека ????
				return pCheck;
			}
	