/********************************************************************
 * File: date.h
 * Purpose: Holds the definition of the Date class.
 ********************************************************************/

#ifndef DATE_H
#define DATE_H

#include <string>



class Date
{
  private:
    std::string day, month, year;

  public:
    void set(std::string month, std::string day, std::string year); // Accepts a month, day, and year, and sets the member variables.
    void displayAmerican(); // Displays the date in the format: mm/dd/yyyy .
    void displayEuropean(); // Displays the date in the format: dd/mm/yyyy .
    void displayISO(); // Displays the date in the format: yyyy-mm-dd 
};

#endif
