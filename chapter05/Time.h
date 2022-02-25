#pragma once

#include <iostream>
using namespace std;

class Time {
    protected:
        int hour;
        int minute;

    public:
        // Time() {
        //     hour = 0;
        //     minute = 0;
        // }

        Time(int hour = 0, int minute = 0) : hour(hour), minute(minute)
        {
            // 변수의 해석 순서 : 재역변수 -> 멤버변수 -> 전역변수
            // hour = hour;
            // minute = minute;
        }

        void print() {
            cout << hour << ":" << minute << endl;
        }
};