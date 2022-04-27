
#ifndef MONITOR_h
#define MONITOR_h

#include <iostream>
using namespace std;

class Monitor
{

public:
    static int count;
    // static int secondLast;
    Monitor(){

    };
    ~Monitor(){

    };
    void incident()
    {
        count++;
    };
    void print()
    {
        cout << count << endl;
    }
};

#endif