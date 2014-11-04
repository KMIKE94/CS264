/*
 * Complex.h
 *
 *  Created on: 24 Oct 2014
 *      Author: keith
 */

#include<string>
using namespace std;

class Complex {
public:
	Complex();
	Complex(double a, double b);

	double getReal();
	void setReal(double);
	double getImag();
	void setImag(double);
	void print();

	Complex Add(const Complex &z);
	Complex Subtract(const Complex &z);
	Complex Multiply(const Complex &z);

	Complex& operator+(const Complex &z);
	Complex& operator-(const Complex &z);
	Complex& operator*(const Complex &z);

protected:
	double real;
	double imag;
};

