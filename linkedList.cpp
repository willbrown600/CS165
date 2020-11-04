#include <iostream>
#include <string>
using namespace std;

struct Node
{
public:
   int data;
   Node * pNext;
};

int main()
{
   Node * n1 = new Node;
   n1->data = 5;

   Node * n2 = new Node;
   n2->data = 7;

   n1->pNext = n2;
   n2->pNext = NULL;

   
   Node * pIt = n1;
   while (pIt != NULL)
   {
      cout << pIt->data << endl;
      pIt = pIt->pNext;
   }


   return 0;
}
