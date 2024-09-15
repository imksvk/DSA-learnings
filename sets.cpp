#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;



int main(){

unordered_set<int> s;

s.insert(1);
s.insert(2);
s.insert(1);
s.insert(3);
s.insert(4);

cout<<s.size();
s.erase(1);

for(int i: s) cout<<i<<' ';
cout<<endl;
// #we have to check element exisit or not

if(s.find(2)!= s.end()) cout<<"found";
else cout<<"not found"; 

 
    return 0;
}