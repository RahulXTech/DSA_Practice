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

int KthAncestorOrNode(Node* root, int node, int k){
    if(root == NULL) return -1;
    
    if(root->data == node) return 0;

    int leftDis = KthAncestorOrNode(root->left, node, k);
    int rightDis = KthAncestorOrNode(root->right, node, k);

    if(leftDis == -1 && rightDis == -1) return -1;
    
    
    int validVal = (leftDis == -1) ? rightDis : leftDis;
    if(validVal+1 == k) cout<<"Kth Ancestor : "<<root->data<<endl;

    return validVal+1;
}

int main(){
    vector<int>nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);
    int node = 6;
    int k = 1;
    
    KthAncestorOrNode(root, node, k);

    return 0;
}