#include"Complex.h"
#include<iostream>
using namespace std;

double result_real;
double result_imag;
Complex::Complex() {
	real = 0;
	imag = 0;
}

Complex::Complex(double a, double b) {
	real = a;
	imag = b;
}

void Complex::print() {
	cout << "(" << this->real << ", " << this->imag << ")";
}

double Complex::getReal() {
	return real;
}

void Complex::setReal(double a) {
	real = a;
}

double Complex::getImag() {
	return imag;
}

void Complex::setImag(double b) {
	imag = b;
}

Complex Complex::Add(const Complex &x) {
	result_real = this->real + x.real;
	result_imag = this->imag + x.imag;
	Complex temp(result_real, result_imag);
	return temp;
}

Complex Complex::Subtract(const Complex &x) {
	result_real = this->real - x.real;
	result_imag = this->imag - x.imag;
	Complex temp(result_real, result_imag);
	return temp;
}

Complex Complex::Multiply(const Complex &x) {
	result_real = this->real * x.real;
	int result_2 = this->real * x.imag;
	result_imag = this->imag * x.real;
	int result_4 = this->imag * x.imag;
	result_real = -result_4 + result_real;
	result_imag = (result_2 + result_imag);
	Complex result(result_real, result_imag);
	return result;
}
