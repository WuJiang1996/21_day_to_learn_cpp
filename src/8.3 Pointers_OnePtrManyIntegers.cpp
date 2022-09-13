#include <iostream>
using namespace std;

int main()
{
   int age = 30;
   //使用指针并初始化
   int* pointsToInt = &age;
   cout << "pointsToInt points to age now" << endl;

   // Displaying the value of pointer
   cout << "pointsToInt = 0x" << hex << pointsToInt << endl;

   int DogsAge = 9;
   //可将不同的内存地址赋给指针变量，让它指向不同的值
   pointsToInt = &DogsAge;
   cout << "pointsToInt points to DogsAge now" << endl;

   cout << "pointsToInt = 0x" << hex << pointsToInt << endl;

   return 0;
}