#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
   // A dynamic array of integers
   vector <int> intArray;

   // Insert sample integers into the array
   intArray.push_back (50);
   intArray.push_back (2991);
   intArray.push_back (23);
   intArray.push_back (9999);

   cout << "The contents of the vector are: " << endl;

   // Walk the vector and read values using an iterator
   //所有容器都提供了 begin()函数和 end()函数，其中前者指向第一个元素，后者指向容器中最后一个元素的后面
   vector <int>::iterator arrIterator = intArray.begin ();

   while (arrIterator != intArray.end ())
   {
       // Write the value to the screen
       cout << *arrIterator << endl;

       // Increment the iterator to access the next element
       ++ arrIterator;
   }

   // Find an element (say 2991) in the array using the 'find' algorithm...
   vector <int>::iterator elFound = find (intArray.begin ()
                         ,intArray.end (), 2991);

   // Check if value was found
   if (elFound != intArray.end ())
   {
       // Value was found... Determine position in the array:
       int elPos = distance (intArray.begin (), elFound);
       cout << "Value "<< *elFound;
       cout << " found in the vector at position: " << elPos << endl;
   }

   return 0;
}

/*
The contents of the vector are: 
50 
2991 
23 
9999 
Value 2991 found in the vector at position: 1
*/
