#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void displayList(string list[], int size)
{
   for (int i = 0; i < size; i++)
   {
      cout << list[i] << endl;
   }
}

void readList(string list[], int & size, string file)
{
   ifstream fin;
   fin.open(file.c_str());

   // same as the two lines above
   // ifstream fin(file.c_str());

   size = 0;

   while (fin >> list[size])
   {
      size++;
   }

   fin.close();
}

void writeList(string list[], int size, string file)
{
   ofstream fout(file.c_str());

   for (int i = 0; i < size; i++)
   {
      fout << list[i] << endl;
   }

   fout.close();
}

const int MAX_SIZE = 20;

int main()
{
   string list[MAX_SIZE];
   string file = "/home/cs165sb/examples/words.txt";
   string outFile = "out.txt";

   int size = 0;

   readList(list, size, file);
   displayList(list, size);
   writeList(list, size, outFile);

   return 0;
}
