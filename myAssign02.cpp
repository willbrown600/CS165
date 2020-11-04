/***********************************************************************
* Program:
*    Assignment 02, Digital Forensics  
*    Brother Dudley, CS165
* Author:
*    Will Brown
* Summary: 
*    I am really proud of myself, as last semester I 
*    just could not grasp a lot of things but this semester 
*    I feel like I am taking in a lot more. Well, it's still 
*    early days yet. But I am enjoying the course. 
* ***********************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
using namespace std;

#define SIZE 500
//define SIZE of array.


// Apply the strut with the associated member variables.
// firstName, lastName and iDnumber.
struct AccessRecord
{
   string username;
   string filename;
   long timestamp;
};
//Prototypes
string getFile(string file);
void readFile(AccessRecord accessData[SIZE]);
void prompt(long &startTimestamp, long &endTimestamp);
void display(const long startTimestamp, const long endTimestamp,                        AccessRecord accessData[SIZE]);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   //Use struct AccessRecord to store information.e.g. username,filename & 
   //timestamp in an array of structs called accessdata[]
   AccessRecord accessData[SIZE];
   //Use readFile function to cess data from array of structs.
   readFile(accessData);
   // Get the start and end time
   long startTimestamp; 
   long endTimestamp;   
   //prompt(startTimestamp, endTimestamp);
   //read file
   
   // Display the results
   //display(startTimestamp, endTimestamp, accessData);
   return 0;
}

/**********************************************************************
 * GET FILE
 * Purpose: To retrieve file from the user.
 ***********************************************************************/
   string getFile(string file)
{
   cout << "Enter the access record file: ";
   cin >> file;
   cin.ignore();
   cout << endl;
   //Could not void function because I needed to return file back to          readFile.
   return file;

}

/**********************************************************************
 * READ FILE
 * Purpose: To read the file retrieved.
 ***********************************************************************/
void readFile(AccessRecord accessData[SIZE])
{
   //get file.
   string file;
   string File = getFile(file);
   /*char file[256];
   cout << "Enter the access record file: ";
   cin.getline(file, 256);
   cout << endl;*/
   //Get start time and endtime
   long startTimestamp; 
   long endTimestamp;   
   prompt(startTimestamp, endTimestamp);
   
   //if fail to read file.
   ifstream fin(File);
   if (fin.fail())
   {
      cout << "ERROR! Unable to read file " << File << endl;
   }
   //read data.
   string data;
   int i;
   
   int wordCount = 0;
   
   while (!fin.eof())                      //loop through to end of file
   {
      char word[128];                    //declare word 128 chars long
      fin >> word;                       //read the file words.
       
      char* endptr;                      //Pointer to the /0 null.
       
      switch (wordCount)                  //Use switch option to tell
      {                                  //word suits which member
                                          //variable it belopngs to.
         case 0:
         {
            accessData[i].filename = word;    //filename member
            wordCount = 1;             //wordCount to help reset lines.
         }
         break;
         case 1:
         {
            accessData[i].username = word;    //username member
            wordCount = 2;
         }
         break;
         case 2:
         {
            accessData[i].timestamp = strtol(word, &endptr, 10);
               
               //Using strtol to help convert integers to string
               // member timestamp.
               
               // New line comes next
            i++;
            wordCount = 0;
         }
         break;
      }
   
   }
   /*cout << "" << accessData[i].filename << " "
        << accessData[i].username << " " 
        << accessData[i].timestamp << endl;*/
   cout << endl;
   
   fin.close();
   //Pass information through to the display function.
   display(startTimestamp, endTimestamp, accessData);

}

/**********************************************************************
 * VOID PROMPT
 * Purpose: To prompt user for start and end timestamps.
 ***********************************************************************/
void prompt(long &startTimestamp, long &endTimestamp)
{
   cout << "Enter the start time: ";
   cin >> startTimestamp;
   
   cout << "Enter the end time: ";
   cin >> endTimestamp;
    
}


/**********************************************************************
 * VOID DISPLAY
 * Purpose: To display the input.
 ***********************************************************************/
void display(const long startTimestamp, const long endTimestamp,                        AccessRecord accessData[SIZE])
{
   // Print the header
   cout << "The following records match your criteria:" << endl << endl;
   
   cout << setw(15) << "Timestamp" << setw(20) << "File" << setw(20)
        << "User" << endl;
   cout << "---------------" << setw(20) << "-------------------"
        << setw(20) << "-------------------" << endl;
   
   // Print the contents that match the criteria   
   for (int i = 0; i < SIZE; i++)
   {
      if (accessData[i].timestamp > startTimestamp 
         && accessData[i].timestamp < endTimestamp)
      {
         cout << setw(15) << accessData[i].timestamp << setw(20)
              << accessData[i].filename << setw(20) 
              << accessData[i].username
              << endl;
      }
   }
   cout << "End of records\n";
}

