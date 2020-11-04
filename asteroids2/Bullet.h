/*************************************************************
 * File: bullet.h
 * Author: Will Brown
 *
 * Description: This class holds the definitions and methods
 * of the bullet class.
 *
 *************************************************************/#pragma once

#ifndef BULLET_H
#define BULLET_H

#define BULLET_SPEED 5
#define BULLET_LIFE 40

#include "flyingObject.h"
#include "uiDraw.h"

#include <cmath>
#include <iostream>






// Put your Bullet class here
class Bullet : public FlyingObject 
{
protected:

	bool bulletAlive;

public:

	Bullet();

	void advance();
	void fire(Point point);
	void draw();

};



#endif /* bullet_h */
