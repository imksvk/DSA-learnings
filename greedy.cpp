#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pp;



double fractionalknapsack(vector<int> &profit, vector<int> &weights, int n , int w){
    vector<pp> v;
    for(int i=0; i<n; i++){
        v.push_back({profit[i], weights[i]});
    }

    auto comp = [&](pp a,  pp b){
    int r1 = a.first*1.0/ a.second * 1.0;
    int r2 = b.first*1.0/ b.second * 1.0;
    return r1>r2;
    };


    sort(v.begin(),v.end(),comp);
    double prof = 0;
    for(int i=0; i<n; i++){
        if(v[i].second <= w){
            prof += (v[i].first);
            w -= v[i].second;
        }else{
            prof += (v[i].first/v[i].second) * w;
            w = 0;
            break;
        }
    }
    return prof;
}


int minproductsubset(vector<int> arr){
   // man ni hai bannea ka  
}



int mincosttobreakgrid(int m, int n, vector<int> x, vector<int> y){

    auto comp = [](int a, int b){
        return a>b;
    };
    int ans = 0;
    sort(x.begin(), x.end(), comp);
    sort(y.begin(), y.end(), comp);
    int hz = 1, vr = 1;
    int i = 0, j = 0;
    while(i<x.size() and j<y.size()){
        if(x[i] >= y[j]){
            ans += x[i++]*vr;
            hz++;
        }else{
            ans += y[j++]*hz;
            vr++;
        }
    }

    while(i<x.size()){
         ans += x[i++]*vr;
            hz++;
    }
    while(j<y.size()){
       ans += y[j++]*hz;
            vr++; 
    }
    return ans;
}



int main(){

    // vector<int> prof = {60,100,120};
    // vector<int> weight = {10,20,30};
    // int w = 50, n = 3;
    // cout<<fractionalknapsack(prof, weight, n, w);



    int m = 6;
    int n = 4;
    vector<int> x = {2,1,3,1,4};
    vector<int> y = {4,1,2};

    cout<<mincosttobreakgrid(m,n, x,y);


    return 0;
}