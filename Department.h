#pragma once
#include "Store.h"
#include "Computers.h"
#include "Lactops.h"
#include "Monitors.h"
#include "Telephons.h"
//Абстракный класс Отделы на складе по продаже электроники
class Department : virtual public Store // 
	 {
public:
	Department(char* name, const int size, int numbSt);//Конструктор  
	Computers* getArrayCom(int ofsetArray);
	Lactops* getArrayLact(int ofsetArray);//Геттеры
	Monitors* getArrayMonit(int ofsetArray);
	Telephons* getArrayTeleph(int ofsetArray);
protected:
	Computers* arrayComput[10];//Указатель на статический массив  для компьютера
	Lactops* arrayLact[10];// Указатель на статический массив  для ноутбука
	Monitors* arrayMonit[10];//Указатель на статический массив для компьютера
	Telephons* arrayTeleph[10];//Указатель на статический массив для телефонов

	char* nameDep;
	const int sizeDep;

};