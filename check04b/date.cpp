/********************************************************************
 * File: date.cpp
 * Purpose: Holds the implementation of the Date class methods.
 ********************************************************************/

#include "date.h"
#include <iostream>


void Date::set(std::string month, std::string day, std::string year) // Accepts a month, day, and year, and sets the member variables.
{
    this->month = month;
    this->day = day;
    this->year = year;
} 

void Date::displayAmerican() // Displays the date in the format: mm/dd/yyyy .
{
    std::cout << month << "/" << day << "/" << year << std::endl;
} 

void Date::displayEuropean() // Displays the date in the format: dd/mm/yyyy .
{
    std::cout << day << "/" << month << "/" << year << std::endl;
} 

void Date::displayISO() // Displays the date in the format: yyyy-mm-dd 
{
    std::cout << year << "-" << month << "-" << day << std::endl;
} 
