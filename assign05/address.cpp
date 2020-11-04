/***************************************************************
 * File: address.cpp
 * Author: Will Brown
 * Purpose: Contains the method implementations for the Address class.
 ***************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

#include "address.h"

/******************************************************
 * CONSTRUCTORS
 * ****************************************************/
Address :: Address()
: street("unknown"), zip("00000")
{
   //cout << "Default constructor:\n";
}
Address :: Address(std :: string s, std :: string c, std :: string st, std :: string z)
: street(s), zip(z), state(st), city(c) {}

//Possible parameter passing problems. Should be all good though.

/******************************************************
 * SETTERS
 * ****************************************************/
void Address :: setStreet(std :: string street)
{
   this->street = street;
}

void Address :: setCity(std :: string city)
{
   this->city = city;
}
void Address :: setState(std :: string state)
{
   this->state = state;
}
void Address :: setZip(std :: string zip)
{
   this->zip = zip;
}
/******************************************************
 * GETTERS
 * ****************************************************/
std :: string Address :: getStreet()
{
   return street;
}
std :: string Address :: getCity()
{
   return city;
}
std :: string Address :: getState()
{
   return state;
}
std :: string Address :: getZip()
{
   return zip;
}
/******************************************************
 * DISPLAY
 * ****************************************************/
void Address :: display()
{
   std :: cout << street << std :: endl;
   std :: cout << city << ", " << state << " " << zip << std :: endl;    
}