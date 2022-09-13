#include <iostream>
using namespace std;

int main()
{
	cout << "Is it sunny (y/n)? ";
	char userInput = 'y';
	cin >> userInput;

	// declare pointer and initialize
	//在初始化指针或释放指针后将其设置为 NULL，并在使用运算符*对
	//指针解除引用前检查它是否有效（将其与 NULL 比较）。
	bool* const isSunny = new bool;
	*isSunny = true;

	if (userInput == 'n')
		*isSunny = false; 

   cout << "Boolean flag sunny says: " << *isSunny << endl;

   // release valid memory
   //使用 delete 释放后，任何有效指针都将无效。换言之，在程序清单 8.13 中，即便在第 22 行前指针
	//isSunny 是有效的，但第 22 行调用 delete 后，它也变成无效的了，不应再使用。
   delete isSunny;

	return 0;
}