#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    node* left, *right;
    int val;

    node(int val){
        left = right = nullptr;
        this->val = val;
    }


};


void inorder(node* root){
    if(root == nullptr) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void constructbst(node* root, int value){
    if(value > root->val){
        if(root->right == nullptr){
            root->right = new node(value);
        }else{
            constructbst(root->right, value);
        }
    }
    else{
        if(root->left == nullptr){
            root->left = new node(value);
        }
        else{
            constructbst(root->left, value);
        }
    }
}




int main(){

// for inorder predecessor 
//we should go->left->keep going right

 
node* root = new node(1);
for(int i=0; i<5; i++){
    int x ; cin>>x;
    constructbst(root, x);
}
inorder(root);

    return 0;
}