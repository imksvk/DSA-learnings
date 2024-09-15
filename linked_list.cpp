#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int val){
        this->val = val;
        next = nullptr;
    }
};

node* rev(node* head){
    node* temp = head;
    stack<node*> st;
    while(temp){
        st.push(temp);
        temp = temp->next;
    }
    node* new_head =st.top();
    st.pop();
    temp = new_head;
    while(! st.empty()){
        temp->next = st.top();
        st.pop();
        temp = temp->next;
    }
    temp->next = nullptr;
    return new_head;
}

void revrec(node* &head){
    if(head == nullptr) return ;
    revrec(head->next);
    // head->head2->ned3->head4->null
    head->next->next = head;
    head->next = nullptr;

}


int main(){

node* a = new node(1);
node* b = new node(2);
node* c = new node(3);
node* d = new node(4);
node* e = new node(5);

e->next = d;
d->next = c;
c->next = b;
b->next = a;

node* x = e;
while(x){
    cout<<x->val<<" ";
    x = x->next;
}
 revrec(e);
cout<<endl;
while(e){
    cout<<e->val<<" ";
    e = e->next;
}


    return 0;
}