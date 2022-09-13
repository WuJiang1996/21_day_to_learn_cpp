#include <iostream>
using namespace std;

void MultiplyNumbers ()
{
   cout << "Enter the first number: ";
   int firstNumber = 0;
   cin >> firstNumber;

   cout << "Enter the second number: ";
   int secondNumber = 0;
   cin >> secondNumber;

   // Multiply two numbers, store mulitplicationResult in a variable
   int mulitplicationResult = firstNumber * secondNumber;

   // Display mulitplicationResult
   cout << firstNumber << " x " << secondNumber << " = " << mulitplicationResult << endl;
}

int main ()
{
   cout << "This program will help you multiply two numbers" << endl;

   // Call the function that does all the work
   MultiplyNumbers();

   //变量 firstNumber 和 secondNumber 的作用域为局部，被限定在声明它的函数内，这里为MultiplyNumbers( )
   //在 MultiplyNumbers( )内部声明的变量在该函数结束时不再存在，如果在 main( )中使用它
   //们，程序将无法通过编译，因为在 main( )中这些变量未声明
   // cout << firstNumber << " x " << secondNumber << " = " << mulitplicationResult << endl;

   return 0;
}