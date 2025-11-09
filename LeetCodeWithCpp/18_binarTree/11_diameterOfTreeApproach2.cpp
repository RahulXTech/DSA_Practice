#include<iostream>
#include<string>
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
int height(Node* root){
    if(root == NULL) return 0;

    int leftN = height(root->left);
    int rightN = height(root->right);

    int maxH = max(leftN, rightN)+1;

    return maxH;
};
int diameterOfTree(Node* rootHead){
    if(rootHead == NULL) return 0;
   int currDiam = height(rootHead->left) + height(rootHead->right) + 1;
   int leftDiam = diameterOfTree(rootHead->left);
   int rightDiam = diameterOfTree(rootHead->right);

   int diameter = max(currDiam, max(leftDiam, leftDiam));
}; 
//pair(diameater, height)
pair<int, int>diam2(Node* root){
    if(root == NULL) return make_pair(0,0);

    //(diameater height)
    pair<int, int>leftInfo = diam2(root->left);
    pair<int, int>rightInfo = diam2(root->right);

    int currDiam = leftInfo.second + rightInfo.second +1;
    int finalDiam = max(currDiam, max(leftInfo.first, rightInfo.first));
    int finalHt = max(leftInfo.second, rightInfo.second) + 1;

    return make_pair(finalDiam, finalHt);
};

int main(){
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
        cout<<"First Approach diameter of tree is : "<<diameterOfTree(root)<<endl;

        cout<<"Second Approach diameter of Tree is : "<<diam2(root).first<<endl;
return 0;
}