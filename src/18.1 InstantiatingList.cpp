#include <list>
#include <vector>

int main ()
{
   using namespace std;

   // instantiate an empty list
   list <int> listIntegers;

   // instantiate a list with 10 integers 
   list<int> listWith10Integers(10);

   // instantiate a list with 10 integers, each initialized to 99
   list<int> listWith4IntegerEach99 (10, 99);

   // create an exact copy of an existing list
   list<int> listCopyAnother(listWith4IntegerEach99);

   // a vector with 10 integers, each 2017
   vector<int> vecIntegers(10, 2017);

   // instantiate a list using values from another container 
   //迭代器让容器的实现彼此独立，其通用功能让您能够使用 vector 中的值实例化 list
   list<int> listContainsCopyOfAnother(vecIntegers.cbegin(), 
                                       vecIntegers.cend());

   return 0;
}