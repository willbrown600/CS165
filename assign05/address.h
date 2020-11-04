/***************************************************************
 * File: address.h
 * Author: Will Brown
 * Purpose: Contains the definition of the Address class
 ***************************************************************/

#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
#include <string>




// Put your Address class here
class Address
{
    private:
        std :: string street;
        std :: string city;
        std :: string state;
        std :: string zip;
    
    public:
        Address();
        Address(std :: string, std :: string, std :: string, std :: string);

        void setStreet(std :: string street);
        std :: string getStreet();
        void setCity(std :: string city);
        std :: string getCity();
        void setState(std :: string state);
        std :: string getState();
        void setZip(std :: string zip);
        std :: string getZip();
        void display();


};
#endif
