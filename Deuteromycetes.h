#include "Smorchok.h"
class Deuteromycetes:public True_grib
{
protected:
	bool sumka;
public:
	Deuteromycetes() :True_grib()
	{
		this->sumka = 0;
	}
	Deuteromycetes(string name,float R, int Chr, bool eat, bool S) :True_grib(name,R, Chr, eat)
	{
		this->sumka=S;
	}

	virtual void print()
	{
		True_grib::print();
		cout << " Способность образования плодотворной сумки: ";
		if (this->sumka != 0)cout << " да " << endl;
		else cout << " нет " << endl;
	}
};



