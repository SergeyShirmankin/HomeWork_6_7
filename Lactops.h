#pragma once
#include "IProduct.h"
class Lactops : public   IProduct //��������
{
public:
	Lactops();
	Lactops(int idPr);//�����������

//	void Show() override;
	void addProd(int idProd)override;
	void subProd(int idProd)override;
protected:
	int numbAdPower;//���������� ��������� �������
};