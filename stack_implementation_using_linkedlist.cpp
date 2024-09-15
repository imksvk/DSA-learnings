#include<bits/stdc++.h>
using namespace std;

class node{
    public :
    int val;
    node* next;

    node(int value){
        this->next = nullptr ;
        this->val = value;
    }

};

class Stack{

    node* head;
    int sizee ;
    public:
    Stack(){
        sizee = 0;
        head = nullptr;
    }

    void push(int value){
        node* temp = new node(value);
        temp->next = head;
        head = temp;
        sizee++;
    }

    void pop(){
        if( head == nullptr) return ;
        head = head->next;
        sizee--;
    }

    int size(){
        return sizee;
    }

    void display(){
        node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
    int top(){
        return head->val;
    }

};

int main(){


Stack a;
a.push(1);
a.push(2);
// a.display();
cout<<a.top();


    return 0;
}