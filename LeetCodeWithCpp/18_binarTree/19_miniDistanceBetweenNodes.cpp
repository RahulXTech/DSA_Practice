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


Node* LCA(Node* root, int n1, int n2){
    if(root == NULL) return NULL;

    if(root->data == n1 || root->data == n2 ) return root;

    Node* leftNode = LCA(root->left, n1, n2);
    Node* rightNode = LCA(root->right, n1, n2);

    if(leftNode != NULL && rightNode != NULL) return root;

    return leftNode == NULL ? rightNode : leftNode;
};

int dist(Node* root, int n){
     if(root == NULL) return -1;

     if(root->data == n) return 0;

     int leftDis = dist(root->left, n);
     if(leftDis != -1) return leftDis + 1;

     int rightDis = dist(root->right, n);
     if(rightDis != -1) return rightDis+1;

     return -1;
}
int minDis(Node* root, int n1, int n2){

    Node* lca = LCA(root, n1, n2);

    int dis1 = dist(lca, n1);
    int dis2 = dist(lca, n2);
    
    return dis1 + dis2;
}

int main(){
    vector<int>nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);
    int n1 = 4;
    int n2 = 6;

    cout<<"MiniMum Dis is : "<<minDis(root, n1, n2);
    return 0;
}