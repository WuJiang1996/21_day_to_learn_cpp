#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   //strcpy()等字符串复制函数、strcat()等拼接函数，还经常使用 strlen()来确定字符串的长度
   //这些 C 风格字符串作为输入的函数非常危险，因为它们寻找终止空字符，如果程序员没
   //有在字符数组末尾添加空字符，这些函数将跨越字符数组的边界。
   //尽量不要使用c风格的字符串
   cout << "Enter a word NOT longer than 20 characters:" << endl;

   char userInput [21] = {'\0'};
   cin >> userInput;

   cout << "Length of your input was: " << strlen (userInput) << endl;

   return 0;
}