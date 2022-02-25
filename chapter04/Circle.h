#pragma once

// #include<iostream>
#include<string>
using namespace std;

// Circle 클래스의 원형(prototype, signature)
class Circle 
{
public:
    int radius;
    string color;

    double calcArea() 
    {
        return 3.14 * radius * radius;
    }
};