/***********************************************************************
* Program:
*    Checkpoint 10a, Vectors
*    Brother Dudley, CS165
* Author:
*    Will Brown
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
************************************************************************/
#include <vector>       //for vector and vector iterator
#include <iostream>     //used for both cin and cout.
#include <string>       //used for string.
//#include <list>

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   std::vector<int>ints;   //declared vector of integers.

   int number;
   do                 //fill vector with integers.
   {
      
      std::cout << "Enter int: ";
      std::cin >> number;
      if (number == 0)
      {
         std::vector<int>pop_back();
      }
      else
      {
         ints.push_back(number);
      }
   } while (number != 0);

   std::cout << "Your list is:\n";
   for (std::vector <int> :: iterator nums = ints.begin();
        nums != ints.end();
        nums++)                        //use vector for loop.
      {
         std::cout << *nums << std::endl;    //cout all ints = nums in vector.
      }
   
   std::cout << std::endl;

   std::vector<std::string> strings;      //declared vector of strings

   std::string text;
   do
   {
      std::cout << "Enter string: ";
      std::cin >> text;
      if(text == "quit")
         std::vector<int>pop_back();
      else
         strings.push_back(text);

   } while (text != "quit");

   std::cout << "Your list is:\n";
   for (std::vector<std::string> :: iterator words = strings.begin();
        words != strings.end();
        words++)
   {
      std::cout << *words << std::endl;
   }
   

   return 0;
}


