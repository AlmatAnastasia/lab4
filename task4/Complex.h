#pragma once
#include "iostream"
using namespace std;

class Complex
{
private:

		double re;  // действительная часть
		double im;  // мнимая часть

public:

		double Re() const;
		double Im() const;

		Complex(double re, double im);

		friend Complex sin(const Complex& z);

		// Перегрузка операций
		Complex operator+(const Complex& rhs);
		Complex operator*(const Complex& rhs);
		Complex operator-(const Complex& rhs);
		Complex operator/(const Complex& rhs);

		friend ostream& operator<<(ostream & stream, const Complex& z);
};

// Пользовательская функция
Complex y(const Complex& z);