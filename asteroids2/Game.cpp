/*********************************************************************
 * File: game.cpp
 * Description: Contains the implementaiton of the game class
 *  methods.
 *
 *********************************************************************/

#include "game.h"
#include "point.h"
#include "rocks.h"
#include "ship.h"

#define OFF_SCREEN_BORDER_AMOUNT 5

// These are needed for the getClosestDistance function...
#include <limits>
#include <algorithm>
using namespace std;


// You may find this function helpful...

/**********************************************************
 * Function: getClosestDistance
 * Description: Determine how close these two objects will
 *   get in between the frames.
 **********************************************************/
float Game::getClosestDistance(const FlyingObject &obj1, const FlyingObject &obj2) const
{
   // find the maximum distance traveled
   /*float dMax = max(abs(obj1.getVelocity().getDx()), abs(obj1.getVelocity().getDy()));
   dMax = max(dMax, abs(obj2.getVelocity().getDx()));
   dMax = max(dMax, abs(obj2.getVelocity().getDy()));
   dMax = max(dMax, 0.1f); // when dx and dy are 0.0. Go through the loop once.
   
   float distMin = std::numeric_limits<float>::max();
   for (float i = 0.0; i <= dMax; i++)
   {
      Point point1(obj1.getPoint().getX() + (obj1.getVelocity().getDx() * i / dMax),
                     obj1.getPoint().getY() + (obj1.getVelocity().getDy() * i / dMax));
      Point point2(obj2.getPoint().getX() + (obj2.getVelocity().getDx() * i / dMax),
                     obj2.getPoint().getY() + (obj2.getVelocity().getDy() * i / dMax));
      
      float xDiff = point1.getX() - point2.getX();
      float yDiff = point1.getY() - point2.getY();
      
      float distSquared = (xDiff * xDiff) +(yDiff * yDiff);
      
      distMin = min(distMin, distSquared);
   }
   
   return sqrt(distMin)*/
	
	return 1;
}


/***************************************
 * GAME CONSTRUCTOR
 ***************************************/
Game::Game(Point tl, Point br)
	: topLeft(tl), bottomRight(br), ship(1)
{
	// Set up the initial conditions of the game
	score = 0;

	// TODO: Set your bird pointer to a good initial value (e.g., NULL)
	rock = NULL;


	// TODO: Check to see if there is currently a bird allocated
	//       and if so, delete it.
}
	
Game::~Game()
{
	if(rock != NULL)
	{
		delete rock;
	}

}

/***************************************
 * GAME :: ADVANCE
 * advance the game one unit of time
 ***************************************/
void Game::advance()
{
	advanceBullets();
	advanceRock();

	handleCollisions();
	cleanUpZombies();
}

/***************************************
 * GAME :: ADVANCE
 * advance the game one unit of time
 ***************************************
void Game::advance()
{
	/*if (lander.isAlive() && !lander.isLanded())
	{
		// advance the lander
		lander.applyGravity(GRAVITY_AMOUNT);
		lander.advance();

		// check for crash
		if (!ground.isAboveGround(lander.getPoint()))
		{
			lander.setAlive(false);
		}

		// check for just landed
		if (justLanded())
		{
			lander.setLanded(true);
		}
	}
}
*/

/***************************************
 * GAME :: ADVANCE BULLETS
 * Go through each bullet and advance it.
 ***************************************/
void Game::advanceBullets()
{
	// Move each of the bullets forward if it is alive
	/*for (int i = 0; i < bullets.size(); i++)
	{
		if (bullets[i].isAlive())
		{
			// this bullet is alive, so tell it to move forward
			bullets[i].advance();

			if (!isOnScreen(bullets[i].getPoint()))
			{
				// the bullet has left the screen
				bullets[i].kill();
			}

		}
	}*/
}

/**************************************************************************
 * GAME :: ADVANCE BIRD
 *
 * 1. If there is no bird, create one with some probability
 * 2. If there is a bird, and it's alive, advance it
 * 3. Check if the bird has gone of the screen, and if so, "kill" it
 **************************************************************************/
void Game::advanceRock()
{
	if (rock == NULL)
	{
		// there is no bird right now, possibly create one

		// "resurrect" it will some random chance
		if (random(0, 3) == 0)
		{
			// create a new bird
			rock = createRock();
		}
	}
	else
	{
		// we have a bird, make sure it's alive
		if (rock->isAlive())
		{
			// move it forward
			rock->advance();

			// check if the bird has gone off the screen
			if (!isOnScreen(rock->getPoint()))
			{
				// We have missed the bird
				rock->kill();
			}
		}
	}

}

