#include<iostream>
#include<cmath>
#include<string>
using namespace std;
#include "Complex.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	int realVal1 = 3, realVal2 = -5;
	int imagVal1 = 7, imagVal2 = 9;

	//Пример 1
	Complex z1(realVal1, imagVal1);
	cout << "Пример 1\nz = " << z1 << endl;
	Complex Name1(realVal1, imagVal1);
	y(Name1);
	cout << y(Name1) << endl << endl;

	//Пример 2
	Complex z2(realVal2, imagVal2);
	cout << "Пример 2\nz = " << z2 << endl;
	Complex Name2(realVal2, imagVal2);
	y(Name2);
	cout << y(Name2) << endl << endl;
}