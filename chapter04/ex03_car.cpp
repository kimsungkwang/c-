#include <iostream>
#include <string>
using namespace std;

#include "Car.h"

int main(int argc, char const *argv[])
{
   Car myCar;

   myCar.speed = 100;
   myCar.gear = 3;
   myCar.color = "red";

   myCar.speedUp();
   myCar.speedDown();

   return 0;
}