#include "Basidiomycota.h"
class Red_muhomor:public Basidiomycota
{
private:
	bool yad = 1;
public:
	
	Red_muhomor(string name,float H, float R, int Chr, int yadro) :Basidiomycota(name,H, R, Chr, 0,yadro)
	{
		
	}
	virtual void print()
	{
		Basidiomycota::print();
		cout << " �����������: ";
		if (this->yad == 1)cout<<" �������� " << endl;
		else  cout << " �� �������� " << endl;

	}
};

