// Chapter 9 of C++ How to Program
// racecar.cpp
#include <iostream>

using std::cout;
using std::endl;

#include "racecar.h"
#include "car.h"

// constructor
Racecar::Racecar(string n, string c, string s)
:Car(n,s)
{
	/* Write code to copy s into private data member sponsor */
	this->sponsor = s;

	gearbox = 6;
	parachuteDeployed = false;

} // end class Racecar constructor

// function setGearbox definition
void Racecar::setGearbox(int gears) {
	gearbox = ((gears <= 10 && gears >= 0) ? gears : 6);

} // end function setGearbox

// function useParachute definition
void Racecar::useParachute() {
	parachuteDeployed = true;

} // end function useParachute

// function print definition
void Racecar::print() const {
	/* Write statement that calls base-class member function print here */
	cout << getName() << " also has " << gearbox
			<< " gears and is sponsored by " << sponsor << ". " << endl;

	cout << "Car: " << this->getName() << " is " << this->getColor() << " and has a "
	        << this->getEngineValves() << "-valve engine. MAX SPEED = "
	        << this->getMaxSpeed() << " mph. " << endl;

if ( parachuteDeployed )
	cout << this->getName()
			<< " has used its parachute." << endl;
else
	cout << this->getName()
			<< " has not used its parachute." << endl;

} // end function print

/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
