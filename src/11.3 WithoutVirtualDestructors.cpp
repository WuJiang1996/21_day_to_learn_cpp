#include <iostream>
using namespace std;

class Fish
{
public:
   Fish()
   {
      cout << "Constructed Fish" << endl;
   }
   ~Fish()
   {
      cout << "Destroyed Fish" << endl;
   }
};

class Tuna:public Fish
{
public:
   Tuna()
   {
      cout << "Constructed Tuna" << endl;
   }
   ~Tuna()
   {
      cout << "Destroyed Tuna" << endl;
   }
};

void DeleteFishMemory(Fish* pFish)
{
   delete pFish;
}

int main() 
{
   cout << "Allocating a Tuna on the free store:" << endl;
   Tuna* pTuna = new Tuna;
   cout << "Deleting the Tuna: " << endl;
   DeleteFishMemory(pTuna);   //delete 没有调用 Tuna 的析构函数，而只调用了 Fish 的析构函数
   //对于使用 new 在自由存储区中实例化的派生类对象，如果将其赋给基类指针，
   //并通过该指针调用 delete，将不会调用派生类的析构函数。这可能导致资源未释放、内存泄露等问题，必须引起重视。

   cout << "Instantiating a Tuna on the stack:" << endl;
   Tuna myDinner;
   cout << "Automatic destruction as it goes out of scope: " << endl;

   return 0;
}