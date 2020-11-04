/***************************************************************
 * File: product.h
 * Author: Will Brown
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iostream>

using namespace std;

// put your class definition here
class Product
{
    private:
        string name;
        string description;
        float weight; 
        float price;
    
    public:
        void prompt();
        float getSalesTax();
        float getShippingCost();
        float getTotalPrice();

        void displayAdvertisementProfile();
        void displayInventoryLine();
        void displayReceipt();

       /*
       
    - Advertising Profile: Should display the name, base price, and description in this format:

    Finding Peace, Happiness, and Joy by Richard G. Scott - $14.49
    (Elder Scott powerfully outlines the truths we need to understand and
    embrace in order to experience the gifts of peace, happiness, and joy.)
    
    
    - Inventory Line Item: Should display the base price, name, and weight in this format:

    $14.49 - Finding Peace, Happiness, and Joy by Richard G. Scott - 1.5 lbs
    
    
    - Receipt: Should display the name, base price, sales tax, shipping cost, and total price, in this format:

    Finding Peace, Happiness, and Joy by Richard G. Scott
      Price:         $   14.49
      Sales tax:     $    0.87
      Shipping cost: $    2.00
      Total:         $   17.36
    */
};
#endif
