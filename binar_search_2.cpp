#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool binarysearch(vector <int> v , int i){
    int low = 0,high =v.size()-1;
    while(low <= high){
        int mid = ((high-low)/2)+low;

        if(v[mid] == i)
        {
            return true;
        }
        if(v[mid] > i){
            high = mid-1;
        }
        else{
            low = mid+1;
        }

    }
    return false;
}

int main()
{
    vector <int>  n = {1,2,3,4,6,7,10};
    int key = 6;

    if(binarysearch(n,key)){
        cout << key << " found" ;
    }

    return 0;
}