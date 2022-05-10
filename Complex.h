#pragma once
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex(){}
	
	Complex(double real, double imag) 
	{
		this->real = real; 
		this->imag = imag; 
	}

	void SetComplex(double real,double imag)
	{
		this->real = real;
		this->imag = imag;

	}

	double GetReal()
	{
		return this->real;
	}
	
	double GetImag()
	{
		return this->imag;
	}

	double GetComplexAbs(Complex c)
	{
		return c.real * c.real + c.imag * c.imag;
	}

	friend void complexPrint(Complex c);

	friend Complex operator+ (const Complex& c1, const Complex& c2);
	friend Complex operator- (const Complex& c1, const Complex& c2);
	friend Complex operator* (const Complex& c1, const Complex& c2);
	friend Complex operator/ (const Complex& c1, const Complex& c2);
	friend bool operator <(const Complex c1);
	
private:
	double real;
	double imag;
};



