/******************
 * File: money.h
 ******************/
#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
   int dollars = 0;
   int cents = 0;
   
public:
   
   /*******************************************************
    * Constructors
    * ****************************************************/
   
   Money()                        //Default Constructor
   {
      this->dollars = 0;
      this->cents = 0;

   }
   Money(int);                    //Non-default Constructor passing 1 parameter

   Money(int, int);               //Non-default Constructor passing 2 parameters

   //Member functions aka methods

   void prompt();
   void setDollars(int dollars);
   void setCents(int cents);
    int getDollars() const;
    int getCents() const;
   void display();
};
#endif
