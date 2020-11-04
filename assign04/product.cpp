/***************************************************************
 * File: product.cpp
 * Author: Will Brown
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include "product.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

// put your method bodies here
/***************************************************************
 * Prompt function
 * To prompt the user for a number of private variables.
 ***************************************************************/
void Product::prompt()
{
    
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter description: ";
    getline(cin, description);
    cout << "Enter weight: ";
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cin >> weight;
    
    bool incorrect = true;

    while(incorrect == true)
    {
       
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << "Enter price: ";
        cin >> price;

        if (cin.fail() || (price < 0))
        {
            cin.clear();
            cin.ignore(256, '\n');
            incorrect = true;

        }
        else
            incorrect = false;
    }

    
    /*while (!done)         
    {
    //cerr << done;
    //cout.setf(ios::fixed);
    //cout.setf(ios::showpoint);
    //cout.precision(2);
    do while loop for the price input however,
    I am unable to continue its loop after the
    second failure.
        cout << "Enter price: ";
        cin >> price;

        if ((price >= 0))
            done = true;
        
        else
        {
            cin.clear();
            cin.ignore(256, '/n');

        }
    }
    */


cout << endl;
    
}

/***************************************************************
 * Get Sales Tax function
 * To return sales tax to price of object.
 ***************************************************************/
float Product::getSalesTax()
{

   return 0.06 * price;
}

/***************************************************************
 * Get Shipping Cost function
 * Calculate and return shipping cost.
 ***************************************************************/
float Product::getShippingCost()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   if (weight < 5.0)
   {
       return 2.0;
   }
   else
   {
       float totalWeight = 0.0;
       totalWeight = weight - 5.0;
       return totalWeight * 0.1 + 2.0;
   }
}
/***************************************************************
 * Get Total Price
 * Calculate total price of shipping.
 ***************************************************************/
float Product::getTotalPrice()
{

   float total = 0.0;
   total = price + getSalesTax() + getShippingCost();
   return total; 

}
/***************************************************************
 * DisplayAdvertisementProfile function
 * Display using an advertisement profile.
 ***************************************************************/
void Product::displayAdvertisementProfile()
{
    cout << name << " - " << "$" << price << endl;
    cout << "(" << description << ")\n";
}

/***************************************************************
 * Display Inventory Line function
 * Display using an advertisement profile.
 ***************************************************************/
void Product::displayInventoryLine()
{
    cout << "$" << price << " - " << name << " - ";

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout << weight << " lbs\n";
}

/***************************************************************
 * DisplayAdvertisementProfile function
 * Display using an advertisement profile.
 ***************************************************************/
void Product::displayReceipt()
{
    cout << name << endl;
    cout << "  Price:" << setw(10) << "$" << setw(8) << price << endl;
    cout << "  Sales tax:" << setw(6) << "$" << setw(8) << getSalesTax() << endl;
    cout << "  Shipping cost:" << setw(2) << "$" << setw(8) << getShippingCost() << endl;
    cout << "  Total:" << setw(10) << "$" << setw(8) << getTotalPrice() << endl;

}