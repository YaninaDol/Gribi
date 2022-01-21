#include "Psevdo_grib.h"
class Oomycetes:public Psevdo_grib

{
protected:
	int zhgut ;
public:
	Oomycetes():Psevdo_grib()
	{
		this->zhgut = 2;
	}
	Oomycetes(string name,float R, bool P,int Z):Psevdo_grib(name,R,P)
	{
		this->zhgut = Z;
	}
	int getZhgut()
	{
		return this->zhgut;
	}
	virtual void print()
	{
		Psevdo_grib::print();
		cout << " Кол-во жгутов : " << this->zhgut<<endl;
	}

};

