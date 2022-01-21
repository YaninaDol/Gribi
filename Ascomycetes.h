#include "True_grib.h"
class Ascomycetes:public True_grib
{
protected:
	int grani;
public:
	Ascomycetes():True_grib()
	{
		this->grani = 0;
	}
	Ascomycetes(string name,float H,float R,int Chr,bool eat,int Grani):True_grib(name,H,R,Chr,eat)
	{
		this->grani = Grani;
	}
	virtual void print()
	{
		True_grib::print();
		cout << " Кол-во граней (перегородок): " << this->grani<< endl;
	}
};

