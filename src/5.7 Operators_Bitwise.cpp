#include <iostream>
#include <bitset>
using namespace std;

int main()
{
   cout << "Enter a number (0 - 255): ";
   unsigned short inputNum = 0;
   cin >> inputNum;

   bitset<8> inputBits (inputNum);  //bitset<8>能把输入的数转成二进制数据
   cout << inputNum << " in binary is " << inputBits << endl;

   bitset<8> bitwiseNOT = (~inputNum);
   cout << "Logical NOT ~" << endl;
   cout << "~" << inputBits  << " = " << bitwiseNOT << endl;

   cout << "Logical AND, & with 00001111" << endl;
   bitset<8> bitwiseAND = (0x0F & inputNum);// 0x0F is hex for 0001111
   cout << "0001111 & " << inputBits  << " = " << bitwiseAND << endl;

   cout << "Logical OR, | with 00001111" << endl;
   bitset<8> bitwiseOR = (0x0F | inputNum);
   cout << "00001111 | " << inputBits  << " = " << bitwiseOR << endl;

   cout << "Logical XOR, ^ with 00001111" << endl;
   bitset<8> bitwiseXOR = (0x0F ^ inputNum);
   cout << "00001111 ^ " << inputBits  << " = " << bitwiseXOR << endl;

   return 0;
}

"""
Enter a number (0 - 255): 181 
181 in binary is 10110101 
Logical NOT ~ 
~10110101 = 01001010 
Logical AND, & with 00001111 
0001111 & 10110101 = 00000101
Logical OR, | with 00001111 
00001111 | 10110101 = 10111111 
Logical XOR, ^ with 00001111 
00001111 ^ 10110101 = 10111010
"""