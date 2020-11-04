/*********************
 * phone.cpp
 *********************/

#include <iostream>

#include "phone.h"

// TODO: Put your phone class methods here...





//Methods


/*********************
 * PROMPT NUMBER
 *********************/
void Phone::promptNumber()
{
    std::cout << "Area Code: ";
    std::cin >> areaCode;

    std::cout << "Prefix: ";
    std::cin >> prefix;

    std::cout << "Suffix: ";
    std::cin >> suffix;

    //std::cout << std::endl;

}

/*********************
 * DISPLAY
 *********************/
void Phone::display()
{

    std::cout << "(" << areaCode << ")" << prefix << "-" << suffix 
              << std::endl;

}