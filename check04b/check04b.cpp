/*********************************************************************
 * File: check04b.cpp
 * Purpose: contains the main method to exercise the Date class.
 *********************************************************************/

#include "date.h"

#include <iostream>


int main()
{
   // prompt for month, day, year
   std::string month, day, year;
   std::cout << "Month: ";
   std::getline(std::cin, month);

   std::cout << "Day: ";
   std::getline(std::cin, day);

   std::cout << "Year: ";
   std::getline(std::cin, year);

   std::cout << std::endl;

   // create a Date object
  Date date;

   // set its values
   date.set(month, day, year);

   // call each display function
   date.displayAmerican();
   date.displayEuropean();
   date.displayISO();

   return 0;
}
