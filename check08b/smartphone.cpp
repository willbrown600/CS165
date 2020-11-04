/*******************
 * smartphone.cpp
 *******************/
#include <string>
#include <iostream>

#include "smartphone.h"

// TODO: Put your SmartPhone methods here


/*********************
 * PROMPT NUMBER
 *********************/
void SmartPhone::prompt()
{
    //call Phone prompt method.
    Phone::promptNumber();
    //prompt for email.
    std::cout << "Email: ";
    std::cin.ignore();
    std::getline(std::cin, email);


}

/*********************
 * DISPLAY
 *********************/
void SmartPhone::display()
{
    Phone::display();
    std::cout << email << std::endl; 


}