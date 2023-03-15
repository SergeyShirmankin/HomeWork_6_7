#include <iostream>
#include "Lactops.h"
Lactops::Lactops() {
	std::cout << " Constructor Default Lactop  " <<this<< std::endl;
}
Lactops::Lactops(int idPr)
{
	this->nameProd = "Lactops";
	this->maxProd = 15;
	this->currProd = 0;
	this->idDep = 2;// �������� � �������� �����������
	this->idStore = 1;
	this->idProd = idPr;//����� �� ������ ��� ��������� �� ����� ����
	this->numbAdPower = 16;
	std::cout << nameProd << " Constructor  idProd = " << idProd << "  " << this << endl;
}
void Lactops::addProd(int idProd)//��������� �� ����� �������
{
	if (this->currProd <= this->maxProd)
	{
		this->idProd++;
		this->currProd++;
	}
	else
	{
		std::cout << "Store  have not place for Lactops" << std::endl;
	}

}
void  Lactops::subProd(int idProd)//�������  �������
{
	if (0 <= this->currProd)
	{
		this->idProd--;
		this->currProd--;
	}
	else
	{
		std::cout << "Store  have not Lactops" << std::endl;
	}
}