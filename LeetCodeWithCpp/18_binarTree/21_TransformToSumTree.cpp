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
        left  = right = NULL;
    }
};
static int idx = -1;
Node* buildTree(vector<int>nodes){
    idx++;
    if(nodes[idx] == -1) return NULL;
    Node* newNode = new Node(nodes[idx]);

    newNode->left = buildTree(nodes);
    newNode->right = buildTree(nodes);
return newNode;
};


void printNodes(Node* root){
    Node* temp = root;
    if(temp == NULL) return;

    cout<<temp->data<<" ";
    printNodes(temp->left);
    printNodes(temp->right);
    
}

int transform(Node* root){
    if(root == NULL) return 0;

    int leftOld = transform(root->left);
    int rightold = transform(root->right);
    int currOld = root->data;

    root->data = leftOld + rightold;

    if(root->left!=NULL)
        root->data+=root->left->data;
    if(root->right!=NULL)
        root->data+=root->right->data;

    return currOld;
}

int main(){
    vector<int>nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);

    printNodes(root);
    cout<<endl;
    transform(root);
    printNodes(root);
    cout<<endl;




    return 0;
}