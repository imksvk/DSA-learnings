// #include<bits/stdc++.h>
// using namespace std;

// void dtb(int n, string &s){
//     if(n==0){
//     // cout<<s;
//     return ;
//     }
//     s+= to_string(n%2);
//     dtb(n/2,s);

// }



// int no_of_setbit(int n){
//     int count = 0;
//     while(n>0){
//         count++;
//         n = (n&(n-1));
//     }
//     return count;
// }


// int max_pow_of_two(int n){
//     int ans ;
//     while(n>0){
//         ans = n;
//         n = n&(n-1);
//     }
//     return ans;
// }

// int main(){

// string x = "0010";
// int ans = 0;
// int poww = 1;
// for(int i=x.size()-1; i>=0; i--){
    
//     ans += (( (x[i]-'0'))*poww);
//     poww *= 2;
// }
// cout<<ans;

// string s = "";
// dtb(18,s);
// reverse(s.begin(), s.end());
// cout<<s;



// cout<<(4>>1);
// cout<<__builtin_popcount(13)<<endl;
// string x = "";
// dtb(13,x);
// cout<<x;
// cout<<endl<<no_of_setbit(13);
// cout<<max_pow_of_two(24);


// brayan kerlekina algo is used to find no of
// set bit
// n is done and with n-1 
// like this no get decreased every time reached to one
// in this the last set bit of n after this n in
// n-1 all the bits are different if and is done set 
// bit get decreased to zero 

// cout<<(2%5);



//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;


// int main(){

// int n =4;
// string x = "";

// while(n>0){
//     if(n%2 == 0) x="0"+x;
//     else x= "1"+x;
//     n/=2;
// }

// cout<<x;

// cout<<(6&7&8);

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;


// int main(){

// int x = 13;
// int set = 0;
// while(x){
//     if(x%2 != 0) set++;
//     x/=2; 
// }
// cout<<__builtin_popcount(13);
// cout<<endl<<set;

//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){


//         int x =  0 ;
//     for(int i=0; i<=3; i++){
//         x^= i;
//         cout<<x<<endl;
//     }


//     return 0;
// }


// class Solution {
// public:
//     int findComplement(int num) {
//          int no_of_bits = (int)log2(num)+1; // finds the no of bits in this
//          cout<<no_of_bits;
//          for(int i=0; i<no_of_bits; i++){
//             num ^= (1<<i);
//          }
//          return num;
//     }
// };


// and of two numbers is less than the maximum of two nums
// a and b b > a then a&b is < b
// so if max and is need in subarry maximum 
// number maximum length should be found
