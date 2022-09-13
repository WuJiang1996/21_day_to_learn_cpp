#include <iostream>
using namespace std;

//使用引用使得程序更加高效
void GetSquare(int& number)
{
   number *= number;
}

int main()
{
   cout << "Enter a number you wish to square: ";
   int number = 0;
   cin >> number;

   GetSquare(number);
   cout << "Square is: " << number << endl;

   return 0;
}