/******************************************************
 * HEADER FILE
 *  Lander.h
 * Author:
 *	Will Brown
 * Summary:
 * This header file will include the varibles associated
 * with the Lander as well as its prototype functions.
 *
 ******************************************************/


#ifndef LANDER_H
#define LANDER_H

#include "point.h"
#include "game.h"
#include "ground.h"
#include "uiDraw.h"
#include "uiInteract.h"

/*********************************************************
 * LANDER CLASS:
 * Consisting of all lander variables and prototypes.
 ********************************************************/

class Lander
{
private:
	Point point;
	float gravity;
	  int fuel;
	float thrust;
	 bool islanderDead;

public:
	void draw();
	 int getPoint();
	void setFuel();
	void setgravity();
	 int getgravity();
	 int getfuel();
	void setThrust();
	 int getThrust();
	bool landerDead();


	
	

};


#endif // !LANDER.H
