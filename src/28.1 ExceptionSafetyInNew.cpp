#include <iostream>
using namespace std;

//演示了如何捕获使用 new 分配内存时可能引发的异常，并在计算机不能分配请求的内存时进行处理
int main()
{
   cout << "Enter number of integers you wish to reserve: ";
   try
   {
      int input = 0;
      cin >> input;

      // Request memory space and then return it
      int* numArray = new int [input];
      delete[] numArray;
   }
   catch (...)
   {
      cout << "Exception occurred. Got to end, sorry!" << endl;
   }
   return 0;
}

/*
Enter number of integers you wish to reserve: -1 
Exception occurred. Got to end, sorry!
*/