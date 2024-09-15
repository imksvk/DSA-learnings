//frog 1 question
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5+10;

// vector<int> h(N,-1);
// vector<int> dp(N,-1);

// int fun(int i){
//     if( i == 0) return 0;
//     if(dp[i] != -1) return dp[i];
//     int cost = INT_MAX;

//     cost = min(cost, fun(i-1)+abs(h[i]-h[i-1]));

//     // if(i>1)
//     // cost = min(cost, fun(i-2)+abs(h[i]-h[i-2]));

//     return dp[i] = cost;
// }




// int main(){

//     int n ;
//     cin>>n;
//     // dp.resize(N,-1);
//     for(int i=0; i<n; i++){
//         cin>>h[i];
//     }
//     cout<<fun(n-1);

//     return 0;
// }


// frog 2 question 
//frog 1 question
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int k;
vector<int> h(N,-1);
vector<int> dp(N,-1);

int fun(int i){
    if( i == 0) return 0;
    if(dp[i] != -1) return dp[i];
    int cost = INT_MAX;
    
    for(int j=1; j<=k; j++){  // for loop till k ki kitta tarika se aaa sakta hai
    if(i-j >=0) cost = min(cost, fun(i-j)+abs(h[i]-h[i-j]));
      
    }

    

    return dp[i] = cost;
}




int main(){

    int n ;
    cin>>n>>k;
    // dp.resize(N,-1);
    for(int i=0; i<n; i++){
        cin>>h[i];
    }
    cout<<fun(n-1);

    return 0;
}