#pragma once
#include<iostream>
using namespace std;
class CashCheck {//�������� ��� �� ��������
public:
	  CashCheck();//����������� ����   
	  CashCheck*  getDataCheck(char* nameProduct);//������� ������ � ����	
private:
				int number;//����� ��������� ����
				char * nameStore;//�������� ��������
				char * nameProduct;//�������� ������ 
				float Price;// ���� ������
	};