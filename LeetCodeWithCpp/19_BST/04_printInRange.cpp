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
    };
    if(root->data > val){//left
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }
    return root;
}
Node* buildBST(vector<int>arr){
    Node* root = NULL;

    for(int i=0; i<arr.size(); i++){
        root = insert(root, arr[i]);
    }

    return root;
}
void printval(Node* root){
    if(root == NULL) return;

    cout<<root->data<<" ";
    printval(root->left);
    printval(root->right);
}
//Brute force approach - TC:O(n)
void printInRange(Node* root, int start, int end){
    if(root == NULL) return;

    if(root->data > start && root->data < end)
        cout<<root->data<<" ";

    printInRange(root->left, start, end);
    printInRange(root->right, start, end);
};
//Optimize approach - TC:O(log)
void printInRange2(Node* root, int start, int end){
    if(root == NULL) return;
    if(root->data >= start && root->data <= end){
        cout<<root->data<<" ";
        printInRange2(root->left, start, end);
        printInRange2(root->right, start, end);
    }else if(root->data < start){
        printInRange2(root->right, start, end);
    }else if(root->data<end)
        printInRange2(root->left, start, end);
}
int main(){
    vector<int>arr = {5,1,3,4,2,7};
    Node* root = buildBST(arr);

    printval(root);
    cout<<endl;
    printInRange(root, 2,6);
    cout<<endl;
    printInRange2(root, 2,6);

    return 0;
}