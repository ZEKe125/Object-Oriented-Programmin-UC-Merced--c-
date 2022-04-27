
#ifndef FIB_h
#define FIB_h

#include <iostream>
using namespace std;

class Fib
{

public:
    static int last;
    static int secondLast;
    Fib(){

    };
    ~Fib(){

    };
    int next(bool b = false)
    {
        int next;

        if (b)
        {
            last = 1;
            secondLast = 0;
        }
        else
        {
            next = last + secondLast;
            secondLast = last;
            last = next;
        }

        return last;
    }
};

#endif