/*******************
 * NumberList class
 *******************/
#ifndef NUMBER_LIST_H
#define NUMBER_LIST_H

#include <iostream>

class NumberList
{
private:
   int size;
   int *array;

public:
   NumberList()
   {
      size = 0;
      array = NULL;
   }


   // TODO: Add your constructor and destructor
   NumberList(int size)
   {
      this->size = size;
      array = new int[size];
      for(int i = 0; i < size; i++)
      {
         this->array[i] = array[i];
      }
   }

   
   
   NumberList & operator =(const NumberList & other)
   {
        if (array != NULL)
        {
            delete[] array;
            array = NULL;
        }

        this->array = new int [size];
        
        for (int i = 0; i < size; i++)
        {
            this->array[i] = array[i];
        }
        
        

        return *this;
    }

   /*NumberList(int array, int size)
   {
      array = new int[size];    //operator not working.

      for(int i = 0; i < size; i++)    //loop through to copy array to array
      {
         this->array[i] = array[i];    //Using copy operator.
      }
   }*/
   

   ~NumberList()
   {
      delete [] array;
      array = NULL;
      std::cout << "Freeing memory" << std::endl;
   }

   int getNumber(int index) const;
   void setNumber(int index, int value);
   
   void displayList() const;

};

#endif
