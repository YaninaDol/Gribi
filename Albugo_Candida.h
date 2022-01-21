#include "Oomycetes.h"
class Albugo_Candida:public Oomycetes
{
private:
	string season;

public:
	Albugo_Candida():Oomycetes()
	{
		this->season = "winter";
	}
	Albugo_Candida(string name,float R, bool P, int Z,string S) :Oomycetes(name, R, P,Z)
	{
		this->season =S;
	}
	string getSeason()
	{
		return this->season;
	}
	virtual void print()
	{
		Oomycetes::print();
		cout << " Сезон (анг.): " << this->season << endl;
	}
};

