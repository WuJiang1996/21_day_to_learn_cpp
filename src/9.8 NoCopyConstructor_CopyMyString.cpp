#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
private:
   char* buffer;

public:
   MyString(const char* initString) // Constructor
   {
      buffer = NULL;
	   if(initString != NULL)
      {
         buffer = new char [strlen(initString) + 1];
         strcpy(buffer, initString);
      }
   }

   ~MyString() // Destructor
   {
      cout << "Invoking destructor, clearing up" << endl;
      delete [] buffer;
   }

   int GetLength() 
   { return strlen(buffer); }

   const char* GetString()
   { return buffer; }
};

//编译器之所以进行复制，是因为函数 UseMyString( )的参数 str
//被声明为按值（而不是按引用）传递,这里是浅复制，在函数内部使用完之后就会被销毁、
//这里str和main函数中的sayHello指向的是同一块内存地址
void UseMyString(MyString str)
{
   cout << "String buffer in MyString is " << str.GetLength();
   cout << " characters long" << endl;

   cout << "buffer contains: " << str.GetString() << endl;
   return;
}

int main()
{
   MyString sayHello("Hello from String Class");
   UseMyString(sayHello); 

   return 0;
}