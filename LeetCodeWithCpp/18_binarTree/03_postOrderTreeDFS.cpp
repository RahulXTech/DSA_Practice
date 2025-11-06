#include<iostream>
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
Node* buildTree(vector<int>arr){
    idx++;
    if(arr[idx] == -1) return NULL;
    Node* newNode = new Node(arr[idx]);
    
    newNode->left = buildTree(arr);
    newNode->right = buildTree(arr);
    return newNode;
};

//postOrder traversal-> left subtree->right->subtree->root
void postOrderTraversal(Node* root){
    if(root == NULL)return;
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout<<root->data<<" ";
    return;
};

int main(){
    
vector<int>arr = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node* rootNode = buildTree(arr);

postOrderTraversal(rootNode);

    return 0;
}