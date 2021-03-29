#include "Complex.h"
#include<iostream>
#include<cmath>

double Complex::Re() const
{
	return this->re;
}

double Complex::Im() const
{
	return this->im;
}


Complex::Complex(double re, double im)
	:re(re), im(im) {}

// Перегрузка операций
Complex Complex::operator+(const Complex& rhs)
{
	return Complex(this->Re() + rhs.Re(), this->Im() + rhs.Im());
}

Complex Complex::operator-(const Complex& rhs)
{
	return Complex(this->Re() - rhs.Re(), this->Im() - rhs.Im());
}

Complex Complex::operator*(const Complex& rhs)
{
	return Complex(this->Re() * rhs.Re() - this->Im() * rhs.Im(), this->Re() * rhs.Im() + this->Im() * rhs.Re());
}

Complex Complex::operator/(const Complex& rhs)
{
	return Complex((this->Re() * rhs.Re() + this->Im() * rhs.Im()) / (rhs.Re() * rhs.Re() + rhs.Im() * rhs.Im()),
		(rhs.Re() * this->Im() - this->Re() * rhs.Im()) / (rhs.Re() * rhs.Re() + rhs.Im() * rhs.Im()));
}


Complex sin(const Complex& z)
{
	return Complex(sin(z.Re()) * cosh(z.Im()), cos(z.Re()) * sinh(z.Im()));
}


ostream& operator<<(ostream& stream, const Complex& z)
{
	if (z.Im() >= 0)
	{
		stream << z.Re() << "+" << z.Im() << "*i";
	}
	else
	{
		stream << z.Re() << z.Im() << "*i";
	}
	return stream;
}


Complex y(const Complex& z)
{
	return (Complex(2, 0) * z + sin(Complex(0, -1) + z));
}