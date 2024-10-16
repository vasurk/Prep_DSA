#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v = {1,2,4,5,6,7,10,11,14};

    int key = 11;

    if(binary_search(v.begin(),v.end(),key)){
        cout << key  << " found";
    }
    return 0;
}