#include"Class.h"


Fraction::Fraction()
{
	nume = denom = 0;
}
Fraction::Fraction(int nume,int denom)
{
	this->nume = nume;
	this->denom = denom;
}
Fraction Fraction ::operator -(Fraction  f)
{
	if(this->denom==f.denom)
	this->nume = nume - f.nume;
	else
	{
		int Lcm;
		Lcm = lcm((denom), f.denom);
		this->nume = nume - f.nume;
		this->denom = Lcm;
	}
	return *(this);
}
int lcm(int num1, int num2)
{
	int highest = 0;
	(num1 < num2) ? highest = num2 : highest = num1;
	for (;;)
	{
		if (highest % num1 == 0 && highest % num2 == 0)
		{
			return highest;
		}
		highest++;
	}
}
void Fraction::display()
{
	cout << "Result is : " << nume << "/" << denom << endl;
}



