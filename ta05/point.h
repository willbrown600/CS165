#ifndef POINT_H
#define POINT_H

class Point
{
private:
   int x;
   int y;

public:
   Point()
   {
      this->x =5;
      this->y = 5;
   }
   Point(int, int);

   inline int getX();
   void setX(int);
   inline int getY();
   void setY(int);
   void display();

};

#endif
