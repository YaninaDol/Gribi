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
		cout << " ����������� ����������� ������������ �����: ";
		if (this->sumka != 0)cout << " �� " << endl;
		else cout << " ��� " << endl;
	}
};



