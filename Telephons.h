#pragma once
#include "IProduct.h"
class Telephons :  public IProduct //��������
{
public:
	Telephons();//�����������
	Telephons(const int idPr);//�����������
//	void Show() override;
	void addProd(int idProd)override;
	void subProd(int idProd)override;

protected:
  
};