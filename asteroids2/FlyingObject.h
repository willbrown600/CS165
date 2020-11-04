/*************************************************************
 * File: flyingObject.h
 * Author: Will Brown
 *
 * Description: This class holds the definitions and methods
 * of the flyingObject class.
 *
 *************************************************************/#pragma once

#ifndef FLYINGOBJECT_H
#define FLYINGOBJECT_H

//#include "game.h"
#include "uiDraw.h"
#include "velocity.h"
#include "point.h"

#include <iostream>
using namespace std;

/*****************************************
 * FLYINGOBJECT
 * The main Flying Object class
 *****************************************/
class FlyingObject
{
protected:

	bool alive;
	Point point;
	Velocity velocity;

public:

	FlyingObject() { };


	//Setters
	void setPoint(Point point) { this->point = point; }
	void setVelocity(Velocity velocity) { this->velocity = velocity; }

	//Getters
	Point getPoint() { return point; }
	Velocity getVelocity() { return velocity; }

	bool isAlive();
	void kill();
	void advance();

};
#endif /* flyingObject_h */
