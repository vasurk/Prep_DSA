#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionsort(vector<int> arr, int n){
    int i ,j,min_idx;

    for (i = 0;i<n-1;i++){
        min_idx = i;
        for(j= i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx = j;
            }
            swap(&arr[min_idx], &arr[i]);
        }
        
    }
        for (int k =0 ;k< n; k++){
        cout << arr[k] << " " << endl;

    }
}



int main()
{
    vector<int> arr = {64,25,12,22,11};

    int n = sizeof(arr)/sizeof(arr[0]);
 cout << "sorted array " << endl; 
    selectionsort(arr,n);

   
   
    return 0;
}