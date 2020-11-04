#include "point.h"

#include <iostream>
using namespace std;

/*****************************************
 * Constructors
 * **************************************/
Point :: Point(int x, int y)
{
   this->setX(x);
   this->setY(y);
}

/******************************************
 * Function: display
 * Purpose: Displays the point
 ******************************************/
void Point :: display()
{
   // Note: We could just use x and y here and not the getters
   // because it's a member function. But this will force you
   // to deal with const :-)...

   cout << "(" << getX() << ", " << getY() << ")";
}
/******************************************
 * Function: display
 * Purpose: Displays the point
 ******************************************/
void Point :: setX(int x)
{

   if (x < 1)
   {
      this->x = x * -1;
   }
   else if (x > 10)
   {
      this->x = 10;
   }
   else
   {
      this->x;
   }
   

}
/******************************************
 * Function: display
 * Purpose: Displays the point
 ******************************************/
void Point :: setY(int y)
{
   if (y < 1)
   {
      this->y = y * -1;
   }
   else if (y > 10)
   {
      this->y = 10;
   }
   else
   {
      this->y;
   }

}
/******************************************
 * Function: display
 * Purpose: Displays the point
 ******************************************/
inline int Point :: getX()
{
   return this->x = x;

}
/******************************************
 * Function: display
 * Purpose: Displays the point
 ******************************************/
inline int Point :: getY()
{
   return this->y = y;

}
