#include <iostream>
using namespace std;

int main()
{
   // Static array of 5 integers
   int myNumbers[5];

   // Pointer initialized to array
   //myNumbers 是一个指针，指向第一个元素（myNumber[0])
   int* pointToNums = myNumbers;

   //访问第二个元素
   //*(pointToNums + 1)

   // Display address contained in pointer
   cout << "pointToNums = 0x" << hex << pointToNums << endl;

   // Address of first element of array
   cout << "&myNumbers[0] = 0x" << hex << &myNumbers[0] << endl;

   return 0;
}