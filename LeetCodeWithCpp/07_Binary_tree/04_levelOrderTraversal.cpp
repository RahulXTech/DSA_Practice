#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            this->data = val;
            left = right = NULL;
        }
};
static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;
    if(preorder[idx] == -1) return NULL;
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder); //LEFT
    root->right = buildTree(preorder); //RIGHT

    return root;
};

void preOrederTraversal(Node* root){
    if(root == NULL){
        return;
    }
     cout<<root->data << " ";
     preOrederTraversal(root->left);
     preOrederTraversal(root->right);

};
void inOrderTraversal(Node* root){
    if(root == NULL) return;
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    if(root == NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);

    while(q.size()>0){
        Node* curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}

int main(){
vector<int> preorder = {1,2,-1,-1, 3,4,-1,-1,5,-1,-1};
Node* root = buildTree(preorder);
// cout<<root->data;
// cout<<root->right->right->data;
preOrederTraversal(root);
cout<<endl;
inOrderTraversal(root);
cout<<endl;
postOrderTraversal(root);
cout<<endl;
levelOrderTraversal(root);
return 0;
};