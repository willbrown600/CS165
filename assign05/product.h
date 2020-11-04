/***************************************************************
 * File: product.h
 * Author: Will Brown
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iostream>


// put your class definition here
class Product
{
    private:
        std :: string pname;
        std :: string pdescription;
        float weight; 
        float price;
    
    public:
        Product();
        Product(std :: string, std :: string, float, float);

        //void prompt();
        void setName(std :: string name);
        std :: string getName();
        void setDescription(std :: string description);
        std :: string getDescription();
        void setBasePrice(float price);
        float getBasePrice();
        void setWeight(float weight);
        float getWeight();
        float getSalesTax();
        float getShippingCost();
        float getTotalPrice();

        void displayAdvertising();
        void displayInventory();
        void displayReceipt();

       
};
#endif
