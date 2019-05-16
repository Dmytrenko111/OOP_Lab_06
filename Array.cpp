#pragma once
#include "Array.hpp"
#include <iostream>

using namespace std;

template<typename T> class ArrayT
{
public:
    ArrayT();
    ~ArrayT();
    T Input(T *arr);
    T Search(T *arr,T a);
    T Output(T *arr);
};

template<typename T> ArrayT<T>::ArrayT()
{
}

template<typename T> ArrayT<T>::~ArrayT()
{
}

template<typename T> T ArrayT<T>::Input(T *arr)
{
    for (int i = 0; i < 8; i++)
    {
        arr[i] = arr[i];
    }
    return 0;
}

template<typename T> T ArrayT<T>::Search(T *arr,T a)
{
    int s = 0;
    for (int i = 0; i < 8; i++)
        if (a == arr[i])
        {
            s = i+1;
            break;
        }
    cout<<"Елемент "<< a <<" знаходиться під номером: "<< s <<endl<<endl;
    return 0;
}


template<typename T> T ArrayT<T>::Output(T *arr)
{
    for (int i = 0; i < 8; i++)
    {
        cout << i+1 << ") " << arr[i] << endl;
    }
    return 0;
}
