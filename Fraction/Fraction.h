#ifndef Fraction_H
#define Fraction_H
#include <iostream>

using namespace std;

class Fraction
{
private:
	int Num;		//numerator of a fraction
	int Denom;		//denominator of a fraction

public:
	Fraction();			//default constructor 
	~Fraction();				//destructor method
	void setNumDenom(int, int);			//set appropriate numerator and denominator for a fraction
	Fraction getNumDenom(int, int);		//returns a fraction
	Fraction operator + (const Fraction &);
	Fraction operator - (const Fraction &);
	Fraction operator * (const Fraction &);
	Fraction operator / (const Fraction &);
	
	void print();

};

#endif