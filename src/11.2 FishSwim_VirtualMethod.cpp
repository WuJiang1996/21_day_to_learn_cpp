#include <iostream>
using namespace std;

class Fish
{
public:
   //如果 Swim( )被声明为虚函数，则将参数 myFish（其类型为 Fish&）设置为一个 Tuna 对象时，
   //myFish.Swim( )将执行 Tuna::Swim( )，
   virtual void Swim()   //通过使用关键字 virtual，可确保编译器调用覆盖版本
   {
      cout << "Fish swims!" << endl;
   }
};

class Tuna:public Fish
{
public:
   // override Fish::Swim
   void Swim()
   {
      cout << "Tuna swims!" << endl;
   }
};

class Carp:public Fish
{
public:
   // override Fish::Swim
   void Swim()
   {
      cout << "Carp swims!" << endl;
   }
};

void MakeFishSwim(Fish& InputFish)
{
   // calling Swim
   InputFish.Swim();
}

int main() 
{
   Tuna myDinner;
   Carp myLunch;

   // sending Tuna as Fish
   MakeFishSwim(myDinner);  //输出：Tuna swims!

   // sending Carp as Fish
   MakeFishSwim(myLunch);  //输出：Carp swims!

   return 0;
}