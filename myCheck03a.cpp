/***********************************************************************
* Program:
*    Checkpoint 03a, Exceptions  
*    Brother Dudley, CS165
* Author:
*    Will Brown
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
************************************************************************/

#include <iostream>
#include <string>
#include <cassert>
#include <string.h>
using namespace std;

int prompt(int number);



/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int number;
   string message;
   try 
   {
      int num = prompt(number);
      if (num < 0)
      {
         throw string("The number cannot be negative.\n");
      }
      else if (num > 100)
      {
         throw string("The number cannot be greater than 100.\n");
      }
         
      else if (num % 2 != 0)
      {
         throw string("The number cannot be odd.\n");
      } 
      
      else  
         cout << "The number is " << num << ".\n";
      
   }  
   catch (string message)
   {
      cout << "Error: " << message;
   }
   /*
   catch (string message)
   {
      cout << "Error: " << message;
   }
   catch (string message)
   {
      cout << "Error: " << message;
   }*/
   
   return 0;
}

/**********************************************************************
 * VOID PROMPT
 * Purpose: To retrieve an integer from the user and return it to main.
 ***********************************************************************/
int prompt(int number)
{
   cout << "Enter a number: ";
   cin >> number;
      
   return number;    
       

}



 

