#ifndef OBJ_h
#define OBJ_h

#include "Shared.h"
#include <iostream>
#include <string>

using namespace std;

class Obj : public Shared
{

public:
    string n;

    Obj(string n)
    {
        this->n = n;
        cout << "New " << this->n << endl;
    }

    ~Obj()
    {
        cout << "Delete " << this->n << endl;
    }
};

#endif