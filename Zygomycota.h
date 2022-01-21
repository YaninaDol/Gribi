#include "Red_muhomor.h"
class Zygomycota :public True_grib
{
protected:
	int miceliy;
public:
	Zygomycota():True_grib()
	{
		this->miceliy = 0;
	}
	Zygomycota(string name,float H, float R, int Chr, bool eat, int mi) :True_grib(name,H, R, Chr, eat)
	{
		this->miceliy = mi;
	}

	virtual void print()
	{
		True_grib::print();
		cout << " Толщина мицелия: " << this->miceliy<< endl;

	}
};