/**************************************************************************
 * GAME :: CREATE BIRD
 * Create a bird of a random type according to the rules of the game.
 **************************************************************************/
Rock* Game::createRock()
{
	Rock* newRock = NULL;

	// TODO: Fill this in
	if (NULL)
	{
		new LargeRock();

	}
	else
		return 0;
}

/**************************************************************************
 * GAME :: IS ON SCREEN
 * Determines if a given point is on the screen.
 **************************************************************************/
bool Game::isOnScreen(const Point & point)
{
	return (point.getX() >= topLeft.getX() - OFF_SCREEN_BORDER_AMOUNT
		&& point.getX() <= bottomRight.getX() + OFF_SCREEN_BORDER_AMOUNT
		&& point.getY() >= bottomRight.getY() - OFF_SCREEN_BORDER_AMOUNT
		&& point.getY() <= topLeft.getY() + OFF_SCREEN_BORDER_AMOUNT);
	
}

/**************************************************************************
 * GAME :: HANDLE COLLISIONS
 * Check for a collision between a bird and a bullet.
 **************************************************************************/
void Game::handleCollisions()
{
	// now check for a hit (if it is close enough to any live bullets)
	for (int i = 0; i < bullets.size(); i++)
	{
		if (bullets[i].isAlive())
		{
			// this bullet is alive, see if its too close

			// check if the bird is at this point (in case it was hit)
			if (rock != NULL && rock->isAlive())
			{
				// BTW, this logic could be more sophisiticated, but this will
				// get the job done for now...
				if (fabs(bullets[i].getPoint().getX() - rock->getPoint().getX()) < CLOSE_ENOUGH
					&& fabs(bullets[i].getPoint().getY() - rock->getPoint().getY()) < CLOSE_ENOUGH)
				{
					//we have a hit!

					// hit the bird
					int points = rock->hit();
					score += points;

					// the bullet is dead as well
					bullets[i].kill();
				}
			}
		} // if bullet is alive

	} // for bullets*/
}

/**************************************************************************
 * GAME :: CLEAN UP ZOMBIES
 * Remove any dead objects (take bullets out of the list, deallocate bird)
 **************************************************************************/
void Game::cleanUpZombies()
{
	//check for dead bird
	if (rock != NULL && !rock->isAlive())
	{
		// the bird is dead, but the memory is not freed up yet

		// TODO: Clean up the memory used by the bird
		rock = NULL;

	}

	// Look for dead bullets
	vector<Bullet>::iterator bulletIt = bullets.begin();
	while (bulletIt != bullets.end())
	{
		Bullet bullet = *bulletIt;
		// Asteroids Hint:
		// If we had a list of pointers, we would need this line instead:
		//Bullet* pBullet = *bulletIt;

		if (!bullet.isAlive())
		{
			// If we had a list of pointers, we would need to delete the memory here...


			// remove from list and advance
			bulletIt = bullets.erase(bulletIt);
		}
		else
		{
			bulletIt++; // advance
		}
	}
}

/***************************************
 * GAME :: HANDLE INPUT
 * accept input from the user
 ***************************************/
void Game::handleInput(const Interface & ui)
{
	// Change the direction of the rifle
	/*if (ui.isLeft())
	{
		rifle.moveLeft();
	}

	if (ui.isRight())
	{
		rifle.moveRight();
	}

	// Check for "Spacebar
	if (ui.isSpace())
	{
		Bullet newBullet;
		newBullet.fire(rifle.getPoint(), rifle.getAngle());

		bullets.push_back(newBullet);
	}*/
}

/*********************************************
 * GAME :: DRAW
 * Draw everything on the screen
 *********************************************/
void Game::draw(const Interface & ui)
{
	// draw the bird

	// TODO: Check if you have a valid bird and if it's alive
	// then call it's draw method
	if (rock != NULL)
	{
		rock->draw();
	}


	// draw the rifle
	ship.draw();

	// draw the bullets, if they are alive
	for (int i = 0; i < bullets.size(); i++)
	{
		if (bullets[i].isAlive())
		{
			bullets[i].draw();
		}
	}

	// Put the score on the screen
	Point scoreLocation;
	scoreLocation.setX(topLeft.getX() + 5);
	scoreLocation.setY(topLeft.getY() - 10);
	drawText(scoreLocation, "SCORE :");
	Point scoreLocation2;
	scoreLocation2.setX(topLeft.getX() + 10);
	scoreLocation2.setY(topLeft.getY() - 60);
	drawNumber(scoreLocation, score);

}



