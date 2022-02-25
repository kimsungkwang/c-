#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
   const char *pstr = "Hello World";        // c언어의 문자열 처리 기법

    //    pstr++;      // 산술 연산 기능
    //    cout << pstr << endl;
   cout << "argc:" << argc << endl;

   for (int i = 0; i < argc; i++)
   {
       cout << " arg : " << argv[i] << endl;
   }
   



   return 0;
} 