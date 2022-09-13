#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
   vector<int> numsInVec{ 25, 101, 2017, -50 };

   auto evenNum = find_if(numsInVec.cbegin(),
                         numsInVec.cend(),  // range to find in
                  //务必使用 const 来限定输入参数，在输入参数为引用时尤其如此。这样可避免无意间修改容器中元素的值。
                  [](const int& num){return ((num % 2) == 0); } );

   if (evenNum != numsInVec.cend())
      cout << "Even number in collection is: " << *evenNum << endl;

   return 0;
}
//Even number in collection is: -50