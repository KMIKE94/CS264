#include<iostream>
#include<iomanip>
#include "Complex.h"
using namespace std;

int test() {
	Complex comp;
	Complex comp2(4, 5);

	double real;
	cout << "Enter a value for real : ";
	cin >> real;

	double imag;
	cout << "Enter a value for imag : ";
	cin >> imag;

	comp.setReal(real);
	comp.setImag(imag);

	comp.print();
	cout << setw(5);
	comp2.print();
	cout << "\n";

	Complex r;
	r = comp.Add(comp2);

	r.print();
	cout << ":  Addition" << endl;

	Complex x;
	x = comp.Subtract(comp2);

	x.print();
	cout << ":  Subtraction" << endl;

	Complex y;
	y = comp.Multiply(comp2);

	y.print();
	cout << ":  Multiplication" << endl;

	return 0;
}
