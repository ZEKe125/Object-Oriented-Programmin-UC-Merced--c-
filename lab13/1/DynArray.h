#ifndef DYN_ARRAY_H
#define DYN_ARRAY_H

#include <iostream>
// #include <requires>
using namespace std;

template <class T>
class DynArray
{

public:
    int arrSz;
    T *arr;

    T operator[](int);

    DynArray()
    {
        arrSz = 0;
        arr = new T[arrSz];
    }

    ~DynArray()
    {

        delete[] arr;
    }

    void add(T element)
    {

        T *newArr;
        newArr = new T[arrSz];
        for (int i = 0; i < arrSz; i++)
        {
            newArr[i] = arr[i];
        }

        newArr[arrSz] = element;
        delete[] arr; // Old storage
        arr = newArr;

        arrSz++;
    }
};

template <class T>
T DynArray<T>::operator[](int index)
{
    // requires(index >= 0 && index < arrSz, "Index out of range");

    if (!(index >= 0 && index < arrSz))
    {
        cout << "Index out of range" << endl;
        return index;
    }
    return arr[index];
}

#endif // DYN_ARRAY_H