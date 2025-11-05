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

static int idx = -1;
Node* buildTree(vector<int>arr){
    idx++;
    if(arr[idx]==-1) return NULL;
    Node* newNode = new Node(arr[idx]);

    newNode->left = buildTree(arr);
    newNode->right =  buildTree(arr);

    return newNode;
};

//level order traversal(BFS).....
//. 1
//. 2 3
//. 4 5 6

queue<Node*>Q;
void levelOrderTraversal(Node* root){
    Q.push(root);
    Q.push(NULL);
    while(!Q.empty()){
        Node* curr = Q.front();
        Q.pop();
        
        if(curr==NULL){
            cout<<endl;
            if(Q.empty()) break;
            Q.push(NULL);
        }else{
            cout<<curr->data<<" ";
            if(curr->left!=NULL) Q.push(curr->left);
            if(curr->right!=NULL) Q.push(curr->right);
        }

    }
};




int main(){
vector<int>arr = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node* headRoot = buildTree(arr);
levelOrderTraversal(headRoot);


return 0;
}