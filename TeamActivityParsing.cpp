/***********************************************************************
* Program:
*    Team Activity, Parsing Streams 
*    Brother Dudley, CS165
* Author:
*    Will Brown
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
************************************************************************/

#include <iostream>
#include <string>
#include <cassert>
#include <fstream>
#include <sstream>
using namespace std;

struct Scripture
{
   string book;
   int chapter = 0;
   int Verse = 0;
   int endVerse = 0;
};

string prompt();
bool parseFile(string file);
void parseLine(string line, Scripture & newScripture);
void display(const Scripture & newScripture);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   string file = prompt();
   
   parseFile(file);
           
   
   
   return 0;
}

/**********************************************************************
 * STRING PROMPT
 * Purpose: To recieve a fileName from the user and return it to main.
 ***********************************************************************/
string prompt()
{
   string fileName;
   cout << "Enter a filename: ";
   cin >> fileName;
   
   return fileName;
}         

/**********************************************************************
 * BOOL PARSEFILE
 * Purpose: To recieve a fileName from the user and return it to main.
 ***********************************************************************/
bool parseFile(string file)
{
   // use c-strings.
   //ifstream can only read c-string. Convert to c-string using FILENAME.c_str()
   ifstream fin(file.c_str());
   
   //first file fail.
   if (fin.fail())
   {
      cout << "ERROR! Opening file: " << file << endl;
      return false; 
   }
   
   string line;
   
   while (getline(fin, line)) //Using strings requires getline cin. ONe line at a time looping through.
   {
      Scripture newScripture; //Providing access to Scripture struct.
      
      // Parse the line into the provided scripture struct.
      parseLine(line, newScripture);
      
      display(newScripture); //call display function passing new struct.
      cout << endl;
   }
   fin.close();    //close file. 
   return true;
}
   
/**********************************************************************
 * VOID PARSELINE
 * Purpose: To recieve a fileName from the user and return it to main.
 ***********************************************************************/
void parseLine(string line, Scripture & newScripture)
{
  
   
   stringstream buffer(line);
   
   buffer >> newScripture.book;
   
  
   
   buffer >> newScripture.chapter;
   buffer >> newScripture.Verse;
   buffer >> newScripture.endVerse;
   
   if (buffer.fail())
   {
      newScripture.endVerse = 0;
   } 
   
}

/**********************************************************************
 * VOID DISPLAY
 * Purpose: To display the passed scripture.
 ***********************************************************************/
void display(const Scripture & newScripture)
{
   //if (newScripture.book )
   cout << newScripture.book << " ";
   cout << newScripture.chapter;
   if (newScripture.Verse == 0)
   {
      cout << ' ';   
   }
   else
   {
      cout << ":" << newScripture.Verse;
   
      if ((newScripture.Verse >= newScripture.endVerse))
      {
            cout << newScripture.endVerse << "-" << newScripture.Verse;
      }
      else
      {
      cout << newScripture.Verse << "-" << newScripture.endVerse;
      }
   }
   /*if (newScripture.endVerse > 0)
   {
      
   }*/


   /*else if(newScripture.Verse > newScripture.endVerse)
   {
      int temp;
      newScripture.startVerse = temp;
      newScripture.startVerse = newScripture.endVerse;
      newScripture.endVerse = temp;
   }*/
}
      
