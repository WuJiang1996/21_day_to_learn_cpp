#include <iostream>
using namespace std;

// 函数声明
int DemoConsoleOutput();

int main()
{
   // 函数调用
	DemoConsoleOutput();

	return 0;
}

// 函数定义 声明为int需要返回值。无需返回成功/失败状态时，可将其返回类型声明为 void：void DemoConsoleOutput()
int DemoConsoleOutput()
{
	cout << "This is a simple string literal" << endl;
	cout << "Writing number five: " << 5 << endl;
	cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
	cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
	cout << "Pi actually is 22 / 7 = " << 22.0 / 7 << endl;

	return 0;
}