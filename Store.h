#pragma once
#include "IShop.h"
//#include "Department.h" �������� � ������  �2504
class Store :  public IShop // ����� � ��������
{
public:
	Store(int numbSt);//����������� ������

//	void Show() override;
protected:
	int numbStore;//����� ������
};