#include<bits/stdc++.h>
using namespace std;

int first_occurence(int arr[], int target,int n){
    int lo = 0, hi = n-1;
    int mid ;
    int ans = -1;
    while(lo<=hi){
        mid = lo + (hi-lo)/2;
        if(arr[mid] == target){
            if(arr[mid-1] == target){
                hi = mid-1;
            }else return mid;
        }
        else if(arr[mid]< target) lo = mid+1;
        else hi = mid-1;
    }
     return -1;
}


int main(){

// int arr[] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
// int n = sizeof(arr)/sizeof(arr[0]);
// cout<<first_occurence(arr,3,n);


vector<vector<int>> v = {{1,2},{3,4}};
// for(auto i: v){
//     cout<<i[0]<<endl;
// }

cout<<v[0][0];
    return 0;
}