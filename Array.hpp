#pragma once
#include <iostream>

using namespace std;

template<typename T> class Array
{
private:
    int i;
    T mas[];
public:
    Array();
    ~Array();
    T GetArr(T mas);
    void SetArr(T mas);
};

template<typename T> Array<T>::Array()
{
}

template<typename T> Array<T>::~Array()
{
}

template<typename T> void Array<T>::SetArr(T mas)
{
    this->mas[i] = mas[i];
}

template<typename T> T Array<T>::GetArr(T mas)
{
    return this->mas[i];
}
