
#ifndef MAT_h
#define MAT_h

#include <iostream>
#include "Vec.h"
using namespace std;

class Mat
{

public:
    float topLeft;
    float bottomLeft;
    float topRight;
    float bottomRight;

    static Mat Identity;

    Mat(float tl, float bl, float tr, float br)
    {
        this->topLeft = tl;
        this->bottomLeft = bl;
        this->topRight = tr;
        this->bottomRight = br;
    };

    Mat()
    {
        this->topLeft = 0.0;
        this->bottomLeft = 0.0;
        this->topRight = 0.0;
        this->bottomRight = 0.0;
    };

    Mat operator+(const Mat &m) const
    {
        return Mat(topLeft + m.topLeft, bottomLeft + m.bottomLeft, topRight + m.topRight, bottomRight + m.bottomRight);
    };
    // Mat operator*(const int &scalar) const
    // {
    //     return Mat(topLeft * scalar, bottomLeft * scalar, topRight * scalar, bottomRight * scalar);
    // };

    Mat operator*(const Mat &m) const {

    };

    ~Mat(){};
};

Mat Mat::Identity = Mat(1.0, 0.0, 0.0, 1.0);

#endif