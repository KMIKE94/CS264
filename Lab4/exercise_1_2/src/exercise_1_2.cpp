#include<iostream>
#include<iomanip>
#include "Complex.h"
using namespace std;

int main() {
	Complex complex_manip;
	Complex comp_setup;

	double real;
	cout << "Enter a value for real : ";
	cin >> real;

	double imag;
	cout << "Enter a value for imag : ";
	cin >> imag;

	complex_manip.setReal(real);
	complex_manip.setImag(imag);

	cout << "Enter a value for real : ";
	cin >> real;

	cout << "Enter a value for imag : ";
	cin >> imag;

	comp_setup.setReal(real);
	comp_setup.setImag(imag);

	complex_manip.print();
	cout << setw(5);
	comp_setup.print();
	cout << "\n";

	Complex r;
	r = complex_manip.Add(comp_setup);

	r.print();
	cout << ":  Addition" << endl;

	Complex x;
	x = complex_manip.Subtract(comp_setup);

	x.print();
	cout << ":  Subtraction" << endl;

	Complex y;
	y = complex_manip.Multiply(comp_setup);

	y.print();
	cout << ":  Multiplication" << endl;
}
