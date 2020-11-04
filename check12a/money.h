/******************
 * File: money.h
 ******************/
#ifndef MONEY_H
#define MONEY_H

/******************************************************
 * Class: Money
 * Description: Holds a value of dollars and cents.
 ******************************************************/
class Money
{
   //friend ostream & operator << (ostream & output, const Money & accounts);
   //friend Money & operator ==(Money & output, const Money & accounts);
   //friend Money & operator !=(Money & output, const Money & accounts); 
private:
   int dollars;
   int cents;

public:
   /************************
    * Constructors
    ************************/
   Money()
   {
      setDollars(0);
      setCents(0);
   }

   Money(int dollars, int cents)
   {
      setDollars(dollars);
      setCents(cents);
   }

   /************************
    * Getters and Setters
    ************************/
   int getDollars() const { return dollars; }
   int getCents() const { return cents; }
   
   // These could be done in a smarter way to add cents to dollars if more than 100 etc.
   // but we're trying to keep it simple for this assignment...
   void setDollars(int dollars) { this->dollars = dollars; }
   void setCents(int cents) { this->cents = cents; }

   /************************
    * Other public methods
    ************************/
   void prompt();
   void display() const;
   

};

// Non-member operator prototypes go here

std::ostream & operator << (std::ostream & out, const Money & accounts);
bool operator ==(const Money & x, const Money & y);
bool operator !=(const Money & x, const Money & y);

#endif
