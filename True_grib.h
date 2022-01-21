#include "Albugo_Candida.h"
class True_grib :public Grib
{
protected:
	int chromosome;
	bool eat;
public:
	True_grib() :Grib()
	{
		this->chromosome = 2;
		this->eat = 0;
		
	}
	True_grib(string name,float H,float R,int Chr,bool eat) :Grib(name,H,R)
	{
		this->chromosome = Chr;
		this->eat = eat;
	}
	True_grib(string name, float R, int Chr, bool eat) :Grib(name, R)
	{
		this->chromosome = Chr;
		this->eat = eat;
	}
	
	virtual void print()
	{
		Grib::print();
		cout << " Классификация: НАСТОЯЩИЕ ГРИБЫ  \n Вид: ";
		if (this->eat != 0)cout << " сьедобный " << endl;
		else cout << " не сьедобный " << endl;
		cout << " Кол-во хромосом: " << this->chromosome << endl;
	}
};

