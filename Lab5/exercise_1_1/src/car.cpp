// Chapter 9 of C++ How to Program
// car.cpp
#include <iostream>
using std::string;

using std::cout;
using std::endl;

#include "car.h"

/* Write the constructor for Car, which takes the Car�s name and 
   color and assigns them to private data members name and 
   color; initialize maxSpeed to 95 and engineValves to 4 */

Car::Car(string name, string color){
	this->name = name;
	this->color = color;
}

// function setMaxSpeed definition
void Car::setMaxSpeed( int s ) 
{ 
   maxSpeed = ( ( s >= 0 && s < 250 ) ? s : 40 ); 

} // end function setMaxSpeed

// function setEngineValves definition
void Car::setEngineValves( int v )
{
   engineValves = ( ( v >= 0 && v < 50 ) ? v : 4 );

} // end function setEngineValves

// return maxSpeed
int Car::getMaxSpeed() const
{
   return maxSpeed;

} // end function getMaxSpeed

// return engineValves
int Car::getEngineValves() const
{
   return engineValves;

} // end function getEngineValves

// return name
string Car::getName() const
{
   return name;

} // end function getName

// return color
string Car::getColor() const
{
   return color;

} // end function getColor

// function print definition
void Car::print() const
{
   cout << "Car: " << name << " is " << color << " and has a " 
        << engineValves << "-valve engine. MAX SPEED = " 
        << maxSpeed << " mph. " << endl;

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
