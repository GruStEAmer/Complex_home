#include "Complex.h"
#include<iostream>

//operators_b
	Complex Complex::operator+(Complex next) {
		Complex c;
		c.re = re + next.re;
		c.im = im + next.im;
		return c;
	}
	Complex Complex::operator-(Complex next) {
		Complex c;
		c.re = re - next.re;
		c.im = im - next.im;
		return c;
	}
	Complex Complex::operator*(Complex next) {
		Complex ans;
		ans.re = re * next.re - im * next.re;
		ans.im = re * next.im - im * next.re;
		return ans;
	}
	Complex Complex::operator/(Complex next) {
		Complex ans;
		ans.re = (re * next.re - im * next.im) / (pow(next.re, 2) + pow(next.im, 2));
		ans.im = (next.re * im - re * next.im) / (pow(next.re, 2) + pow(next.im, 2));
		return ans;
	}
	void Complex::operator=(Complex next) {
		re = next.re;
		im = next.im;
	}
	Complex& Complex::operator++() {
		re += 1;
		return *this;
	}
	const Complex Complex::operator++(int) {
		Complex it = *this;
		++(*this);
		return it;
	}

//operator_in_double_b
Complex Complex::operator+(double d) {
	Complex c;
	c.re = re + d;
	c.im = im;
	return c;
}
Complex Complex::operator-(double d) {
	Complex c;
	c.re = re - d;
	c.im = im;
	return c;
}
Complex Complex::operator*(double d) {
	Complex c;
	c.re = re * d;
	c.im = im * d;
	return c;
}
Complex Complex::operator/(double d) {
	Complex c;
	c.re = re / d;
	c.im = im / d;
	return c;
}
////operator_in_double_e

//friend_b
	std::ostream& operator<<(std::ostream& os, Complex o) {
		os << o.re << " " << o.im;
		return os;
	}
	std::istream& operator>>(std::istream& is, Complex& i) {
		is >> i.re >> i.im;
		return is;
	}

	Complex operator+(double d, Complex c) {
		return c + d;
	}
	Complex operator-(double d, Complex c) {
		return c - d;
	}
	Complex operator*(double d, Complex c) {
		return c * d;
	}
	Complex operator/(double d, Complex c) {
		return c / d;
	}

//friend_e

//operators_e


//func_b
double Complex::modul() {
	return pow(pow(re, 2) + pow(im, 2), 0.5);
}
//func_e