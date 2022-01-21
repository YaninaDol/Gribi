#include "Zygomycota.h"
class Mucor:Zygomycota
{
private:
	string color;
public:
	Mucor() :Zygomycota()
	{
		this->color = " ";
	}
	Mucor(string name,float H,float R, int Chr, bool eat, int mi, string color) :Zygomycota(name,H,R, Chr, eat, mi)
	{
		this->color = color;
	}
	virtual void print()
	{
		Zygomycota::print();
		cout << " ÷вет(анг.): " << this->color << endl;
	}
};


