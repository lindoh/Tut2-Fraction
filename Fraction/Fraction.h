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
	Fraction Add(Fraction value);		//add function takes and returns one function
	Fraction Subtract(Fraction value);
	Fraction Multiply(Fraction value);
	Fraction Divide(Fraction value);
	void print();

};

#endif