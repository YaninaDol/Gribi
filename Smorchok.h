#include "Ascomycetes.h"
class Smorchok:public Ascomycetes
{
protected:
	string color;
public:
	Smorchok():Ascomycetes()
	{
		this->color = " ";
	}
	Smorchok(string name,float H, float R, int Chr, bool eat, int Grani,string color):Ascomycetes(name,H, R, Chr, eat,Grani)
	{
		this->color = color;
	}
	virtual void print()
	{
		Ascomycetes::print();
		cout << " ÷вет(анг.): " << this->color << endl;
	}
};

