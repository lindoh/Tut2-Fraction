#include "Fraction.h"


Fraction::Fraction()
{
	Num = 0;
	Denom = 1;
}

Fraction::~Fraction()
{}

void Fraction::setNumDenom(int xNum, int xDenom)
{
	if (xDenom == 0)
	{
		cout << "Denominator cannot be zero! " << endl;
	}


	else
	{
		Num = xNum;
		Denom = xDenom;
	}
}

Fraction Fraction::getNumDenom(int xNum, int xDenom)
{
	Fraction result;
	result.Num = xNum;
	result.Denom = xDenom;
	return result;

}

Fraction Fraction::operator + (const Fraction& param)
{
	Fraction temp;
	temp.Num = Num * param.Denom + param.Num * Denom;
	temp.Denom = Denom * param.Denom;
	return temp;

}

Fraction Fraction::operator - (const Fraction& param)
{
	Fraction temp;
	temp.Num = Num * param.Denom - param.Num * Denom;
	temp.Denom = Denom * param.Denom;
	return temp;
}

Fraction Fraction::operator * (const Fraction &param)
{
	Fraction temp;
	temp.Num = Num * param.Num;
	temp.Denom = Denom * param.Denom;
	return temp;
}

Fraction Fraction::operator / (const Fraction &param)
{
	Fraction temp;
	temp.Num = Num * param.Denom;
	temp.Denom = Denom * param.Num;
	return temp;
}


void Fraction::print()
{

	if (Denom != 0)
	{
		for (int count = 2; count <= 10; count++)
		{
			while (Num%count == 0 && Denom%count == 0)
			{
				Num = Num / count;
				Denom = Denom / count;
			}
		}
	}

	if (Denom == 1)
		cout << Num;

	else
		cout << Num << "/" << Denom;
}