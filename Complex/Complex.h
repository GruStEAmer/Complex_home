#pragma once
#include<iostream>

class Complex
{
	double re = 0.0, im = 0.0;
public:
	//operators_b
		Complex operator-(Complex next);
		Complex operator+(Complex next);
		Complex operator*(Complex next);
		Complex operator/(Complex next);
		void operator=(Complex next);
		Complex& operator++();
		const Complex operator++(int);

	//operator_in_double_b
	Complex operator+(double d);
	Complex operator-(double d);
	Complex operator*(double d);
	Complex operator/(double d);
	//operator_in_double_e
	

	//friend_b
		friend std::ostream& operator<<(std::ostream& os, Complex o);
		friend std::istream& operator>>(std::istream& is, Complex& i);

		friend Complex operator+(double d, Complex c);
		friend Complex operator-(double d, Complex c);
		friend Complex operator*(double d, Complex c);
		friend Complex operator/(double d, Complex c);
	//friend_e

	//operators_e

	//func_b
	double modul();
	//func_e
};

