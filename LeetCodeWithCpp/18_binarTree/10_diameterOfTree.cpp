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

static int inx = -1;
Node* buildTree(vector<int>arr){
    inx ++;
    if(arr[inx]==-1)return NULL;
    Node* newNode = new Node(arr[inx]);

    newNode->left = buildTree(arr);
    newNode->right = buildTree(arr);

    return newNode;
}

int heightT(Node* root){
    if(root == NULL) return 0;
    
    int leftH = heightT(root->left);
    int rigthH = heightT(root->right);
    int currHig = max(leftH, rigthH)+1;
    return currHig;
}

int diameterOfTree(Node* root){
    if(root == NULL) return 0;
    
    int currDia = heightT(root->left)+heightT(root->right)+1;
     
    int leftDia = diameterOfTree(root->left);
    int rightDia = diameterOfTree(root->right);

    return max(currDia, max(leftDia, rightDia));
}


int main(){
    // vector<int>arr = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    // Node* headRoot = buildTree(arr);

    Node* root;
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(5);
    root->left->right->right->right = new Node(5);
    root->left->left->left = new Node(6);
    root->left->left->left->left = new Node(6);


    cout<<"Diameter of a Tree is : "<<diameterOfTree(root);

    return 0;
}