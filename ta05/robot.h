#ifndef ROBOT_H
#define ROBOT_H

#include "point.h"

class Robot
{
private:
   Point position;
   int energy;

public:
   Robot()
   {
      this->energy = 100;
   }
   Robot(int);
   Robot(Point, int);

   Point setPosition(Point);
   Point getPosition();
   int setEnergy(int energy);
   int getEnergy();
   void display();

};

#endif
