/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers  
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
struct Complex
{
   double real;
   double imaginary;
};

struct numbers
{
   Complex a;
   Complex b;
};



void prompt(numbers &number);
void addComplex(numbers &number, double sum);
void display(numbers &number);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   numbers number;
   double sum;
   prompt(number);
   //addComplex(number, sum);
   display(number);
   return 0;
}

/**********************************************************************
 * VOID PROMPT
 * Purpose: To retrieve input from the user.
 ***********************************************************************/
void prompt(numbers &number)
{
   
        
   cout << "Real: ";
   cin >> number.a.real;
   cout << "Imaginary: ";
   cin >> number.a.imaginary;
   cout << "Real: ";
   cin >> number.b.real;
   cout << "Imaginary: ";
   cin >> number.b.imaginary;
   cout << endl;
      
      /*cout << "Real: ";
      cin >> c1a;
      cout << "Imagainary: ";
      cin >> c2a;*/
   
   
   
}

/**********************************************************************
 * INT ADDCOMPLEX
 * Purpose: To add the two real and imaginary numbers together.
 ***********************************************************************/
void addComplex(numbers &number, double sum)
{ 
   /*double sum = numbers.a.real + numbers.b.real;
   
   double sumi = numbers.a.imaginary + numbers.b.imaginary;

   return sum;*/
}


/**********************************************************************
 * VOID DISPLAY
 * Purpose: To display the input gathered by user in a string format.
 ***********************************************************************/
void display(numbers &number)
{
   cout << "The sum is: " << number.a.real + number.b.real
        << " + " << number.a.imaginary + number.b.imaginary
        << "i\n";





}

