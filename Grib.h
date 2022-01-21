#include <iostream>
using namespace std;

class Grib
{
protected:
	string name;
	float high;
	float hat_diametr;
public:
	Grib()
	{
		this->name = " ";
		this->high = 0;
		this->hat_diametr = 0;
	}
	Grib(string name,float H,float R)
	{
		this->name = name;
		this->high = H;
		this->hat_diametr = R;
		
	}
	Grib(string name,float R)
	{
		this->name = name;
		this->high = 0;
		this->hat_diametr = R;
	}
	float getDiametr()
	{
		return this->hat_diametr;
	}
	string getName()
	{
		return this->name;
	}
	virtual void print()
	{
		if (this->high == 0)
		{
			cout<<" ��������: "<<this->name<<endl << " ������� : " << this->hat_diametr << endl;
		}
		else
		{
			cout << " ��������: " << this->name << endl << " ������ ����� : " << this->high << " ������� ������: " << this->hat_diametr << endl;
		}
	}

};

