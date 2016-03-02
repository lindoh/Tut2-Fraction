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
	if (xDenom == 0)		// if the denominator is zero display warning message
	{
		cout << "Denominator cannot be zero! " << endl;
	}


	else			//or else asign values to the internal class private variables
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

Fraction Fraction::operator + (const Fraction& param) // overloading the addition(+) operator
{
	Fraction result;
	result.Num = Num * param.Denom + param.Num * Denom;		
	result.Denom = Denom * param.Denom;
	return result;

}

Fraction Fraction::operator - (const Fraction& param)		//overloading the subtraction(-) operator 
{
	Fraction result;
	result.Num = Num * param.Denom - param.Num * Denom;
	result.Denom = Denom * param.Denom;
	return result;
}

Fraction Fraction::operator * (const Fraction &param)		//overloading the multiplication (*) operator
{
	Fraction result;
	result.Num = Num * param.Num;
	result.Denom = Denom * param.Denom;
	return result;
}

Fraction Fraction::operator / (const Fraction &param)  //overloading the division (/) operator
{
	Fraction result;
	result.Num = Num * param.Denom;
	result.Denom = Denom * param.Num;
	return result;
}


void Fraction::print()
{

	if (Denom != 0)		// check if the denominator is not zero and reduce the fraction to its simplest terms
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

	if (Denom == 1)		// if denominator is one, then the fraction equals the Numerator
		cout << Num;

	else
		cout << Num << "/" << Denom;		// display the fraction
}