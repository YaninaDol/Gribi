#include "Grib.h"
	class Psevdo_grib:public Grib
{
protected:
	bool plazmodiy;
public:
	Psevdo_grib():Grib()
	{
		this->plazmodiy = 1;
	}
	Psevdo_grib(string name,float R, bool P) :Grib(name,R)
	{
		this->plazmodiy = P;
	}
	bool getPlazmodiy()
	{
		return this->plazmodiy;
	}
	virtual void print()
	{
		Grib::print(); 
		cout << " Классификация: ПСЕВДОГРИБ  \n Наличие плазмодия : ";
		if (this->plazmodiy != 0)cout << " есть "<<endl;
		else cout << " нету " << endl;
	}
};

