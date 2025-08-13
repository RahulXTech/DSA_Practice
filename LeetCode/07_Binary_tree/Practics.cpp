#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            this->data=val;
            left = right = NULL;
        }
};
static int index = -1;
Node* buildingBineryTree(vector<int>arr){
        index++;
        if(arr[index] == -1) return NULL;
        Node* root = new Node(arr[index]);
        root->left = buildingBineryTree(arr);
        root->right = buildingBineryTree(arr);
        return root;        
};


void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);

    while(q.size()>0){
    Node* curr = q.front();
    q.pop();
    cout<<curr->data<<endl;

    if(root->left != NULL){
        q.push(curr->left);
    }
    if(curr->right!=NULL){
        q.push(curr->right);
    }
    }
};

int main(){
vector<int>arr =  {1,2,-1,-1, 3,4,-1,-1,5,-1,-1};

Node* n1 = buildingBineryTree(arr);
cout<<n1->data<<endl;
levelOrderTraversal(n1);

return 0;
}