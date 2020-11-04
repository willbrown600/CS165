/*************************************************************
 * File: flyingObject.cpp
 * Author: Will Brown
 *
 * Description: Contains the implementations of the
 *  methods for the flyingObject class.
 *
 *************************************************************/

#include "flyingObject.h"
#include <iostream>
using namespace std;


/***************************************
 * BOOL IS ALIVE FUNCTION
 ***************************************/
bool FlyingObject::isAlive()
{
	return alive;
}

/***************************************
 * KILL FUNCTION
 ***************************************/
void FlyingObject::kill()
{
	alive = false;
}

/***************************************
 * ADVANCE FUNCTION
 ***************************************/
void FlyingObject::advance()
{

	point.setX(point.getX() + velocity.getDx());
	point.setY(point.getY() + velocity.getDy());

}

