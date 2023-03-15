#pragma once
#include "Department.h"
#include "ComputerTechnology.h"
class Seller  // Кассовый аппарат в магазине
{
public:
	Seller();//Продавец 
	void orderDepar();//Заказываем товар и загружаем на склад
	void moveProdut(IProduct * objProduct, int ofsetArray);//Реализуем полиформизм, перемещение товара со склада 
	IProduct* returnPoint(char * name, int ofsetArray);//Забираем указатель на товар
//	void Show() override;
protected:
	Department* depMonitor;//Указатели отдела для Мониторов 
	Department* depTelephone;//Указатели отдела для Телефонов
	Department* depLactop;//Указатели отдела для Ноутбуков
	Department* depComputer;//Указатели отдела для Компьютеров
	ComputerTechnology* depTechnology;////Указатели отдела для всего остального
};