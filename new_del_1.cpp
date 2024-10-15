#include<iostream>

using namespace std;

int main()
{
    int * ptr;

    ptr = new int;

    *ptr = 10;

    cout << "address : " << ptr << endl;

    cout << "Val : " << *ptr << endl;

    return 0;
}