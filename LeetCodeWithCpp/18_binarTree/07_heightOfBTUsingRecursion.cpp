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

int heightOfATree(Node* head){
    Node* temp = head;
    if(temp == NULL) return 0;
    int leftHeight = heightOfATree(temp->left);
    int rightHeight = heightOfATree(temp->right);

    int ans = max(leftHeight, rightHeight)+1;

    return ans;
};

int main(){
    Node* root1;
    root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->right = new Node(3);
    root1->left->right->right = new Node(6);
    root1->left->right->right->right = new Node(5);

    cout<<"Height of Tree : "<<heightOfATree(root1)<<endl;
    return 0;
}