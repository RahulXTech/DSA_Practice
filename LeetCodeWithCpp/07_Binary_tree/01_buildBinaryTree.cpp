#include<iostream>
#include<string>
#include<vector>
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



int main(){
vector<int> preorder = {1,2,-1,-1, 3,4,-1,-1,5,-1,-1};
Node* root = buildTree(preorder);
cout<<root->data;
cout<<root->right->right->data;
return 0;
};