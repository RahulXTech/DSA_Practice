#include<iostream>
#include<string>
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



void KthLevelRecursive(Node* root, int k, int currLevel){
    if(root == NULL) return;
    if(currLevel == k){
        cout<<root->data<<"  ";
        return;
    }

    KthLevelRecursive(root->left, k, currLevel+1);
    KthLevelRecursive(root->right, k, currLevel+1); 
}

void KthLevel(Node* root, int k){
    KthLevelRecursive(root, k, 1);
}
int main(){
    Node* root;
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->right->right->left = new Node(0);
    root->right->right->right = new Node(9);

    KthLevel(root,4);

    return 0;
}