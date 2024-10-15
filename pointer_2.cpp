#include<iostream>

using namespace std;

//Pass by value

int square(int n)
{
    cout << "address of n1 in square1(): "  << &n << endl;

    n *= n;
    return n;
}

//pass by reference

void square2(int *n)
{
    cout << " address of n2 in square2() : " << n << endl;

    *n *= *n;
}