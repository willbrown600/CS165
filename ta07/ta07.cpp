#include <iostream>
using namespace std;

//Prototypes
float getValueFromPointer(float* thePointer);
float* getMinValue(float* a, float* b);
void swapElements(float* theArray[], int a, int b);
void sortArray(float* theArray[]);

int sizeArray = 0;

// Core requirements
/***************************************
 * GET VALUE FROM POINTER FUNCTION
 * ************************************/
float getValueFromPointer(float* thePointer)
{
   return *thePointer;
}
/***************************************
 * GET MINIMUM VALUE FUNCTION
 * ************************************/
float* getMinValue(float* a, float* b)
{
   if (getValueFromPointer(a) < getValueFromPointer(b))
   {
      return a;
   }
   else
   {
      return b;
   }
   
}

// Stretch goals
/*******************************************
 * SWAP ELEMENTS
 * ****************************************/
void swapElements(float* theArray[], int a, int b)
{
   float * temp = theArray[a];
   theArray[a] = theArray[b];
   theArray[b] = temp;

   //C = A
   //A = B
   //B = C

}

/*******************************************
 * SORT ARRAY
 * ****************************************/
void sortArray(float* theArray[])
{
   for (int i = 0; i < sizeArray - 1; i++)
   {
      for(int j = i; j < sizeArray; j++)
      {
         if (getValueFromPointer(*theArray + i) < getValueFromPointer(*theArray + j))
         {
            swapElements(theArray, i, j);
         }
      }
   }
}

/*******************************************
 * MAIN
 * ****************************************/
int main()
{  
    // Core Requirement 1
   int arraySize;
   cout << "Enter the array size: ";
   cin >> arraySize;
   sizeArray = arraySize;

   // Allocate your array(s) here
   float * myArray = new float [arraySize];

   // Fill your array with float values
   for(int i = 0; i < arraySize; i++) 
   {
          cout << "Enter a float value: ";
          cin >> myArray[i];
   }

    // Core Requirement 2
   for (int i = 0; i < arraySize; i++)
   {
      float value = getValueFromPointer(* & myArray + i);
      cout << "The value of the element " << i << " is: ";
      cout << value << endl;
   }
   

    // Core Requirement 3
   // Print the smaller of the first and last elements of the array
   float *pointerToMin = getMinValue(&myArray[0], &myArray[arraySize - 1]);
   cout << *pointerToMin;
   sortArray(& myArray);
   for (int i = 0; i < arraySize; i++)
   {
      float value = getValueFromPointer(* & myArray + i);
      cout << "The value of the element " << i << " is: ";
      cout << value << endl;
   }
   
   

   
   

   // Clean up your array(s) here
   delete [] myArray;

   return 0;
}

