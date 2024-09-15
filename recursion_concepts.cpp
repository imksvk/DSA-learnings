#include<bits/stdc++.h>
using namespace std;

void rev(string s,int idx){
    if( idx >= s.size()) return;
    cout<<s[idx];
    rev(s, idx+1);
}


int main(){

string x = "keshav"; int y = 0;
rev(x,y);
// cout<<x;

    return 0;
}