/***********************************************************************
* Program:
*    Checkpoint 08a, Inheritance
*    Brother Dudley, CS165
* Author:
*    Will Brown
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>


// For this assignment, for simplicity, you may put all of your classes
// in this file.



// TODO: Define your Book class here
class Book 
{
   private:
   
   public:
      //Constructors
      Book()
      {

      }
      //~Book();
      
      std::string title;
      std::string author;
      int publicationYear;

      //Member methods
      void promptBookInfo();
      void displayBookInfo();
};


// TODO: Define your TextBook class here
class TextBook : public Book
{
   private:
      std::string subject;
      
   public:
      TextBook() : Book()
      {
      
      }
      //~TextBook();

      //void promptBookInfo();
      void promptSubject();
      void promptSubjectTitle();
      void displaySubject();


};

// TODO: Add your PictureBook class here
class PictureBook : public Book
{
   private:
      std::string illustrator;
   public:
      
      PictureBook() : Book(){}
      //~PictureBook();

      void promptIllustrator();
      void displayIllustrator();


};

/**********************************************************************
 * Function: PROMPTBOOKINFO
 * Purpose: To prompt user for the title, author and PublicationYear.
 ***********************************************************************/
void Book::promptBookInfo()
{
   
   std::cout << "Title: ";
   std::getline(std::cin, title);
   std::cout << "Author: ";
   std::getline(std::cin, author);
   std::cout << "Publication Year: ";
   std::cin >> publicationYear;
}


/**********************************************************************
 * Function: DISPLAY BOOK INFO
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
void Book::displayBookInfo()
{
   std::cout << title << " (" << publicationYear << ") " << "by " 
        << author << std::endl;
   //std::cout << std::endl;
}

/**********************************************************************
 * Function: PROMPT SUBJECT
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
void TextBook::promptSubject()
{  
   std::cout << "Title: ";
   std::cin.ignore();
   std::getline(std::cin, title);
   
   std::cout << "Author: ";
   std::getline(std::cin, author);
   
   std::cout << "Publication Year: ";
   std::cin >> publicationYear;

   std::cin.ignore();
   std::cout << "Subject: ";
   std::getline(std::cin, subject); 
   
}
/**********************************************************************
 * Function: DISPLAY SUBJECT
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
void TextBook::displaySubject()
{
   std::cout << "Subject: " << subject;
   std::cout << std::endl;
}

/**********************************************************************
 * Function: PROMPT ILLUSTRATOR
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
void PictureBook::promptIllustrator()
{
   /*std::cout << std::endl;
   std::cout << "Title: ";
   std::getline(std::cin, title);
   //std::cin.ignore();
   std::cout << "Author: ";
   std::getline(std::cin, author);
   //std::cin.ignore();
   std::cout << "Publication Year: ";
   std::cin >> publicationYear;
   //std::cin.ignore();*/
   std::cout << "Illustrator: ";
   std::cin.ignore();
   std::getline(std::cin, illustrator);
}

/**********************************************************************
 * Function: DISPLAY ILLUSTRATOR
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
void PictureBook::displayIllustrator()
{
   //std::cout << title << " (" << publicationYear << ") " << "by " 
   //     << author << std::endl;
   std::cout << "Illustrated by " << illustrator;
   std::cout << std::endl;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare a Book object here and call its methods
   Book b1;
   b1.promptBookInfo();
   std::cout << std::endl;
   b1.displayBookInfo();
   std::cout << std::endl;

   // Declare a TextBook object here and call its methods
   //Book b2 = TextBook();
   TextBook t1;
   //t1.Book::promptBookInfo();
   t1.promptSubject();
   std::cout << std::endl;
   t1.Book::displayBookInfo();
   t1.displaySubject();
   std::cout << std::endl;
   std::cout.fill();

   // Declare a PictureBook object here and call its methods
   PictureBook p1;
   p1.Book::promptBookInfo();
   p1.promptIllustrator();
   std::cout << std::endl;
   p1.Book::displayBookInfo();
   p1.displayIllustrator();


   return 0;
}


