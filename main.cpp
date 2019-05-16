#include "Array.cpp"
#include <iostream>

using namespace std;

int main(){
    int IntArray[8] = {8,1,7,2,6,3,5,4};
    ArrayT<int> i;
    int k = 6;
    
    i.Input(IntArray);
    cout << "Даний масив :" << endl;
    i.Output(IntArray);
    i.Search(IntArray,k);
    
    double DoubleArray[8] = {34.89,12.55,22.22,13.83,11.141,2.5,9.99,77.11};
    ArrayT<double> d;
    double s = 77.11;
    
    d.Input(DoubleArray);
    cout << "Даний масив :" << endl;
    d.Output(DoubleArray);
    d.Search(DoubleArray,s);
    
    char CharArray[9] = "zxcvbnmo";
    ArrayT<char> c;
    char q = 'z';
    
    c.Input(CharArray);
    cout << "Даний масив :" << endl;
    c.Output(CharArray);
    c.Search(CharArray,q);
}
