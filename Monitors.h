#pragma once
#include "IProduct.h"
class Monitors :public IProduct //��������
{
public:
	Monitors(int idPr);//�����������
	Monitors();
//	void Show() override;
	void addProd(int idProd)override;
	void subProd(int idProd)override;
protected:

};