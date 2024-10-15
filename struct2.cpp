#include<iostream>

using namespace std;


typedef struct GeekforGeeks{
    int G1;
    char G2;
    float G3;
} GFG;

int main()
{
    GFG Geek;
    Geek.G1 = 123;
    Geek.G2 = 'a';
    Geek.G3 = 124.12;

    cout << " The vals are : " << Geek.G1 <<  " " << Geek.G2 << " " << Geek.G3 << endl;

    return 0;


}