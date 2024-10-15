#include<iostream>

using namespace std;


void dev()
{
    int var = 10;

    int * ptr;

    ptr = &var;

    cout << "Val at ptr = " << ptr << endl;
    cout << "Val at var = " << var << endl;
    cout << "Val at *ptr=" << *ptr << endl ;
}

int main()
{
    dev();
    return 0;
}