#include <iostream>
using namespace std;

const double Pi = 3.1416;

// output parameter result by reference 
//第二个形参 result 旁边的&，它告诉编译器，不要将
//第二个实参复制给函数，而将指向该实参的引用传递给函数。返回类型变成了 void，因为该函数不再
//通过返回值提供计算得到的面积，而按引用以输出参数的方式提供它。
void Area(double radius, double& result)
{
   result = Pi * radius * radius;
}

int main() 
{
   cout << "Enter radius: ";
   double radius = 0;
   cin >> radius;

   double areaFetched = 0;
   Area(radius, areaFetched);

   cout << "The area is: " << areaFetched << endl;
   //使用 return 语句时，函数只能返回一个值。因此，如果函数需要执行影响众多值的操作，
   //且需要在调用者中使用这些值，则按引用传递参数是让函数将修改结果提供给调用模块的方式之一
   return 0;
}