#include<iostream>
#include<iomanip>
#include "Complex.h"
using namespace std;

int main() {
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

	Complex x = comp + comp2;
	x.print();
	cout << "   Addition" << "\n";

	Complex y = comp - comp2;
	y.print();
	cout << "   Subtraction" << "\n";

	Complex r = comp * comp2;
	r.print();
	cout << "   Multiplication" << "\n";
}
