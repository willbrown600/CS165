/***************************************************************
 * File: product.cpp
 * Author: Will Brown
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include "product.h"
#include <string>
#include <iostream>
#include <iomanip>


/******************************************************
 * CONSTRUCTORS
 * ****************************************************/
Product :: Product()
{
   pname = "none";
   pdescription = "";
   weight = 0.0;
   price = 0.0;
}
Product :: Product (std :: string pname, std :: string description, float price, float weight)
: pname(pname), pdescription(description), price(price), weight(weight) 
{}

/******************************************************
 * SETTERS / Mutators
 * ****************************************************/
void Product :: setName(std :: string pname)
{
   this->pname = pname;
}
void Product :: setDescription(std :: string description)
{
   this->pdescription = description;
}
void Product :: setWeight(float weight)
{
   this->weight = weight;
}
void Product :: setBasePrice(float price)
{
   this->price = price;
}
/******************************************************
 * GETTERS / Aceesors
 * ****************************************************/
std :: string Product :: getName()
{
   return pname;
}
std :: string Product :: getDescription()
{
   return pdescription;
}
float Product :: getWeight()
{
   return weight;
}
float Product :: getBasePrice()
{
   return price;
}
/***************************************************************
 * Get Sales Tax function
 * To return sales tax to price of object.
 ***************************************************************/
float Product::getSalesTax()
{
   std :: cout.setf(std :: ios::fixed);
   std :: cout.setf(std :: ios::showpoint);
   std :: cout.precision(2);

   return 0.06 * price;
}
/***************************************************************
 * Get Shipping Cost function
 * Calculate and return shipping cost.
 ***************************************************************/
float Product::getShippingCost()
{
   std :: cout.setf(std :: ios::fixed);
   std :: cout.setf(std :: ios::showpoint);
   std :: cout.precision(2);

   if (weight < 5.0)
   {
       return 2.0;
   }
   else
   {
       float totalWeight = 0.0;
       totalWeight = weight - 5.0;
       return totalWeight * 0.10 + 2.0;
   }
}
/***************************************************************
 * Get Total Price
 * Calculate total price of shipping.
 ***************************************************************/
float Product::getTotalPrice()
{
   std :: cout.setf(std :: ios::fixed);
   std :: cout.setf(std :: ios::showpoint);
   std :: cout.precision(2);

   float total = 0.f;
   total = getBasePrice() + getSalesTax() + getShippingCost();
   return total; 

}
/***************************************************************
 * DisplayAdvertisementProfile function
 * Display using an advertisement profile.
 ***************************************************************/
void Product::displayAdvertising()
{
    std :: cout.setf(std :: ios::fixed);
    std :: cout.setf(std :: ios::showpoint);
    std :: cout.precision(2);

    std :: cout << pname << " - " << "$" << price << std :: endl;
    std :: cout << "(" << getDescription() << ")\n";
}

/***************************************************************
 * Display Inventory Line function
 * Display using an advertisement profile.
 ***************************************************************/
void Product::displayInventory()
{
    std :: cout << "$" << price << " - " << pname << " - ";

    std :: cout.setf(std :: ios::fixed);
    std :: cout.setf(std :: ios::showpoint);
    std :: cout.precision(1);

    std :: cout << weight << " lbs\n";
}

/***************************************************************
 * DisplayAdvertisementProfile function
 * Display using an advertisement profile.
 ***************************************************************/
void Product::displayReceipt()
{
    std :: cout.setf(std :: ios::fixed);
    std :: cout.setf(std :: ios::showpoint);
    std :: cout.precision(2);

    std :: cout << pname << std :: endl;
    std :: cout << "  Price:" << std :: setw(10) << "$" << std :: setw(8) << price << std :: endl;
    std :: cout << "  Sales tax:" << std :: setw(6) << "$" << std :: setw(8) << getSalesTax() << std :: endl;
    std :: cout << "  Shipping cost:" << std :: setw(2) << "$" << std :: setw(8) << getShippingCost() << std :: endl;
    std :: cout << "  Total:" << std :: setw(10) << "$" << std :: setw(8) << getTotalPrice() << std :: endl;
}