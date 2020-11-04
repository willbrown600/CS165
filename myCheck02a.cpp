/***********************************************************************
* Program:
*    Checkpoint 02a, Structs  
*    Brother Dudley, CS165
* Author:
*    Will Brown
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;




// Apply the strut with the associated member variables.
// firstName, lastName and iDnumber.
struct Student
{
   string firstName;
   string lastName;
   int iDnumber;
};

void prompt(Student &input);
void display(Student &output);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   Student student;
   prompt(student);
   display(student);
   return 0;
}

/**********************************************************************
 * VOID PROMPT
 * Purpose: To retrieve input from the user.
 ***********************************************************************/
void prompt(Student &input)
{
   //int iDnumber;
   cout << "Please enter your first name: ";
   getline(cin, input.firstName);
   cout << "Please enter your last name: ";
   getline(cin, input.lastName);
   cout << "Please enter your id number: ";
   cin >> input.iDnumber;
   cout << endl;
}

/**********************************************************************
 * VOID DISPLAY
 * Purpose: To display the input gathered by user in a string format.
 ***********************************************************************/
void display(Student &output)
{
   cout << "Your information:\n";
   cout << output.iDnumber << " - " << output.firstName << " "
        << output.lastName << endl;





}

