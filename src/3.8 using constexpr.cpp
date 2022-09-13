// 3.8 using constexpr.cpp : Defines the entry point for the console application.

//通过关键字 constexpr，可让常量声明像函数：
#include <iostream>
constexpr double GetPi() { return 22.0 / 7; }
constexpr double TwicePi() { return 2 * GetPi(); }

int main()
{
   using namespace std;
   const double pi = 22.0 / 7;

   cout << "constant pi contains value " << pi << endl;
   cout << "constexpr GetPi() returns value " << GetPi() << endl;   //程序的执行速度比将这些计算放在函数中时更快
   cout << "constexpr TwicePi() returns value " << TwicePi() << endl;

   return 0;
}