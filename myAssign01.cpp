/***********************************************************************
* Program:
*    Assignment 01, Genetic Genealogy  
*    Brother Dudley, CS165
* Author:
*    Will Brown
* Summary: 
*    Write a program to prompt the user for a DNA marker sequence.
*    Prompt the user for a number of relatives
*    Prompt for the names of each of these potential relatives.
*    Prompt for the DNA marker sequence for each potential relative.
*    Display each potential relative and the percentage that they match.
*
*    Estimated:  3.0 hrs   
*    Actual:     10.0+ hrs
*      I need to go over arrays again and again. I feel like I forgot
*      everything from last semester. I had an issue with one of my 
*      macro's that caused me great frustration for a while until I was
*      able to work it out. I've noticed through this that I am a little
*      gunshy with pointers.
************************************************************************/

#include <iostream>
#include <string>
using namespace std;

#define DNALength 10
#define DNASize 32
#define NAMESize 256
void getDnaSequence(char dnaSequence[DNASize]);
int getNumberRelatives();
void getNameRelative(int names[NAMESize], int numRelatives);
void relativeDnaSequence(char names[][NAMESize], 
                         char rdnaSequences[][DNASize], 
                         int numRelatives);
void displayDnaMatch(char dnaSequence[DNASize], 
                     char names[NAMESize], 
                     char rdnaSequences[DNASize], 
                     int numRelatives);

/**********************************************************************
 * Get DNA SEQUENCE.
 * Prompt user for their 10 character DNA sequence.
 ***********************************************************************/
void getDnaSequence(char dnaSequence[DNASize])
{
   cout << "Enter your DNA sequence: ";
   cin.getline(dnaSequence, DNASize);
   
   //if (dnaSequence != 'A' || 'T' || 'C' || 'G')
   //   cout << "invaild DNA Sequence!\n"; 
   //   just realised, error checking not needed yet.
}

/**********************************************************************
 * Get Number of Relatives
 * Prompt user for the number of relatives.
 ***********************************************************************/
int getNumberRelatives()
{
   int numRelatives;
   cout << "Enter the number of potential relatives: ";
   cin >> numRelatives;
   cout << endl;
   
   return numRelatives;
}

/**********************************************************************
 * Get Names of Relatives
 * Prompt user for the names of their relatives.
 * Store names as an array of strings.
 ***********************************************************************/
void getNameRelative(char names[][NAMESize], int numRelatives)
{
   
   for (int i = 0; i < numRelatives; i++)
   {
      cout << "Please enter the name of relative #" << i + 1 << ": ";
      cin >> names[i];
      cin.ignore();
   } 
   cout << endl;
}

/**********************************************************************
 * Get DNA Sequence of Relatives
 * Prompt user for the relatives DNA Sequence.
 * Only 10 Characters long.
 ***********************************************************************/
void relativeDnaSequence(char names[][NAMESize], 
                         char rdnaSequences[][DNASize], int numRelatives)
{   
   for (int i = 0; i < numRelatives; i++)
   {
      cout << "Please enter the DNA sequence for " << names[i]
           << ": ";
      cin.getline(rdnaSequences[i],DNASize);
   }
   cout << endl;
} 

/**********************************************************************
 * Get DNA Match in percent between user and 
 * relatives.
 ***********************************************************************/
void displayDnaMatch(char dnaSequence[DNASize], char names[][NAMESize],                         char rdnaSequences[][DNASize], int numRelatives)
{
   //compare user array of DNA chars with relatives DNA sequence chars.
   
   int i;
   for (i = 0; i < numRelatives; i++)
   {
      char * rdnaSequence = rdnaSequences[i];
      
      // For each character in the DNA Sequences, count how many are the same
      
      int count = 0;
      for (int dnaIndex = 0; dnaIndex < DNALength; dnaIndex++)
      {
         
         char ourChar = dnaSequence[dnaIndex];
         char relChar = rdnaSequence[dnaIndex];
         
         if (ourChar == relChar) 
         {
            count++;
         }
      }
      cout << "Percent match for " << names[i] << ": " 
           << count * 10 << "%\n"; 
   }  
}


/**********************************************************************
 * The main function passes our arrays to our functions to carry out
 * their part.
 ***********************************************************************/
int main()
{
   
   char dnaSequence[DNASize];
   getDnaSequence(dnaSequence);
   int numRelatives = getNumberRelatives();
   char names[numRelatives][NAMESize];
   char rdnaSequences[numRelatives][DNASize];
   
   getNameRelative(names, numRelatives);
   relativeDnaSequence(names, rdnaSequences, numRelatives);
   displayDnaMatch(dnaSequence, names, rdnaSequences, numRelatives);
   return 0;
}
