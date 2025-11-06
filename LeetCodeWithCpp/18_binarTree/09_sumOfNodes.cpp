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
/////////////////////////Recursive Approach + Static variable method/////////////////
static int total = 0;
int totalSumOfAllNodes(Node* root){
    Node* temp = root;
  
        if(temp == NULL) return 0;
        cout<<temp->data<<"   ";
        total+=temp->data;
        int leftT = totalSumOfAllNodes(temp->left);
        int rightT = totalSumOfAllNodes(temp->right);

        return total;
};

/////////////====Recursive Approach=====////////////////////////////////////////////////
int totalSumOfAllNodes2(Node* root){
    if(root == NULL) return 0;

    int left1 = totalSumOfAllNodes2(root->left);
    int right1 = totalSumOfAllNodes2(root->right);
//check working principle
// int sumN = left1+right1;
//     cout<<sumN<<endl;

    return left1+right1+root->data;
};

int main(){
    Node* root;
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(4);
    
    cout<<"1Total sum of node is : "<<totalSumOfAllNodes(root)<<endl;
    cout<<"2Total sum of node is : "<<totalSumOfAllNodes2(root)<<endl;

    return 0;
};