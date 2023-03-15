#pragma once
#include "Store.h"
#include "Computers.h"
#include "Lactops.h"
#include "Monitors.h"
#include "Telephons.h"
//���������� ����� ������ �� ������ �� ������� �����������
class Department : virtual public Store // 
	 {
public:
	Department(char* name, const int size, int numbSt);//�����������  
	Computers* getArrayCom(int ofsetArray);
	Lactops* getArrayLact(int ofsetArray);//�������
	Monitors* getArrayMonit(int ofsetArray);
	Telephons* getArrayTeleph(int ofsetArray);
protected:
	Computers* arrayComput[10];//��������� �� ����������� ������  ��� ����������
	Lactops* arrayLact[10];// ��������� �� ����������� ������  ��� ��������
	Monitors* arrayMonit[10];//��������� �� ����������� ������ ��� ����������
	Telephons* arrayTeleph[10];//��������� �� ����������� ������ ��� ���������

	char* nameDep;
	const int sizeDep;

};