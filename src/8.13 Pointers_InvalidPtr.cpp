#include <iostream>
using namespace std;

int main()
{
   // uninitialized pointer (bad)
   bool* isSunny; 

   cout << "Is it sunny (y/n)? ";
   char userInput = 'y';
   cin >> userInput;
   //用户提供其他输入时，该 if 块都不会执行,指针就无效
   if (userInput == 'y')
   {
      isSunny = new bool;
      *isSunny = true;
   }

   // isSunny contains invalid value if user entered 'n'
   cout << "Boolean flag sunny says: " << *isSunny << endl;

   // delete being invoked also when new wasn't 
   delete isSunny;

   return 0;
}