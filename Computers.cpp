#include <iostream>
#include "Computers.h"
Computers::Computers() {
	std::cout << "Constructor Default Computes  " <<this<< endl;
}
Computers::Computers(const int idPr)
{
	this->nameProd = "Computers";
	this->maxProd = 10;
	this->currProd = 0;
	this->idDep = 1;// �������� � �������� �����������
	this->idStore = 1;
	this->idProd = idPr;//����� �� ������. �� ����� �������� �������
	this->keybord = 20;
	this->mouse = 50;
	std::cout << nameProd << " Constructor  idProd = " << idProd << "  " << this << endl;
}
void Computers::addProd(int idProd)//��������� �� ����� �������
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
void  Computers::subProd(int idProd)//�������  �������
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