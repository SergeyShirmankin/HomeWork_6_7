#pragma once
#include "IProduct.h"
class Computers :  public virtual  IProduct //����������
{
public:
	Computers(); 
	Computers(const int idPr);//�����������

	//void Show() override;
	void addProd(int idProd)override;
	void subProd(int idProd)override;
protected:
	int mouse;//���������� �����
	int keybord;//���������� ���������
};