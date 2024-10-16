#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int linearsearch(vector<int> v, int key, int  i){
    if(i == v.size()){
        return -1;
    }
    if(v[i] == key)
    {
        return i;
    }
    return linearsearch(v , key, i+1);
}

int main()
{
    vector<int> v = {1,2,4,5,6,7,8,9,10};

    int key = 8;

    int i = linearsearch(v,key,0);

    if(i!= -1){
        cout << key << " is found at position : " << i+1 << endl;
    }

    return 0;
}