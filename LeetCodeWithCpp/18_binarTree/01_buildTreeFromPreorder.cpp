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
    //===============================build a binary tree preorder sequence============================
static int idx = -1;
Node* buildPreorderTree(vector<int>arr){
    idx++;
    if(arr[idx] == -1) return NULL;

    Node* newNode = new Node(arr[idx]);//2
    newNode->left = buildPreorderTree(arr);//left subtree
    newNode->right = buildPreorderTree(arr);//right subtree

    return newNode;
}

// ==========================Traverse bineary tree preorder sequence==================================
void traverseBTPreoreder(Node* headRoot){
    if(headRoot == NULL) return;
    cout<<headRoot->data<<" ";
    traverseBTPreoreder(headRoot->left);
    traverseBTPreoreder(headRoot->right);
    
}

int main(){
    vector<int>arrs = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildPreorderTree(arrs);

    traverseBTPreoreder(root);
        
    return 0;
}