#include<bits/stdc++.h>
using namespace std;


vector<long long int> twoOddNum(long long int arr[], long long int n) {
        int xorvalue = 0;
        for(int i=0; i<n; i++){
            xorvalue ^= arr[i];
        }
        int k ;
        for(int i=0; i<32; i++){
            if(xorvalue & (1<<i)){
                k = i;
                break;
            }
        }
        int newxor = 0;
        for(int i=0; i<n; i++){
            if((arr[i]&(1<<k))) newxor ^= arr[i];
        }
        
    
        vector<long long int> ans;
        long long int a = xorvalue ^ newxor;
        long long int b = xorvalue ^ b;
        cout<<a<<" "<<b;
        return ans;
    }

int main(){





}