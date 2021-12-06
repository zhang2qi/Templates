//
//  main.cpp
//  CIS-1202-Templates
//
//  Created by Qi Zhang on 12/5/21.
//
// Qi Zhang
// CIS 1202 101
// Dec 5, 2021
//
// Write templated functions to perform math on varying numeric data types.

#include <iostream>
#include <cmath>
#include <typeinfo>
#include <string>

using namespace std;

template <typename T>
void half(T &full, T &half)
{
    string type = typeid(full).name();
    if (type.compare("i") != 0)
        half = full / 2.0;
    else
        half = round(full / 2.0);
}

template <typename T>
T half(T &full)
{
    string type = typeid(full).name();
    if (type.compare("i") != 0)
        return full / 2.0;
    else
        return round(full / 2.0);
}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;
    
    double a_half;
    float b_half;
    int c_half;
    
    
    //void,  solution 1
    
    cout << "Solution A: " << endl << endl;
    
    half(a, a_half);
    half(b, b_half);
    half(c, c_half);
    
    cout << a_half << endl;
    cout << b_half << endl;
    cout << c_half << endl;
    
    //return T solution 2
    
    cout << endl << "Solution B: " << endl << endl;
    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
    
    return 0;
}
