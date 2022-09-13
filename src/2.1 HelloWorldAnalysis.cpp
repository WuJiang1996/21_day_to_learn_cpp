//预处理器编译指令:#include <filename>让预处理器获取指定文件（这里
//是 iostream）的内容，并将它们放在在编译指令所处的位置

//#include "...relative path to FileB\FileB"   包含自己创建的头文件
//这里使用引号而不是尖括号来包含自己创建的头文件,尖括号（<>）通常用于包含标准头文件
#include <iostream>

// 执行 C++程序时总是从这里开始   带有参数的：int main (int argc, char* argv[])
int main()
{
   /* Write to the screen using std::cout */
   std::cout << "Hello World" << std::endl;

   // 名称空间是给代码指定的名称，作用是有助于降低命名冲突的风险
   using namespace std;

   /* Write to the screen using cout */
   cout << "Hello World" << endl;

   //注释：指出从这里开始到行尾都为注释
   ///*和*/表示它们之间的文本为注释，即便这些文本跨越多行

   // 在程序运行成功时返回 0，并在出现错误时返回−1
   return 0;
}