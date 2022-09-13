#include <iostream>
using namespace std;

int main()
{
   int age = 30;
   int dogsAge = 9;

   cout << "Integer age = " << age << endl;
   cout << "Integer dogsAge = " << dogsAge << endl;
   //使用指针并初始化
   int* pointsToInt = &age;
   cout << "pointsToInt points to age" << endl;

   // Displaying the value of pointer
   cout << "pointsToInt = 0x" << hex << pointsToInt << endl;

   //使用解除引用运算符（*）访问指向的数据
   //解除引用运算符（*）也叫间接运算符。
   // Displaying the value at the pointed location
   cout << "*pointsToInt = " << dec << *pointsToInt << endl;

   //可将不同的内存地址赋给指针变量，让它指向不同的值
   pointsToInt = &dogsAge;
   cout << "pointsToInt points to dogsAge now" << endl;

   cout << "pointsToInt = 0x" << hex << pointsToInt << endl;
   cout << "*pointsToInt = " << dec << *pointsToInt << endl;

   return 0;
}