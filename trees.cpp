// #include<bits/stdc++.h>
// using namespace std;


// class node{
//     public :
//     int val;
//     node* left, *right;

//     node(int val){
//         this->val = val;
//         left = right = NULL;
//     }
// };

// void display(node* root){
//     if(root == nullptr) return;
//     cout<<root->val<<" ";
//     display(root->left);
//     display(root->right);
// }

// int sum (node* root){
//     if(root == nullptr) return 0;
//     int ans = root->val + sum(root->left) + sum(root->right);
//     return ans;
// }


// int size(node* root){
//     if(root == nullptr) return 0;
//     int x = 1 + size(root->left)+size(root->right);
//     return x;
// }

// int maxintree(node* root){
//     if(root == nullptr) return  INT_MIN;
//     int ans = max(root->val, max(maxintree(root->left), maxintree( root->right)));
//     return ans;
// }


// int levels(node* root){
//     if(root == nullptr) return 0;
//     return 1 + max(levels(root->left), levels(root->right));
// }


// void levelOrder(node* root, int curr, int l){
//     if(root == nullptr) return;
//     if(curr == l){
//         cout<<root->val<<" ";
//         return;
//     }
//     levelOrder(root->left, curr+1, l);
//     levelOrder(root->right, curr+1, l);
// }


// void levelOrderTraversal(node* root){
//     int n = levels(root);
//     for(int i=1; i<=n; i++){
//         levelOrder(root, 1, i);
//         cout<<endl;
//     }
// }

// int main(){

// // node* x = new node(111);
// node* a = new node(1);
// node* b = new node(2);
// node* c = new node(3);
// node* d = new node(4);

// // x->left = a;
// a->left = b;
// b->left = c;
// a->right = d;

// display(a); cout<<endl;
// cout<<sum(a);
// cout<<endl<<size(a);
// // cout<<endl<<maxintree(x);

// cout<<endl<<levels(a);


// cout<<endl;
// // levelOrder(a, 1, 1);
// levelOrderTraversal(a);




//     return 0;
// }


// ########## BFS ##############

#include<bits/stdc++.h>
using namespace std;
// pxri

class Node{
    public :

    Node* left, * right;
    int val;

    Node(int val){
        this->val = val;
        left = right = nullptr;
    }
};


int levels(Node* root){
    if(root == nullptr) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}


void levelOrder(Node* root, int cl, int l){
    if(root == nullptr) return;
    if(cl == l){
        cout<<root->val<<" ";
        return;
    }
    levelOrder(root->left, cl+1, l);
    levelOrder(root->right, cl+1, l);
}


void levelOrderTraversal(Node* root){
    int n = levels(root);
    for(int i=1; i<=n; i++){
        levelOrder(root, 1, i);
        cout<<endl;
    }
}

// bfs
void level_order_queue(Node* root){
    queue<Node*> q;
    q.push(root);
    while( ! q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);

    }
    cout<<endl;
}


// construct the tree from level order traversal 

Node* construct(int arr[], int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1, j = 2;
    while(i<n and !q.empty()){
        Node* temp = q.front();
        q.pop();
        Node* l, *r;
        if(arr[i] != -1) l = new Node(arr[i]);
        else l = nullptr;
        if(j!=n and arr[j]!=-1) r = new Node(arr[j]);
        else r = nullptr;
        temp->left = l;
        temp->right = r;
        if(l) q.push(l);
        if(r) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}

int product(Node* root){
    if(root == nullptr) return 1;
    return root->val*product(root->left)*product(root->right);
}


void topview(Node* root){
    int minlev = INT_MAX;
    int maxlev = INT_MIN;
    unordered_map<int, int> mp;
    queue<pair<Node*, int>> q;
    q.push({root,0});
    mp[0] = root->val;
    while(q.size()>0){
        Node* temp = (q.front()).first;
        int level = (q.front()).second;
        q.pop();
        minlev = min(minlev, level);
        maxlev = max(maxlev, level);
        if(!mp[level]){
            //mp.find(level) == mp.end() // we can write this also
            mp[level] = temp->val;
        }
        if(temp->left){
            q.push({temp->left, level-1});
        }
        if(temp->right){
            q.push({temp->right,level+1});
        }
    }
    for(int i=minlev ; i<=maxlev; i++){
        cout<<mp[i]<<" ";
    }

}

int main(){

// steps for bfs
//1. front nikalo ,,, pop karo ,,,, print karo
//2. push temp left, temp right to q (push if not null)

    // Node* a = new Node(1);
    // Node* b = new Node(2);
    // Node* c = new Node(3);
    // Node* d = new Node(4);
    // Node* e = new Node(5);
    // Node* f = new Node(6);
    // Node* g = new Node(7);

    // a->left  = b;
    // a->right = c;
    // b->left = d;
    // b->right = e;
    // c->left = g;
    // c->right = f;

    // levelOrderTraversal(a); cout<<endl;
    // level_order_queue(a);

    // levelOrder(a,0,2);
    // int arr[] = {1,2,3,4,5,-1,6,-1,-1,7,8,9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // Node* root = construct(arr, n);
    // level_order_queue(root);

    // cout<<product(a);


    // above view of binary tree
    // top view of binary tree

    int arr[] = {1,2,3,4,5,-1,6,-1,-1,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);
    
    level_order_queue(root);

    topview(root);


    
    return 0;
}

