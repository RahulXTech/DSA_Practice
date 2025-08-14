#include<iostream>
#include<string>
#include<vector>
using namespace std;
 class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        left = right = NULL;
    }
 };
static int index = -1;
Node* buildingB_Tree(vector<int>arr){
    index++;
    if(arr[index] == -1) return NULL;
    Node* root = new Node(arr[index]);
    root->left = buildingB_Tree(arr);
    root->right = buildingB_Tree(arr);
    return root;
 };

int sumOfNodes(Node* root){
    if(root == NULL) return 0;
}

int main(){
vector<int>arr = {1,2,-1,-1, 3,4,-1,-1,5,-1,-1};
Node* root = buildingB_Tree(arr);
cout<<root->left->data;

    return 0;
}