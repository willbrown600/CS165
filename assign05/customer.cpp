/***************************************************************
 * File: customer.cpp
 * Author: Will Brown
 * Purpose: Contains the method implementations for the Customer class.
 ***************************************************************/

#include "address.h"
#include "customer.h"
#include <string>
#include <iostream>

// Put the method bodies for your customer class here
/******************************************************
 * CONSTRUCTORS
 * ****************************************************/
Customer :: Customer()
{
    name = "unspecified";
}
Customer :: Customer(std :: string name, Address address)
: name(name), address(address)
{
    
}
/******************************************************
 * SETTERS
 * ****************************************************/
void Customer :: setName(std :: string name)
{
    this->name = name;
}
void Customer :: setAddress(Address address)
{
    this->address = address;
}
/******************************************************
 * GETTERS
 * ****************************************************/
std :: string Customer :: getName()
{
    return name;
}
Address Customer :: getAddress()
{
    return address;
}
/******************************************************
 * DISPLAY
 * ****************************************************/
void Customer :: display()
{
    std :: cout << name << std :: endl;
    address.display();
}