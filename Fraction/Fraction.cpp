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


Fraction Fraction::Add(Fraction value)
{
	Fraction result;
	result.Num = Num * value.Denom + value.Num * Denom;
	result.Denom = Denom * value.Denom;
	return result;
}

Fraction Fraction::Subtract(Fraction value)
{
	Fraction result;
	result.Num = Num * value.Denom - value.Num * Denom;
	result.Denom = Denom * value.Denom;
	return result;
}

Fraction Fraction::Multiply(Fraction value)
{
	Fraction result;
	result.Num = Num * value.Num;
	result.Denom = Denom * value.Denom;
	return result;
}

Fraction Fraction::Divide(Fraction value)
{
	Fraction result;
	result.Num = Num *value.Denom;
	result.Denom = Denom * value.Num;
	return result;
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