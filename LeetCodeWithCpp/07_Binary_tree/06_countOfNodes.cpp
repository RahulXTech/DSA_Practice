#include<iostream>
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
Node* buildBinearyTree(vector<int> arr){
    index++;
    if(arr[index] == -1) return NULL;
    Node* root = new Node(arr[index]);
    root->left = buildBinearyTree(arr);
    root->right = buildBinearyTree(arr);
    
    return root;
};
int countNodes(Node* root){
    if(root == NULL) return 0;
    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);
    return leftCount + rightCount + 1;
};

int main(){
vector<int>arr =  {1,2,-1,-1, 3,4,-1,-1,5,-1,-1};
Node* root = buildBinearyTree(arr);
cout<<root->data<<endl;
cout<<"total node count is : "<<countNodes(root);
return 0;
}