#include<iostream>

using namespace std;

int linearsearch(vector<int> v, int key)
{
    for(int i =0;i<v.size();i++){
        if(v[i] == key){
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {1,2,3,4,6,7,12,13,19};

    int key = 1;

    int i  = linearsearch(v, key);

    if(i != -1){
        cout << key << " is found at position : " << i+1;
    }
    return 0;
}