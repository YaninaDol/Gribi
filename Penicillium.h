#include "Deuteromycetes.h"

class Penicillium:public Deuteromycetes
{
private:
	string color;
public:
	Penicillium() :Deuteromycetes()
	{
		this->color = " ";
	}
	Penicillium(string name,float R, int Chr, bool eat, bool S, string color) :Deuteromycetes(name, R, Chr, eat,S)
	{
		this->color = color;
	}
	virtual void print()
	{
		Deuteromycetes::print();
		cout << " ÷вет(анг.): " << this->color << endl;
	}
};

