// #include<bits/stdc++.h>
// using namespace std;



// int main(){

//     vector<int> arr = { 2,3,4,4,-7,-1,4,-2,6};
//     int n = arr.size();
//     int k = 2;
//     vector<int> ans(n-k+1);

//     for(int i: arr) cout<<i<<" ";
//     cout<<endl;
//     int idx = -1;
//     for(int i=0 ; i<k; i++){
//         if(arr[i]<0){
//             idx = i;
//             ans[0]= arr[i];
//             break;
//         }
//     }

//     int i = 1, j = k; int l = 1;
//     while(j<n){
         
//         if( idx>=i){
//             ans[l++] = arr[ idx];
//         }else{
//             bool found = false;
//             for(int m = i; m<=j; m++){
//                 if(arr[m]<0){
//                     found = true;
//                     idx = m;
//                     break;
//                 }
//             }
//             if(found ){
//                 ans[l++] = arr[idx];
//             }else{
//                 ans[l++] = 0;
//             }
//         }
//         i++; j++;
//     }

//     for(int i: ans) cout<<i<<" ";

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;


// int main(){

// vector<int> v = {7,1,2,5,8,4,9,3,6};
// int k = 3;

// int sum = 0;
// for(int i=0; i<k; i++){
//     sum += v[i];
// }

// int ans = sum;
// int i = 1, j = k;
// int n = v.size();
// while(j<n){
//     sum  = sum - v[i-1]+v[j];
//     ans = max(sum, ans);
//     j++; i++;

// }
//  cout<<ans;



//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;


// int main(){

// vector<int> v = {1,1,1,0,0,0,2,2,3,1,1};
// int k = 3;
// int n = v.size();
// int max_sum = INT_MIN;

// int sum = 0;
// for(int i=0; i<k; i++){
//     sum += v[i];
// }
// max_sum = max(sum, max_sum);
// int i = 1, j = k;
// int idx = 0;
// while(j<n){
//     sum += v[j];
//     sum -= v[i-1];
//    if(max_sum<sum){
//     max_sum = sum;
//     idx = i;
//    }
//    i++; j++;
// }

// cout<<"max sum is "<<max_sum;
// cout<<endl<<"starts at "<<idx;

//     return 0;
// }



// first negative using queue

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

vector<int> v = {3,-4,-7,30,7,-9,2,1,6,-1};
int n = v.size();
vector<int> ans;
int k = 3;

queue<int> q;
for(int i=0; i<n; i++){
    if(v[i]<0) q.push(i);
}

int i = 0;
while(i+k-1<n){
    while(q.size()>0 and q.front()<i) q.pop();
    if(q.size()>0 and q.front()>=i+k) ans.push_back(0);
    else ans.push_back(v[q.front()]);
    i++;
}

for(int i: ans) cout<<i<<" ";

    return 0;
}