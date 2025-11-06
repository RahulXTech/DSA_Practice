#include<iostream>
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

int countNodes(Node* root){
    if(root == NULL) return 0;

    int leftN = countNodes(root->left);
    int rightN = countNodes(root->right);

    return leftN+rightN+1;
}


int main(){
    Node* root1;
    root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->right = new Node(3);
    root1->left->right->right = new Node(6);
    root1->left->right->right->right = new Node(5);

    cout<<"Total number of Nodes is  : "<<countNodes(root1)<<endl;
    return 0;
}