// #include<bits/stdc++.h>
// using namespace std;


// int prio(char ch){
//     if(ch == '+' or ch == '-') return 1;
//     else return 2;
// }

// int solve(int val1, int val2, char ch){
//     if(ch == '+') return val1+val2;
//     else if(ch == '-') return val1 - val2;
//     else if(ch == '*')  return val1*val2;
//     else return val1/val2;
// }

// int main(){

// string s = "5+5+1-2";
// stack<int> val;
// stack<char> op;

// for(int i =0; i<s.size(); i++){
//     if(isdigit(s[i])){
//         val.push(s[i]-'0');
//     }
//     else{ // not digit
//         if(op.size() == 0) op.push(s[i]);
//         else if(prio(op.top()) < prio(s[i])) op.push(s[i]);
//         else{
//             while(!op.empty() and prio(s[i])<= prio(op.top())){
                
//             }
//             op.push(s[i]);
//         }
//     }
// }

//     // stack canhave values
//     // so make it empty
//     while(op.size()>0){
//         char ch = op.top();
//                 int val2 = val.top();
//                 val.pop();
//                 int val1 =  val.top();
//                 val.pop();
//                 int ans = solve(val1,val2,ch);
//                 val.push(ans);
//     }

//     cout<<val.top();

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int prio(char ch) {
    if (ch == '+' or ch == '-') return 1;
    else return 2;
}

int solve(int val1, int val2, char ch) {
    if (ch == '+') return val1 + val2;
    else if (ch == '-') return val1 - val2;
    else if (ch == '*') return val1 * val2; // Corrected here
    else return val1 / val2; // Assuming operator is '/' Corrected here
}

int main() {

    string s = "5+5+1";
    stack<int> val;
    stack<char> op;

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            val.push(s[i] - '0');
        }
        else { // not digit
            if (op.empty() || prio(op.top()) < prio(s[i])) {
                op.push(s[i]);
            }
            else {
                while (!op.empty() && prio(s[i]) <= prio(op.top())) {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    // stack can have values
    // so make it empty
    while (!op.empty()) {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }

    cout << val.top();

    return 0;
}
