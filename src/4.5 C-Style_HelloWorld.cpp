#include <iostream>
using namespace std;

int main()
{
   //C 风格字符串是特殊的字符数，注意：数组的最后一个字符为空字符‘\0’。这也被称为字符串结束字符，因为它告诉编译器字符串到此结束
   char sayHello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
   cout << sayHello << endl;
   cout << "Size of array: " << sizeof(sayHello) << endl;

   cout << "Replacing space with null" << endl;
   sayHello[5] = '\0'; //打印时候遇到换行符就会截止
   //因为 std::cout 只有遇到空字符后才会停止打印，即便这将跨越数组的边界
   cout << sayHello << endl;   //输出：Hello
   cout << "Size of array: " << sizeof(sayHello) << endl;   //12

   cout << sayHello + 6 << endl;	// "World"

   return 0;
}
// Hello World 
// Size of array: 12 
// Replacing space with null 
// Hello 
// Size of array: 12