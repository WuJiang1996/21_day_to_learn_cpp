#include <iostream>
#include <vector>

int main ()
{
   using namespace std;
   vector <int> integers{ 50, 1, 987, 1001 };

   vector <int>::const_iterator element = integers.cbegin ();
   // auto element = integers.cbegin (); // same as above, using auto

   while (element != integers.end ())
   {
      size_t index = distance (integers.cbegin (), element);

      cout << "Element at position ";
      cout << index << " is: " << *element << endl;

      // move to the next element
      ++ element;
   }

   return 0;
}

/*
Element at position 0 is: 50 
Element at position 1 is: 1 
Element at position 2 is: 987 
Element at position 3 is: 1001
*/