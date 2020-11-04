#include "robot.h"
#include <iostream>
using namespace std;

/************************************
 * Constructors
 ************************************/
Robot :: Robot(int energy)
{
   this->setEnergy(energy);
}

Robot :: Robot(Point position, int energy)
{
   this->position = setPosition(position);
   this->energy = setEnergy(energy);
}

/************************************
 * Function: Display
 * Purpose: Displays the robot.
 ************************************/
void Robot :: display()
{
   position.display();
   cout << " - Energy: " << getEnergy() << endl;
}
/************************************
 * Function: Set Position
 * Purpose: Sets the position of the robot.
 ************************************/
Point Robot :: setPosition(Point position)
{
   this->position;
}
/************************************
 * Function: Get Position
 * Purpose: Gets the position of the robot.
 ************************************/
Point Robot :: getPosition()
{
   return position;
}
/************************************
 * Function: Set Energy
 * Purpose: Sets the energy of the robot.
 ************************************/
int Robot :: setEnergy(int energy)
{
   
   if (energy < 0)
   {
      energy = 0;
   }   
   else
   {
      return energy;
   }
   
}
/************************************
 * Function: Get Energy
 * Purpose: Get the energy of the robot.
 ************************************/
int Robot :: getEnergy()
{
   return energy;
}