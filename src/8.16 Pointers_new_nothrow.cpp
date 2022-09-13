#include <iostream>
using namespace std;

int main()
{
   // Request LOTS of memory space, use nothrow 
   int* pointsToManyNums = new(nothrow) int [0x1fffffff];

   //不想依赖于异常的程序员可使用 new 变种 new(nothrow)，这个变种在内存分配失败时不引发异常，
   //而返回 NULL，让您能够在使用指针前检查其有效性
   if (pointsToManyNums) // check pointsToManyNums != NULL
   {
      // Use the allocated memory 
      delete[] pointsToManyNums;
   }
   else 
      cout << "Memory allocation failed. Ending program" << endl;

   return 0;
}