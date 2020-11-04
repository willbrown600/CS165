/***********************************************************************
* Program:
*    Checkpoint 03b, Exceptions  
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
   
   int num = prompt(number);
      
   cout << "The number is " << num << ".\n";
        
   
   
   return 0;
}

/**********************************************************************
 * VOID PROMPT
 * Purpose: To retrieve an integer from the user and return it to main.
 ***********************************************************************/
int prompt(int number)
{
      
      do   
      {
         cout << "Enter a number: ";
         cin >> number; 
                 
         if (cin.fail())
         {   
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Invalid input.\n";
         }
         
      }
      while (!(number));
      
   return number;

}



 

