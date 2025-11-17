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

    if(root->data > val){ //Left subTree
       root->left = insert(root->left, val);
    }else{ //Right subtree for the creation
        root->right = insert(root->right, val);
    }
    return root;
};

Node* buildBST(int arr[], int n){
    Node* root = NULL;
    
    for(int i=0; i<n; i++){
    root = insert(root, arr[i]);
    }
    return root;
};

void inorder(Node* root){
    if(root == NULL)return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//////////////////Searching in BST///////////////////////////
bool searchBST(Node* root, int key){
    if(root == NULL) return NULL;
    if(root->data == key) return true;
    if(root->data > key)
        return searchBST(root->left, key);
    else
        return searchBST(root->right, key);

    return false;
}
int main(){
    int arr[6] = {5,1,3,4,2,7};
    Node* root = buildBST(arr,6);
    inorder(root);
    cout<<endl;
    cout<<"Answer : "<<searchBST(root, 3)<<endl;

    return 0;
}