#include <iostream>
#include "Seller.h"
#include "Computers.h"
#include "Department.h"
int main() {
	int temp;
	int ofsetArr = 5;//�������� � �������
	Seller* mySelf = new Seller();
	mySelf->orderDepar();//���������� �����
	mySelf->moveProdut(mySelf->returnPoint("Computers", ofsetArr),ofsetArr);//������  ��������� �� ������
	mySelf->moveProdut(mySelf->returnPoint("Lactops", ofsetArr), ofsetArr);//������ ������� �� ������
	mySelf->moveProdut(mySelf->returnPoint("Monitors", ofsetArr),ofsetArr);//������ �������� �� ������
	mySelf->moveProdut(mySelf->returnPoint("Telephons", ofsetArr),ofsetArr);//������ ��������� �� ������
	std::cin >> temp;
	return 0;
}