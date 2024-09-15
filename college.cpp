#include<bits/stdc++.h>
using namespace std;



void insert(int arr[],int size, int idx, int ele){

    for(int i=size-1; i>=idx; i--){
        arr[i+1] = arr[i];
    }
    arr[idx] = ele;

}

bool isprime_inefficient(int n){
    if(n<=1) return false;
    for(int i=2; i<n; i++){
        if(n%i == 0) return false;
    }
    return true;
}


bool isprime_efficient(int &n){
    n = sqrt(n);
    cout<<n<<endl;
    if(n <= 1) return false;
    for(int i=2; i<=sqrt(n); i++) if(n%i == 0) return false;
    return true;
}


bool isPrime(int n) {
    
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;

    
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Check divisibility for numbers greater than 3
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}


int GCD(int a, int b){
    if(max(a,b)%min(a,b) == 0) return min(a,b);
    return GCD(min(a,b), (max(a,b)%min(a,b)));
    return 1;
}



void sieve_of_eratosthenes( int n){  //  n log (log n) ----> time complexicity

    vector<int> v(n+1,1);
    for(int i=2; i*i<=n; i++){
        if(v[i] == 1){
            for(int j=i*i; j<=n; j+=i) v[j] = 0;
        }
    }

    for(int i=0; i<=n; i++){
        if(v[i] == 1 and i!= 0 and i!=1) cout<<i<<" ";
    }

}

void segemented_seive(int l , int r){
    
}



bool prime(int n ){
    if(n ==  0 or n == 1) return false;
    for(int i=2; i*i<n; i++) if(n%i == 0 ) return false;
    return true;
}

bool palindrome(int n){
    string x = to_string(n);
    string y = x;
    reverse(y.begin(), y.end());
    return x == y;
}


int next_prime_palindrome(int n){
    if(n>=8 and n<=11) return 11;
    for(int i =1; i<=100000;i ++){
        string a = to_string(i);
        string b = a;
        reverse(b.begin(), b.end());
        string x = a+b.substr(1);
        if(stoi(x)>=n and prime(stoi(x))) return stoi(x);
    }
    return -1;
    
}

int x = 1;
void func(int n){
    if(n>0) cout<<n;
    if(n<0) return;
    // x++;
    func(n--);
}


int partioning(vector<int> v){

    int n = v.size();
    vector<int> prefix (n);
    prefix[0] = v[0];

    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1]+v[i];
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        int ts = prefix[n-1];
        int cs = prefix[i];
        if(cs > (ts-cs)) return i;
    }
    return -1;

}




int main(){

// vector<string> v = {"ad","ab","abc","aa"};
// for(int i=0; i<v.size(); i++){
//     for(int j=0; j<v.size()-1; j++){
//         if(v[j]>v[j+1]) swap(v[j],v[j+1]);
//     }
// }
// for(auto x: v) cout<<x<<" ";


// 16/08/2024
// insert in array at a specific index
// int arr[100] = {1,2,3,4,6,7,8,9};
// int n = 8;
// insert(arr,n,1,111);
// for(int i=0; i<n+1; i++){
//     cout<<arr[i]<<" ";
// }cout<<endl;
// insert(arr,n+1,0,123);
// for(int i=0; i<n+2; i++){
//     cout<<arr[i]<<" ";
// }
 

// int n = 3;
// cout<<isprime_efficient(n)<<endl;
// cout<<isprime_efficient(3);

// int x;
// cin>>x;
// cout<<x;



// 23/8/2024
// femit little thearom

// cout<<GCD(9,11);

// cout<<sieve_of_eratosthenes(11);
// 0 1 2 3 4 5 6 
// sieve_of_eratosthenes(5);






// int n = 102;
// while(true){
//     if(prime(n) and palindrome(n)){
//         cout<<n;
//         break;
//     }
//     n++;
// }

// optimized of finding next palindrome prime
// cout<<next_prime_palindrome(10110);

// func(5);

// cout<<((24*64)*(64%17))%17;


// bitset<32> bin(8);
// cout<<bin;





// 3 1 4 1 2 
//  partiton in sucn a way that index left sum is greater than right sum
// 3 4 8 9 11

vector<int> v = {0,0,0,0};
cout<<partioning(v);







    return 0;
}