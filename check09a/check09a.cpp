/***********************************************************************
* Program:
*    Checkpoint 09a, Virtual Functions
*    Brother Dudley, CS165
* Author:
*    Will Brown
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

// For this assignment, for simplicity, you may put all of your classes
// in this file.

// TODO: Define your classes here

class Car
{
   protected:

      string name;
      string doors;

   public:

      Car()
      {
         name = "Unknown model";
         doors = "Unknown doors";
      }

      void setName(string name) { this->name = name; };
      string getName() { return name; }
      void setDoors(string doors) { this->doors = doors; }
      string getDoorSpecs() { return doors; }
      void attachDoors(string *name);
      virtual void display()
      {
         cout << "Attaching doors to " << name << " - " << doors
              << endl;
      }
      
};

class Civic : public Car
{
   protected:
   public:

      Civic()
      {
         name = "Civic";
         doors = "4 doors";

      }

      void display()
      {
         cout << "Attaching doors to " << name << " - " << doors
              << endl;
      }
      
      //void setName(string name);
      //string getName() { cout << name; }
      //string getDoorSpecs() { cout << "4 doors"; } 
};

class Odyssey : public Car
{
   protected:
   public:

      Odyssey()
      {
         name = "Odyssey";
         doors = "2 front doors, 2 sliding doors, 1 tail gate";
      }

      void display()
      {
         cout << "Attaching doors to " << name << " - " << doors
              << endl;
      }
      

      //void setName(string name);
      //string getName() { cout << name; }
      //string getDoorSpecs() { cout << "2 front doors, 2 sliding doors, 1 tail gate"; }
};

class Ferrari : public Car
{
   protected:
   public:

      Ferrari()
      {
         name = "Ferrari";
         doors = "2 butterfly doors";
      }

      void display()
      {
         cout << "Attaching doors to " << name << " - " << doors
              << endl;
      }
      
      //void setName(string name);
      //string getName() { cout << name; }
      //string getDoorSpecs() { cout << "2 butterfly doors"; }

};


/**********************************************************************
 * Function: attachDoors
 * Purpose: This function can accept any type of Car object. It will
 *  call the appropriate functions to display the name and the doors info.
 ***********************************************************************/

// TODO: Include your attachDoors function here
void attachDoors(Car car)
{
   car.display();
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // You should not change main

   Civic civic;
   Odyssey odyssey;
   Ferrari ferrari;

   attachDoors(civic);
   attachDoors(odyssey);
   attachDoors(ferrari);

   return 0;
}


