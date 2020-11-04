/***********************
 * File: money.cpp
 ***********************/

#include <iostream>
#include <iomanip>
using namespace std;

#include "money.h"

/****************************************************************
 * CONSTRUCTORS
 * **************************************************************/

Money :: Money(int dollar)
{
      this->dollars = dollar;
      this->cents = 0;
}
Money :: Money(int dollar, int cent)
{
      this->dollars = dollar;
      this->cents = cent;
}


/*****************************************************************
 * Function: prompt
 * Purpose: Asks the user for values for dollars and cents
 *   and stores them.
 ****************************************************************/
void Money :: prompt()
{
   cout << "Dollar amount: ";
   cin >> dollars;

   cout << "Cents amount: ";
   cin >> cents;

   setDollars(dollars);
   setCents(cents);
}

/*****************************************************************
 * Function: display
 * Purpose: Displays the value of the money object.
 ****************************************************************/
void Money :: display()
{
   cout << "$" << getDollars() << ".";
   cout << setfill('0') << setw(2) << getCents();
}
/*****************************************************************
 * Function: set dollars
 * Purpose: Returns a postive dollar amount.
 ****************************************************************/
void Money :: setDollars(int dollars)
{
   if (dollars < 0)
   {
      dollars *= -1;
   }

   this -> dollars = dollars;
}
/*****************************************************************
 * Function: set cents
 * Purpose: Returns a postive cent amount.
 ****************************************************************/
void Money :: setCents(int cents)
{
   if (cents < 0)
   {
       cents *= -1;
   }

   this->cents = cents;
}

/*****************************************************************
 * Function: get dollars
 * Purpose: Get the amount of dollars.
 ****************************************************************/
int Money :: getDollars() const
{
   return dollars;
}

/*****************************************************************
 * Function: get cents
 * Purpose: Displays the value of the money object.
 ****************************************************************/
int Money :: getCents() const
{
   return cents;
}