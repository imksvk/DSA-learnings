#include<bits/stdc++.h>
using namespace std;


int main(){

string x = "123";
stack<int> st;
stack<string> st2;

st2.push(x[0]);

st.push(x[0]-'0');
cout<<st.top()+1;

    return 0;
}