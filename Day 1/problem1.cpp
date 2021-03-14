// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int intnum;
    long longnum;
    char character;
    float flt;
    double doublenum;
    
    cin >> intnum >> longnum >> character >> flt >> doublenum;
    cout << intnum << "\n";
    cout << longnum << "\n";
    cout << character << "\n";
    cout.precision(3);
    cout << fixed << flt << "\n";
    cout.precision(9);
    cout << fixed << doublenum << "\n";
    return 0;
}

