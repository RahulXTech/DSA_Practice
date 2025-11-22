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
static int idx = -1;
Node* buildBineryTree(vector<int>arr){
    idx++;
    if(arr[idx] == -1) return NULL;
    Node* newNode = new Node(arr[idx]);
    newNode->left = buildBineryTree(arr);
    newNode->right = buildBineryTree(arr);

    return newNode;
}
void printVal(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    printVal(root->left);
    printVal(root->right);
}
void printPaths(vector<int>arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void helperFunction(Node* root, vector<int>&arr){
    if(root == NULL)return;
    arr.push_back(root->data);
    if(root->left == NULL && root->right == NULL){
        printPaths(arr);
        arr.pop_back();
        return;
    }
    helperFunction(root->left, arr);
    helperFunction(root->right, arr);

    arr.pop_back();
}

void printRootTopat(Node* root){
    vector<int>paths;
    helperFunction(root, paths);

}

int main(){
Node* root;
root = new Node(8);
root->left = new Node(5);
root->left->left = new Node(3);
root->left->left->left = new Node(1);
root->left->left->right = new Node(4);
root->left->right = new Node(6);

root->right = new Node(10);
root->right->right = new Node(11);
root->right->right->right = new Node(14);



printRootTopat(root);

return 0;
}