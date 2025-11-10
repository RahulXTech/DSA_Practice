#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
Node(int data){
        this->data = data;
        left = right = NULL;
}
};

static int idx = -1;
Node* buildTree(vector<int>nodes){
    idx++;
    Node* newNode  = new Node(nodes[idx]);
    if(nodes[idx]== -1) return NULL;

    newNode->left = buildTree(nodes);
    newNode->right = buildTree(nodes);
};


void levelOrderTree(Node* root){
    queue<Node*>Q;
    Q.push(root);
    while(!Q.empty()){
        if(root == NULL) return;
        Node* curr = Q.front();
        Q.pop();
    
        cout<<curr->data<<" ";

        if(curr->left!=NULL) Q.push(curr->left);
        if(curr->right!=NULL) Q.push(curr->right);
    }
}

queue<Node*>Q;
static int level = 1;
void levelOrderTrv2(Node* root){
    Q.push(root);
    Q.push(NULL);
    
    while(!Q.empty()){
        Node* curr = Q.front();
        Q.pop();
    if(curr == NULL){
        cout<<endl;
        if(Q.empty()) break;
        Q.push(NULL);
        level++;
    }else{
        if(level == 2)
        cout<<curr->data<<" ";
        if(curr->left!=NULL) Q.push(curr->left);
        if(curr->right!=NULL) Q.push(curr->right);
    }
        // if(root == NULL) return;

        // Node* curr = Q.front();
        // Q.pop();
        // cout<<curr->data<<" ";

        // if(curr->left!=NULL) Q.push(curr->left);
        // if(curr->right!=NULL) Q.push(curr->right);
    }
};


// void KthLevelOfTree(Node* root, int k){

// }
int main(){
// vector<int>arr = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
// Node* root = buildTree(arr);

Node* root;
root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);

levelOrderTrv2(root);

    return 0;
}