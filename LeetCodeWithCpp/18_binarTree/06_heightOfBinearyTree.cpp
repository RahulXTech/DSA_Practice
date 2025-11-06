#include<iostream>
#include<vector>
#include<queue>
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
static int inx = -1;
Node* buildTree(vector<int>arr){
    inx++;
    if(arr[inx] == -1) return NULL;
    Node* newNode = new Node(arr[inx]);

    newNode->left = buildTree(arr);
    newNode->right = buildTree(arr);

    return newNode;
};

queue<Node*>Q;
void levelOrderTraversal(Node* root){
    Q.push(root);
    while(!Q.empty()){
        if(root == NULL) return;
        Node* curr = Q.front();
        Q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL) Q.push(curr->left);
        if(curr->right!=NULL) Q.push(curr->right);
    }
    cout<<endl<<"--------------------------------------------------"<<endl;
};

queue<Node*>Q1;
void levelByLevelBreak(Node* root){
    Q1.push(root);
    Q1.push(NULL);

    while(!Q1.empty()){
        Node* curr = Q1.front();
        Q1.pop();
        if(curr == NULL){
            cout<<endl;
            if(Q1.empty())break;
            Q1.push(NULL);
        }else{
            cout<<curr->data<<" ";
            if(curr->left!=NULL) Q1.push(curr->left);
            if(curr->right!=NULL) Q1.push(curr->right);
        }
    }
    cout<<endl;
};

////////////////////////////Height_Of_Bineary_Tree////////////////////////////////////////
queue<Node*>Q3;
void heightOfBT(Node* head){
    Q3.push(head);
    Q3.push(NULL);
    int count = 0;
    while(!Q3.empty()){
        Node* curr = Q3.front();
        Q3.pop();

        if(curr==NULL){
            cout<<endl;
            count++;
            if(Q3.empty())break;
            Q3.push(NULL);
        }else{
            cout<<curr->data;
            if(curr->left!=NULL) Q3.push(curr->left);
            if(curr->right!=NULL) Q3.push(curr->right);
        }
    }
    cout<<"Total height of BT is : "<<count<<endl;
}


int main(){
vector<int>arr = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node* headRoot = buildTree(arr);

levelOrderTraversal(headRoot);
levelByLevelBreak(headRoot);
heightOfBT(headRoot);
    return 0;
}