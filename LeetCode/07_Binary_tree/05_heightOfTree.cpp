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
Node* buildingBineryTree(vector<int>arr){
    index++;
    if(arr[index] == -1) return NULL;
    Node* temp = new Node(arr[index]);
    temp->left = buildingBineryTree(arr);
    temp->right = buildingBineryTree(arr);
    return temp;
};
int countHeightOfTree(Node* root){
    if(root == NULL) return 0;
    int leftHeight = countHeightOfTree(root->left);
    int rightHeight = countHeightOfTree(root->right);

    return max(leftHeight, rightHeight)+1;
}
int main(){
vector<int>arr =  {1,2,-1,-1, 3,4,-1,-1,5,-1,-1};
Node* root = buildingBineryTree(arr);
cout<<countHeightOfTree(root);
return 0;
}