/***********************************************************************
* Program:
*    Checkpoint 01b, C++ Basics  
*    Brother Dudley, CS165
* Author:
*    Will Brown
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <cassert>
using namespace std;

int getSize();

void getList(int List[], int size);

void displayMultiples(int List[], int size);


/*******************************************************************
 * GET SIZE
 * prompts for the size of the list, or the number of integers to be read in.
 *******************************************************************/
int getSize()
{
   int size;
   cout << "Enter the size of the list: ";
   cin >> size;
   
   return size;
}

/*******************************************************************
 * GET LIST
 * it accepts an array of integers and a count. 
 * It should prompt the user for the list of numbers 
 * and store them in the passed array.
 *******************************************************************/
void getList(int List[], int size)
{
   //int number;
   int i = 0;
   
   for (int i = 0; i < size; i++)
   {
      cout << "Enter number for index " << i << ": ";
      cin >> List[i];
   }
   
}

/*******************************************************************
 * DISPLAY MULTIPLES
 * It should loop through each element in the array 
 * and display it if it is divisible by 3.
 *******************************************************************/
void displayMultiples(int List[], int size)
{
   //initialize and declare numbers to zero.
   int numbers = 0;
   int notDivisible = 0;
   //int List[size];
   //getList(List, size);
   // loop through list using standard for loop.
   cout << endl;
   cout << "The following are divisible by 3:\n";
   for (int i = 0; i < size; i++)
   {
      //Use if statement to see if List[i] is divisible by 3.
      if (List[i] % 3 == 0)
      {
         numbers += List[i];
         cout << List[i];
         cout << endl; 
      }
      
   }
}


/*******************************************************************
 * Main
 ******************************************************************/
int main()
{
   int size = getSize();
   int List[size];
   
   getList(List, size);
   
   displayMultiples(List, size);
   
   
   return 0;
}
