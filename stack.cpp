// #include<bits/stdc++.h>
// using namespace std;

// void displayrec(stack<int> &st){
//     if(st.size() == 0) return ;
//     int x = st.top();
//     cout<<x<<" ";
//     st.pop();
//     displayrec(st);
//     st.push(x);
// }
// void displayrecrev(stack<int> &st){
//     if(st.size() == 0) return ;
//     int x = st.top();
//     st.pop();
//     displayrecrev(st);
//     cout<<x<<" ";
//     st.push(x);
// }

// int main(){

// stack<int> st ;
// st.push(1);
// st.push(2);
// st.push(3);
// st.push(4);
// displayrec(st); cout<<endl;
// displayrecrev(st);



//     return 0;
// }


// balanced bracket question ;

// #include<bits/stdc++.h>
// using namespace std;

// bool valid(string s){
//     stack<char> st;
//     if(s.size()%2 != 0) return false;
//     for(int i=0; i<s.size(); i++){
//         if(s[i] == '(') st.push(s[i]);
//         else{
//             if(st.empty()) return false;
//             else st.pop();
//         }
//     }
//     if(st.empty()) return true;
//     else return false;
// }

// int main(){

// string s = "()()";
// string ss = "()())";
// cout<<valid(s); cout<<endl;
// cout<<valid(ss);

//     return 0;
// }


// remove consecutive char in string
// #include<bits/stdc++.h>
//  using namespace std;

// string func(string x){
//     string ans = "";
//     stack<char> st;
//     st.push(x[0]);
//     for(int i=1; i<x.size(); i++){
//         if(st.top() != x[i]) st.push(x[i]);
//         else continue;
//     }
//     while(! st.empty()){
//         ans += st.top();
//         st.pop();
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }

//  int main(){


// cout<<func("aaabbcddaabffg");

//     return 0;
//  }



// next greater element

// #include<bits/stdc++.h>
// using namespace std;


// int main(){

// int arr[] = {1,2,1};
// int n = sizeof(arr)/sizeof(arr[0]);
// int ans[n] ;
// ans[n-1] =-1;

// stack<int> st;
// st.push(arr[n-1]);
// for(int i=n-2; i>=0; i--){
//     while(st.size()>0 and st.top()<=arr[i]){
//         st.pop();
//     }
//     if(st.empty()) ans[i] = -1; 
//     else ans[i] = st.top();
//     st.push(arr[i]);
// }
// for(int i: ans) cout<<i<<' ';


//     return 0;
// }



//previous greater element

// #include<bits/stdc++.h>
// using namespace std;



// int main(){

// vector<int> v = {3,1,2,5,4,6,2,3};
// vector<int> ans(v.size());

// int n = v.size();
// ans[0] = -1;
// stack<int> st;
// st.push(v[0]);

// for(int i=1; i<n; i++){
//     while(!st.empty() and st.top()<=v[i]) st.pop();
//     if(st.size() > 0)    ans[i] = st.top();
//     else ans[i] = -1;
//     st.push(v[i]);
// }

// for(int i: ans) cout<<i<<' ';

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;


// int main(){

// vector<int> v = {100,80,60,81,70,60,75,85};
// int n = v.size();
// vector<int> ans(n);
// stack<int> st;
// st.push(0);
// for(int i=1; i<n; i++){
//     while(st.size()>0 and v[st.top()]<= v[i]) st.pop();
//     ans[i] = st.top();
//     st.push(i);
// }
// for(auto i: v) cout<<i<<" ";
// cout<<endl;
// for(int i=0; i<n; i++){
//     cout<<(i-ans[i])<<" ";
// }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// vector<int> nextGreaterElements(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> ans(n, -1);
//     stack<int> st;

//     for (int i = 2 * n - 1; i >= 0; i--) {
//         int num = nums[i % n];

//         while (!st.empty() && nums[st.top()] <= num) {
//             st.pop();
//         }

//         if (i < n) {
//             ans[i] = st.empty() ? -1 : nums[st.top()];
//             st.push(i % n);
//         }
//     }

//     return ans;
// }

// int main() {
//     vector<int> nums = {1, 2, 1};
//     vector<int> result = nextGreaterElements(nums);

//     for (int i : result) {
//         cout << i << ' ';
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> findLeftMax(const vector<int>& height) {
    int n = height.size();
    vector<int> leftMax(n, -1); // Initialize leftMax with -1
    
    stack<int> st;
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && height[st.top()] < height[i]) {
            st.pop();
        }
        if (!st.empty()) {
            leftMax[i] = st.top();
        }
        st.push(i);
    }
    
    return leftMax;
}

int main() {
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    vector<int> leftMax = findLeftMax(height);
    
    // Print the left max for each element
    for (int i = 0; i < height.size(); ++i) {
        cout << "Left max for index " << i << ": ";
        if (leftMax[i] != -1) {
            cout << height[leftMax[i]] << " at index " << leftMax[i];
        } else {
            cout << "N/A";
        }
        cout << endl;
    }
    
    return 0;
}
