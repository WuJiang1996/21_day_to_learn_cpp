#include <string>
#include <iostream>
#include <algorithm>

int main ()
{
   using namespace std;

   cout << "Please enter a string for case-convertion:" << endl;
   cout << "> ";

   string inStr;
   getline (cin, inStr);
   cout << endl;

   transform (inStr.begin (), inStr.end (), inStr.begin (), ::toupper);
   cout << "The string converted to upper case is: " << endl;
   cout << inStr << endl << endl;

   transform (inStr.begin (), inStr.end (), inStr.begin (), ::tolower);
   cout << "The string converted to lower case is: " << endl;
   cout << inStr << endl << endl;

   return 0;
}

/*
Please enter a string for case-convertion: 
> ConverT thIS StrINg! 
The string converted to upper case is: 
CONVERT THIS STRING! 
The string converted to lower case is: 
convert this string!
*/