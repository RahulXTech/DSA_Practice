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
static int idx = -1;
Node* buildTree(vector<int>arr){
    idx++;
    if(arr[idx] == -1) return NULL;
    Node* newNode = new Node(arr[idx]);

    newNode->left = buildTree(arr);
    newNode->right = buildTree(arr);
    
    return newNode;
};

bool isIdentical(Node* root1, Node* root2){
    //Base case
    if(root1 == NULL && root2==NULL){
        return true;
    }else if(root1 == NULL || root2 == NULL) return false;
    

    if(root1->data != root2->data) return false;

    return isIdentical(root1->left, root2->left)
    && isIdentical(root1->right, root2->right);
}

bool subTreeOfAnotherTree(Node* root, Node* subRoot){
    //Base case
        if(root == NULL && subRoot == NULL)
            return true;
        else if(root == NULL || subRoot == NULL) 
            return false;


        if(root->data == subRoot->data){
            //check left & right root
            if(isIdentical(root, subRoot))return true;
        } 

        // bool leftTree = subTreeOfAnotherTree(root->left, subRoot);
        // if(!leftTree)
        //     return subTreeOfAnotherTree(root->right, subRoot);

        return subTreeOfAnotherTree(root->right, subRoot) || subTreeOfAnotherTree(root->left, subRoot);
};
int main(){
vector<int>rootArr ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node* subRoot;
subRoot = new Node(2);
subRoot->left = new Node(4);
subRoot->right = new Node(5);

Node* root = buildTree(rootArr);

cout<<"Sub tree of another tree availabe of not : "<<subTreeOfAnotherTree(root, subRoot);
return 0;
}