#include <iostream>
using namespace std;

class Fish
{
public:
   void Swim()
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

void MakeFishSwim(Fish& InputFish)
{
   // calling Fish::Swim
   InputFish.Swim();
}

int main() 
{
   Tuna myDinner;

   // calling Tuna::Swim
   myDinner.Swim();

   //虽然传入的是 Tuna 对象，MakeFishSwim(Fish&)也将其视为 Fish，进而调用 Fish::Swim
   //要实现这种多态行为—让 Fish 参数表现出其实际类型（派生类 Tuna）的行为，可将 Fish::Swim( )声明为虚函数。
   MakeFishSwim(myDinner);

   return 0;
}