/***************************************************************
 * File: customer.h
 * Author: Will Brown
 * Purpose: Contains the definition of the Customer class
 ***************************************************************/

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "address.h"
#include <string>
#include <iostream>

// put your Customer class here
class Customer
{

   private:
      std :: string name;
      Address address;
   
   public:
      Customer();
      Customer(std :: string name, Address address);

      void setName(std :: string name);
      std :: string getName();
      void setAddress(Address address);
      Address getAddress();
      void display();
};

#endif
