#include "Complex.h"

Complex operator+ (const Complex& c1, const Complex& c2)
{
	Complex result(c1.real + c2.real, c1.imag + c2.imag);
	return result;
}

Complex operator- (const Complex& c1, const Complex& c2)
{
	Complex result(c1.real - c2.real, c1.imag - c2.imag);
	return result;
}

Complex operator* (const Complex& c1, const Complex& c2)
{
	Complex result(c1.real * c2.real - (c1.imag * c2.imag), c1.real * c2.imag + c1.imag * c2.real);
	return result;
}

Complex operator/ (const Complex& c1, const Complex& c2)
{
	double z = (c2.real * c2.real) + (c2.imag * c2.imag);
	double real = (c1.real * c2.real + c1.imag * c2.imag) / z;
	double imag = (c2.real * c1.imag - c1.real * c2.imag) / z;

	Complex result(real, imag);
	return result;
}

bool operator <(const Complex c1)
{
	return this->GetComplexAbs() < c1.GetComplexAbs();
}

void complexPrint(Complex c)
{
	if (c.imag > 0)
	{
		cout << c.real << "+" << c.imag << "i" << "   ";
	}
	else
	{
		if (c.imag == 0)
		{
			cout << c.real << "   ";
		}
		else
		{
			cout << c.real << c.imag << "i" << "   ";
		}
	}
}




