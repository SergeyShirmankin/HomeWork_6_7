#include <iostream>
#include "Department.h"
Department::Department(char* name, const int size, int NumbSt) :nameDep(name), sizeDep(size), Store(NumbSt)//инициализация 
{
	if (nameDep == "Computers")
	{

		for (int i = 0; i < size; ++i)
		{
			arrayComput[i] = new Computers(i);
		}
	}
	else if (nameDep == "Lactops")
	{
		for (int i = 0; i < size; ++i)
		{
			arrayLact[i] = new Lactops(i);
		}
	}
	else if (nameDep == "Monitors")
	{
		for (int i = 0; i < size; ++i)
		{
			arrayMonit[i] = new Monitors(i);
		}
	}
	else if (nameDep == "Telephons")
	{
		for (int i = 0; i < size; ++i)
		{
			arrayTeleph[i] = new Telephons(i);
		}
	}
}
Computers* Department::getArrayCom(int ofsetArray)
{
	return arrayComput[ofsetArray];
}
Lactops* Department::getArrayLact(int ofsetArray)
{
	return arrayLact[ofsetArray];
}
Monitors* Department::getArrayMonit(int ofsetArray)
{
    return arrayMonit[ofsetArray];
}
Telephons* Department::getArrayTeleph(int ofsetArray)
{
	return arrayTeleph[ofsetArray];
}
