#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
   int numbers[] = {1,2,3,4,5};
   int *p = numbers;                    // 배열명 : 배열의 시작 주소 

   cout << *p << endl;
   cout << *(p+1) << endl;

   return 0;
}