/*********************************************************************
 * File: game.h
 * Description: Defines the game class for Asteroids
 *
 *********************************************************************/#pragma once

#ifndef GAME_H
#define GAME_H

#define CLOSE_ENOUGH 15

#include <vector>
#include <iostream>

#include "uiDraw.h"
#include "uiInteract.h"
#include "point.h"
#include "velocity.h"
// TODO: include your bullet and bird classes
#include "flyingObject.h"
#include "bullet.h"
#include "rocks.h"
#include "ship.h"

/*****************************************
 * GAME
 * The main game class containing all the state
 *****************************************/
class Game
{
public:
	/*********************************************
	 * Constructor
	 * Initializes the game
	 *********************************************/
	Game(Point tl, Point br);
	~Game();

	/*********************************************
	 * Function: handleInput
	 * Description: Takes actions according to whatever
	 *  keys the user has pressed.
	 *********************************************/
	void handleInput(const Interface & ui);

	/*********************************************
	 * Function: advance
	 * Description: Move everything forward one
	 *  step in time.
	 *********************************************/
	void advance();

	/*********************************************
	 * Function: draw
	 * Description: draws everything for the game.
	 *********************************************/
	void draw(const Interface & ui);

	float getClosestDistance(const FlyingObject &obj1, const FlyingObject &obj2) const;

private:
	// The coordinates of the screen
	Point topLeft;
	Point bottomRight;

	int score;

	Ship ship;
	std::vector<Bullet> bullets;

	// TODO: declare your bird here (e.g., "Bird * bird;")

	Rock * rock;

	/*************************************************
	 * Private methods to help with the game logic.
	 *************************************************/
	bool isOnScreen(const Point & point);
	void advanceBullets();
	void advanceRock();
	Rock * createRock();

	void handleCollisions();
	void cleanUpZombies();
};

#endif /* GAME_H */