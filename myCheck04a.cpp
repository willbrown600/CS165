/***********************************************************************
* Program:
*    Checkpoint 04a,   
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



class Book
{
   std::string title;
   std::string author;
      
   public:
      void prompt ()
      {
         std::cout << "Title: ";
         std::getline(std::cin, title);
         std::cout << "Author: ";
         std::getline(std::cin, author);
      
      }
   
      
      void display()
      {
         std::cout << "\"" << title << "\"" << " by " << author << std::endl;
      }
};



/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   Book book;
   
   
      
   book.prompt();
   
   book.display();
   
   
   
   return 0;
}

/**********************************************************************
 * VOID PROMPT
 * Purpose: To retrieve an integer from the user and return it to main.
 ***********************************************************************/
/*void Book :: prompt(Book title, Book author)
{
   
   cout << "Title: ";
   getline(cin, title);
   cout << "Author: ";
   getline(cin, author);
   cout << endl;
   
   book.display(title, author);
}*/

/**********************************************************************
 * VOID DISPLAY
 * Purpose: To retrieve an integer from the user and return it to main.
 ***********************************************************************/
/*void Book :: display(book title, book author)
{
   cout << book.title << " by " << book.author << endl;  

}*/

