#include<iostream>
#include<vector>
#include<climits>
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

bool helperBST(Node* root, long long minVal, long long maxVal){
    if(root == NULL) return true;

    if(root->data <= minVal || root->data >= maxVal) 
        return false;

    return helperBST(root->left, minVal, root->data) &&
           helperBST(root->right, root->data, maxVal);
}

bool checkValidBST(Node* root){
   return helperBST(root, LLONG_MIN, LLONG_MAX);
}

int main(){
    Node* root = new Node(3);
    root->right = new Node(5);
    root->left = new Node(2);
    root->left->left = new Node(1);
    root->left->right = new Node(4);

    cout << "Your BST is : " << checkValidBST(root);

    return 0;
}