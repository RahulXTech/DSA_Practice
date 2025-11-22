#include<iostream>
#include<string>
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
Node* insert(Node* root, int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    } 
    if(root->data > val){
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }
    return root;
};
Node* buildBST(vector<int>arr){
    Node* root = NULL;
    for(int i=0; i<arr.size(); i++){
        root = insert(root, arr[i]);
    }
    return root;
}
Node* deleteNode(Node* root, int target){
    if(root->data > target){
       root->left = deleteNode(root->left, target);
    }else if(root->data < target){
        root->right = deleteNode(root->right, target);
    }else{
        //Case 0 children
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //Case 1 children
        if(root->left == NULL || root->right == NULL){
            return root->left == NULL ? root->right : root->left;
        }
        //Case 2 children
        Node* IS = getInOrderSuccessor(root->right);
        root->data = IS->data;

        root->right = deleteNode(root->right, IS->data);
    }
};
void printEle(Node* root){
    if(root == NULL) return;
    
    printEle(root->right);
    cout<<root->data<<" ";
    printEle(root->left);
};

int main(){
    vector<int>array = {3,4,5,3,54,6,7,7,56,};
    Node* root = buildBST(array);

    printEle(root);
    return 0;
}