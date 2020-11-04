/*********************
 * File: check05b.cpp
 *********************/

// You should not change anything in this file 


#include <iostream>
using namespace std;

#include "money.h"

/****************************************************************
 * Function: main
 * Purpose: Test the money class
 ****************************************************************/
int main()
{
   
   int dollar;
   int cent;

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   Money money;
   money.prompt();

   //money.display();

   // Default Constructor.
   Money m1;
   //m1.prompt();
   cout << "Default constructor: ";
   m1.display();
   cout << endl;
   
   //Non-Default Constructor that accepts 1 parameter.
   dollar = money.getDollars();
   Money m2(dollar);
   //m2.prompt();
   cout << "Non-default constructor 1: ";
   m2.display();
   cout << endl;
   
   cent = money.getCents();
   //Non-default constructor that accepts 2 parameters.
   Money m3(dollar, cent);
   //m3.prompt();
   cout << "Non-default constructor 2: ";
   m3.display();
   cout << endl;

   return 0;
}

