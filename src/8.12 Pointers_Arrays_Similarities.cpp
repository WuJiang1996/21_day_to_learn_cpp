#include <iostream>
using namespace std;

int main()
{
   const int ARRAY_LEN = 5;

   // Static array of 5 integers, initialized
   int myNumbers[ARRAY_LEN] = {24, -1, 365, -999, 2011};

   // Pointer initialized to first element in array
   int* pointToNums = myNumbers;

   cout << "Display array using pointer syntax, operator*" << endl;
   for (int index = 0; index < ARRAY_LEN; ++index)
      cout << "Element " << index << " = " << *(myNumbers + index) << endl;

   cout << "Display array using ptr with array syntax, operator[]" << endl;
   for (int index = 0; index < ARRAY_LEN; ++index)
      cout << "Element " << index << " = " << pointToNums[index] << endl;

   return 0;
   //该程序表明，数组 myNumbers 和指针 pointToNums 都具有指针的特点。换句话说，数组类似于在
   //固定内存范围内发挥作用的指针。可将数组赋给指针，如第 11 行所示，但不能将指针赋给数组，因为
   //数组是静态的，不能用作左值。myNumbers 是不能修改的.
}