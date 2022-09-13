#include<unordered_set>
#include <iostream>
using namespace std;
   
template <typename T>
void DisplayContents(const T& cont)
{
   cout << "Unordered set contains: ";
   for (auto element = cont.cbegin();
        element != cont.cend();
        ++ element )
      cout<< *element << ' ';

   cout << endl;

   cout << "Number of elements, size() = " << cont.size() << endl;
   cout << "Bucket count = " << cont.bucket_count() << endl;
   cout << "Max load factor = " << cont.max_load_factor() << endl;
   cout << "Load factor: " << cont.load_factor() << endl << endl;
}

int main()
{
   unordered_set<int> usetInt{ 1, -3, 2017, 300, -1, 989, -300, 9 };
   DisplayContents(usetInt);
   usetInt.insert(999);
   DisplayContents(usetInt);

   cout << "Enter int you want to check for existence in set: ";
   int input = 0;
   cin >> input;
   auto elementFound = usetInt.find(input);

   if (elementFound != usetInt.end())
      cout << *elementFound << " found in set" << endl;
   else
      cout << input << " not available in set" << endl;

   return 0;
}
/*
//最初的桶数为 8 个，而该容器包含 8 个元素，因此负载系数为 1，与最大负载系数相同。
Unordered set contains: 9 1 -3 989 -1 2017 300 -300 
Number of elements, size() = 8 
Bucket count = 8 
Max load factor = 1 
Load factor: 1 

//创建 64 个桶并重新创建散列表，而负载系数降低了。
Unordered set contains: 9 1 -3 989 -1 2017 300 -300 999 
Number of elements, size() = 9 
Bucket count = 64 
Max load factor = 1 
Load factor: 0.140625 

Enter int you want to check for existence in set: -300 
-300 found in set
*/