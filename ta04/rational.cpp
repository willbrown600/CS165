/***************************************************************
 * File: rational.cpp
 * Author: Will Brown
 * Purpose: Contains the method implementations for the Rational class.
 ***************************************************************/

#include "rational.h"
#include <iostream>
using namespace std;

// put your method bodies here
void prompt()
{
    
    cout << "Top: ";
    cin >> top;

    cout << "Bottom: ";
    cin >> bottom;
}

void display(int top, int bottom)
{
    if (top > bottom)
    {
        cout << top / bottom << " " << top % bottom << "/" << bottom;
    }
    else 
        cout << top << "/" << bottom << endl;
}

void displayDecimal(int top, int bottom)
{
    float value = (float)top / bottom;
    cout << value << endl;
}   
void multiplyBy(int top, int bottom)
{
    int stop, sbottom;
    cout << "Enter second top: ";
    cin >> stop;

    cout << "Enter second bottom: ";
    cin >> sbottom;

    int tvalue = top * stop;
    int bvalue = bottom * sbottom;

    cout << tvalue << "/" << bvalue << endl;


}

void reduce(int top, int bottom)
{

}