#include <iostream>
using namespace std;

int main()
{
   enum DaysOfWeek
   {
      Sunday = 0,
      Monday,
      Tuesday,
      Wednesday,
      Thursday,
      Friday,
      Saturday
   };

   cout << "Find what days of the week are named after!" << endl;
   cout << "Enter a number for a day (Sunday = 0): ";

   int dayInput = Sunday;   // Initialize to Sunday
   cin >> dayInput;

   switch(dayInput)
   {
   case Sunday:
      cout << "Sunday was named after the Sun" << endl;
      //break让程序退出当前代码块
      break;

   case Monday:
      cout << "Monday was named after the Moon" << endl;
      break;

   case Tuesday:
      cout << "Tuesday was named after Mars" << endl;
      break;

   case Wednesday:
      cout << "Wednesday was named after Mercury" << endl;
      break;

   case Thursday:
      cout << "Thursday was named after Jupiter" << endl;
      break;

   case Friday:
      cout << "Friday was named after Venus" << endl;
      break;

   case Saturday:
      cout << "Saturday was named after Saturn" << endl;
      break;
   //用于执行 expression 不与 switch-case 中的任何标签匹配时应执行的操作
   default:
      cout << "Wrong input, execute again" << endl;
      break;
   }
   
   return 0;
}