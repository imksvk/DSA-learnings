// #include<bits/stdc++.h>
// using namespace std;

// void palindrome(string x){
//     int i = 0;
//     int j = x.size()-1;
//     while(i<j){
//         if(x[i] == x[j]) {
//             i++; j--;
//         }
//         else {
//             cout<<"not palindrome ";
//             return;
//         }
//     }
//     cout<<"palindrome";
// }

// int main(){

// palindrome("abax");


//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;



int main(){

string s = "abccba";
s.pop_back();
cout<<s; cout<<endl;
s.erase(s.begin());
cout<<s;

    return 0;
}