#pragma once
#include <iostream>
using namespace std;
class IProduct // ���������� ����� ������ �� ������ �� ������� �����������
{
public:
	//�����. ���������� �����. ��� (���������,�����������,��������� � ���������.)
	//virtual void Show() = 0;
	IProduct(const int idPr)
	{
		std::cout << "Constructor IProduct  " <<this<< endl;
	}
	IProduct()
	{
		std::cout << "Constructor Default IProduct " << this<<endl;
	}
	virtual ~IProduct() = default;
//-----------------------------------------------------------------------------------------------
	virtual void addProd(int idProd) = 0;
	virtual void subProd(int idProd) = 0;
//-----------------------------------------------------------------------------------------
protected:
	char * nameProd;// ��� ��������
	int idProd;// ����� ��������
	int maxProd;// ���������� ���� � ������
	int currProd;//����� �������� � ������� ������������ ��������
	int idDep;//����� ������ �� ������
	int idStore;//����� ������
};