
#ifndef MAT_h
#define MAT_h

#include <iostream>
#include "Vec.h"
using namespace std;

class Mat
{

public:
    //|A, B|
    //|C, D|

    float A;
    float C;
    float B;
    float D;

    static Mat Identity;

    Mat(float A, float B, float C, float D)
    {
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    };

    Mat()
    {
        this->A = 0.0;
        this->B = 0.0;
        this->C = 0.0;
        this->D = 0.0;
    };

    Mat operator-(const Mat &m) const
    {
        return Mat(A - m.A, B - m.B, C - m.C, D - m.D);
    };

    Mat operator+(const Mat &m) const
    {
        return Mat(A + m.A, B + m.B, C + m.C, D + m.D);
    };

    // Mat operator*(const int &scalar)
    // {
    //     return Mat(A * scalar,
    //                B * scalar,
    //                C * scalar,
    //                D * scalar);
    // };

    ~Mat(){};
};

// hard coded 2x2 identity matrix
Mat Mat::Identity = Mat(1.0, 0.0, 0.0, 1.0);

// * overload for Mat and Vec
Vec operator*(const Vec &v, const Mat &m)
{
    // [2x1] * [2x2] multipilcation
    return Vec(v.x * m.A + v.y * m.C, v.x * m.B + v.y * m.D);
}

// * overload for Mat and int
Mat operator*(const int &scalar, const Mat &m)
{
    return Mat(m.A * scalar,
               m.B * scalar,
               m.C * scalar,
               m.D * scalar);
};

// * overload for Mat and Mat
Mat operator*(const Mat &f, const Mat &s)
{
    // 2x2 matrix multiplication
    return Mat(f.A * s.A + f.B * s.C,
               f.A * s.B + f.B * s.D,
               f.C * s.A + f.D * s.C,
               f.C * s.B + f.D * s.D);
};

#endif