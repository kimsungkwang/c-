#include <iostream>
#include <string>
using namespace std;

class SuperClass {
    public:
        void print() {
            cout << "SuperClass :: print()" << endl;
        }
};

class ChildClass : public SuperClass {
    public:
        void print() {
            SuperClass::print();
            cout << "ChildClass :: print()" << endl;
        }
};

int main(int argc, char const *argv[])
{
   ChildClass c;
   c.print();

   return 0;
}