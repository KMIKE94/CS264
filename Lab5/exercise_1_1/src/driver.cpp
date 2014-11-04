// Chapter 9 of C++ How to Program
// driver for race car and car
#include <iostream>

using std::cout;
using std::endl;

#include "car.h"
#include "racecar.h"

int main()
{
   Car chevy( "Chevrolette", "black" );

   cout << "chevy: \n";
   /* Write code to print Car object */

   Racecar f1( "Ferrari", "red", "Bug2Bug" );

   f1.setEngineValves( 40 );
   f1.setMaxSpeed( 220 );
   f1.setGearbox( 7 );
   f1.useParachute();

   cout << "\n\nf1: \n";
   f1.print();

   return 0;

} // end main



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