#include <iostream>
#include "CashCheck.h"
CashCheck::CashCheck()//����������� ����
        	{
				cout << "Constructor CashCheck " << this << endl;
				number = 100;
				nameStore = "Electronic";
				nameProduct = "Monitor Yamaha 512";
				Price = 100.5;
			}
CashCheck* CashCheck::getDataCheck(char* nameProduct)//������� ������ � ����
			{
				CashCheck*	pCheck = new CashCheck(); //�������� ���� ????
				return pCheck;
			}
	