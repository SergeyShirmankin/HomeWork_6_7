#pragma once
#include "Department.h"
#include "ComputerTechnology.h"
class Seller  // �������� ������� � ��������
{
public:
	Seller();//�������� 
	void orderDepar();//���������� ����� � ��������� �� �����
	void moveProdut(IProduct * objProduct, int ofsetArray);//��������� �����������, ����������� ������ �� ������ 
	IProduct* returnPoint(char * name, int ofsetArray);//�������� ��������� �� �����
//	void Show() override;
protected:
	Department* depMonitor;//��������� ������ ��� ��������� 
	Department* depTelephone;//��������� ������ ��� ���������
	Department* depLactop;//��������� ������ ��� ���������
	Department* depComputer;//��������� ������ ��� �����������
	ComputerTechnology* depTechnology;////��������� ������ ��� ����� ����������
};