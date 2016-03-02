#include "Fraction.h"


void main()
{
	Fraction frac1;
	Fraction frac2;
	Fraction Result;
	frac1.setNumDenom(7, 4);
	frac2.setNumDenom(3, 2);

	Result = frac1 + frac2;
	cout << "The sum of ";
	frac1.print();
	cout << " And ";
	frac2.print();
	cout << " is ";
	Result.print();
	cout << endl;

	Result = frac1 - frac2;
	cout << "The difference of ";
	frac1.print();
	cout << " And ";
	frac2.print();
	cout << " is ";
	Result.print();
	cout << endl;

	Result = frac1 * frac2;
	cout << "The product of ";
	frac1.print();
	cout << " And ";
	frac2.print();
	cout << " is ";
	Result.print();
	cout << endl;

	Result = frac1 / frac2;
	cout << "The quotient of ";
	frac1.print();
	cout << " And ";
	frac2.print();
	cout << " is ";
	Result.print();
	cout << endl;

	cin.get();


}