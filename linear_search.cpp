#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    vector<int> v ={1,2,3,4,5,6,7,8,10};

    int key = 8;

    auto it = find(v.begin(), v.end() ,key);

    if(it != v.end()){
        cout << key << " Found at position  : " << it-v.begin() +1;
    }

    return 0;
}