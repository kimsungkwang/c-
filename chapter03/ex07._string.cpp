#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   string s1, addr;

   cout << "name : ";
   cin >> s1;
   cin.ignore();

   cout << "address : ";
   //    cin >> addr;
   getline(cin,addr);

   cout << addr << ":" << s1 << "." << endl;

   return 0;
}