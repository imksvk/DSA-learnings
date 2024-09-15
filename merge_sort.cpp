#include<bits/stdc++.h>
using namespace std;

 void merge(vector<int> arr, vector<int> brr, vector<int> &ans){
    // int n = arr.size()+brr.size();
    
    int i = 0 , j = 0, k = 0;
    while(i<arr.size() and j<brr.size()){
        if(arr[i]<brr[j]){
            ans[k++] = arr[i++];
        }
        else{
            ans[k++] = brr[j++];
        }
    }
    if(i == arr.size()){
        while(j<brr.size()){
            ans[k++] = brr[j++];
        }
    }
    if(j == brr.size()){
        while(i<arr.size()){
            ans[k++] = arr[i++];
        }
    }
    
}


void mergesort(vector<int> &arr){
    int n = arr.size();
    if(n == 1) return;
    int n1 = n/2;
    int n2 = n-n1;

    vector<int> a(n1);
    vector<int> b(n2);

    for(int i=0; i<n1; i++){
            a[i] = arr[i];
    }
    for(int i =0; i<n2; i++){
        b[i] = arr[i+n1];
    }
        

    mergesort(a);
    mergesort(b);

    merge(a,b,arr);

}



int main(){


// vector<int> a = {1,3,5};
// vector<int> b = {2,3,6};
// vector<int> c = merge(a,b);

// for(int i: c) cout<<i<<" ";



vector<int> a = {5,4,3,2,1};
mergesort(a);
for(int i: a) cout<<i<<" ";

    return 0;
}