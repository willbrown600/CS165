/*************************************************************
 * File: bullet.cpp
 * Author: Will Brown
 *
 * Description: Contains the implementations of the
 *  methods for the bullet class.
 *
 *************************************************************/

#include "bullet.h"

#define M_PI 3.14159265358979323846  /* pi */

 /***************************************
  * BULLET CONSTRUCTOR
  ***************************************/
Bullet::Bullet()
{
	//bulletAlive = true;
}

/***************************************
 * DRAW FUNCTION
 * This draws a bullet onto the screen.
 ***************************************/
void Bullet::draw()
{
	//drawDot(Point point);
}

/***************************************
 * FIRE FUNCTION
 * This shoots a bullet onto the screen.
 ***************************************/
void Bullet::fire(Point point)
{
	/*this->point = point;
	float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));		//assignment tip
	float dy = BULLET_SPEED * (sin(M_PI / 180.0 * angle));

	velocity.setDx(velocity.getDx() + dx);  //from lander code of applying thrust
	velocity.setDy(velocity.getDy() + dy);*/
}
/***************************************
 * ADVANCE FUNCTION
 * This advances a bullet on the screen.
 ***************************************/
void Bullet::advance()
{
	//FlyingObject::advance();
}

// Put your bullet methods here
