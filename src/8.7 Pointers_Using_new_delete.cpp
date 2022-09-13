#include <iostream>
using namespace std;

int main()
{
   // Request for memory space for an int
   int* pointsToAnAge = new int;

   // Use the allocated memory to store a number
   cout << "Enter your dog's age: ";
   cin >> *pointsToAnAge;

   // use indirection operator* to access value 
   cout << "Age " << *pointsToAnAge << " is stored at 0x" << hex << pointsToAnAge << endl;

   //不能将运算符 delete 用于任何包含地址的指针，而只能用于 new 返回的且未使用 delete释放的指针。
   delete pointsToAnAge; // release dynamically allocated memory

   return 0;
}