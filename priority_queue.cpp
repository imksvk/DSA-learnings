#include<bits/stdc++.h>
using namespace std;


class maxheap{

    vector<int> hp;
public:

    void display(){
        for(int i: hp) cout<<i<<" "; 
        cout<<endl;
    }

    bool empty(){
        return (hp.size() == 0);
    }


    void upheapify(int ci){
        while(ci > 0){
            int pi = (ci-1)/2;
            if(hp[pi]<hp[ci]){
                swap(hp[pi],hp[ci]);
                ci = pi;
            }else break;
        }
    }

    void push(int ele){
        hp.push_back(ele);
        upheapify(hp.size()-1);
    }

    int peek(){
        if(hp.empty()) return INT_MIN;
        return hp[0];
    }

    void downheapify(int idx){
        while(idx < hp.size()){
            int lc = 2*idx+1;
            int rc = 2*idx+2;
            if(lc >= hp.size()) break;
            int maxele = idx;
            if(hp[lc]>hp[maxele]) maxele = lc;
            if(rc < hp.size() and hp[rc] > hp[maxele]) maxele = rc;
            if(maxele != idx){
                swap(hp[idx],hp[maxele]);
                idx = maxele;
            }
            else break;

        }
    }
    void pop(){
        if(hp.empty()) return ;
        else{
           swap(hp[0],hp[hp.size()-1]) ;
           hp.pop_back();
           if(! hp.empty()) downheapify(0);
        }
    }

    void pop_index(int idx){
        hp[idx] = INT_MAX;
        upheapify(idx);
        pop();

    }
};

int main(){

// maxheap hp;
// hp.push(3);
// hp.push(4);
// hp.push(11);
// hp.push(9);
// hp.push(14);
// hp.push(-1);
// hp.push(30);
// hp.display(); 
// hp.push(44);
// hp.push(50);
// hp.display(); 
// hp.pop();
// hp.display();
// cout<<"deleting index 2"<<endl;
// hp.pop_index(2);
// hp.display();



priority_queue<int,vector<int>, less<int>> pq;
// pq.push(3);
// pq.push(2);
// // print(pq);
//  cout<<pq.top();

// pq.




if("i"<"love") cout<<"i";
else cout<<"love";


// heap sort algoritham

 

    return 0;
}