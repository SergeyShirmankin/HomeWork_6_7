#include <iostream>
#include "Telephons.h"
Telephons::Telephons()
{
	this->nameProd = "Telephons";
	this->maxProd = 30;
	this->currProd = 0;
	this->idDep = 4;// �������� � �������� �����������
	this->idStore = 1;
	this->idProd = 0;//����� �� ������ ��� ��������� �� ����� ����
}
Telephons::Telephons(const int idPr)
{
	this->nameProd = "Telephons";
	this->maxProd = 10;
	this->currProd = 0;
	this->idDep = 1;// �������� � �������� �����������
	this->idStore = 1;
	this->idProd = idPr;//����� �� ������. �� ����� �������� �������
	std::cout << nameProd << " Constructor  idProd = " << idProd << "  " << this << endl;
}
void Telephons::addProd(int idProd)//��������� �� ����� �������
{
	if (this->currProd <= this->maxProd)
	{
		this->idProd++;
		this->currProd++;
	}
	else
	{
		std::cout << "Store  have not place for Computers" << std::endl;
	}

}
void  Telephons::subProd(int idProd)//�������  �������
{
	if (0 <= this->currProd)
	{
		this->idProd--;
		this->currProd--;
	}
	else
	{
		std::cout << "Store  have not Computers" << std::endl;
	}
}