#pragma once
#include<iostream>
using namespace std;
class CashCheck {//кассовый чек от аппарата
public:
	  CashCheck();//конструктор чека   
	  CashCheck*  getDataCheck(char* nameProduct);//Забрать данные с чека	
private:
				int number;//номер кассового чека
				char * nameStore;//Название магазина
				char * nameProduct;//Название товара 
				float Price;// цена товара
	};