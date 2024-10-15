#include<iostream>

using namespace std;


struct GFG{
    int G1;
    char G2;
    float G3;
};

int main()
{
    struct GFG Geek;
    Geek.G1 = 8;
    Geek.G2 = 'a';
    Geek.G3 = 298.12;
    cout << "Vals are : " << Geek.G1 << " " << Geek.G2 << " " << Geek.G3 << endl;
    return 0;
    
}