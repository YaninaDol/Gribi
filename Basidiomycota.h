#include "Penicillium.h"
class Basidiomycota :public True_grib
{
protected:
	int haploid_yadro;
public:
	Basidiomycota() :True_grib()
	{
		this->haploid_yadro = 2;
	}
	Basidiomycota(string name,float H,float R, int Chr, bool eat, int yadro) :True_grib(name,H,R, Chr, eat)
	{
		this->haploid_yadro = yadro;
	}

	virtual void print()
	{
		True_grib::print();
		cout<<" Количество  гаплоидных ядер: "<<this->haploid_yadro << endl;
		
	}
};
