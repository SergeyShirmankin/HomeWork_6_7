#include <iostream>
#include "Seller.h"
#include "Computers.h"
#include "Department.h"
int main() {
	int temp;
	int ofsetArr = 5;//смещение в массиве
	Seller* mySelf = new Seller();
	mySelf->orderDepar();//Заказываем товар
	mySelf->moveProdut(mySelf->returnPoint("Computers", ofsetArr),ofsetArr);//Удаляю  Компьютер со склада
	mySelf->moveProdut(mySelf->returnPoint("Lactops", ofsetArr), ofsetArr);//Удаляю Ноутбук со склада
	mySelf->moveProdut(mySelf->returnPoint("Monitors", ofsetArr),ofsetArr);//Удаляю Монитора со склада
	mySelf->moveProdut(mySelf->returnPoint("Telephons", ofsetArr),ofsetArr);//Удаляю Компьютер со склада
	std::cin >> temp;
	return 0;
}