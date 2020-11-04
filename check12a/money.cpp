/***********************
 * File: money.cpp
 ***********************/

#include <iostream>
#include <iomanip>
using namespace std;

#include "money.h"

/*****************************************************************
 * Function: prompt
 * Purpose: Asks the user for values for dollars and cents
 *   and stores them.
 ****************************************************************/
void Money :: prompt()
{
   int dollars;
   int cents;

   cout << "Dollars: ";
   cin >> dollars;

   cout << "Cents: ";
   cin >> cents;

   setDollars(dollars);
   setCents(cents);
}

/*****************************************************************
 * Function: display
 * Purpose: Displays the value of the money object.
 ****************************************************************/
void Money :: display() const 
{
   //cout << "The values are: ";
   
   cout << "$" << dollars << ".";
   cout << setfill('0') << setw(2) << cents;

   //cout << " and ";
}

/*****************************************************************
 * Function: operator function
 * Purpose: Function gives operator greater access.
 ****************************************************************/
std::ostream & operator << (std::ostream & out, const Money & accounts)
{
   //out << accounts.display(); 
   out << "$" << accounts.getDollars() << "."
       << setfill('0') << setw(2) << accounts.getCents();
   return out;
}

/*****************************************************************
 * Function: operator function
 * Purpose: Function gives operator greater access.
 ****************************************************************/
bool operator ==(const Money & x, const Money & y)
{
   return ((x.getDollars() == y.getDollars()) && ( x.getCents() == y.getCents()));   
}

/*****************************************************************
 * Function: operator function
 * Purpose: Function gives operator greater access.
 ****************************************************************/
bool operator !=(const Money & x, const Money & y)
{
   return ((x.getDollars() != y.getDollars()) || ( x.getCents() != y.getCents())); 
}
