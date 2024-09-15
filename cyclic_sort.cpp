#include<bits/stdc++.h>
using namespace std;

// void cycle_sort(int arr[], int size){
//     int i = 0;
//     while(i<size){
//         int correct_idx = arr[i]-1;
//         if(i == correct_idx) i++;
//         else swap(arr[i], arr[correct_idx]);
//     }

// }


void cyclesort(vector<int> &v){
    int n = v.size();
    int i = 0;
    while(i<n){
        int c_idx = v[i]-1;
        if(i == c_idx) i++;
        else swap(v[i], v[c_idx]);
    }
}

int main(){

    // int arr[] = {5,4,3,2,1};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i: arr) cout<<i<<" ";
    // cout<<endl<<"After sorting"<<endl;
    // cycle_sort(arr, n);
    // for(int i: arr) cout<<i<<" ";

    vector<int> v = {5,4,3,2,1};
    cyclesort(v);
    for(int i: v) cout<<i<<" ";


    return 0;
}