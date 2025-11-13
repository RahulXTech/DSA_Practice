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
        left  = right = NULL;
    }
};
static int idx = -1;
Node* buildTree(vector<int>nodes){
    idx++;
    if(nodes[idx] == -1) return NULL;
    Node* newNode = new Node(nodes[idx]);

    newNode->left = buildTree(nodes);
    newNode->right = buildTree(nodes);
return newNode;
};


//0(n)
bool rootToNodePath(Node* root, int n1, vector<int>&path){
        if(root == NULL) return false; 

        path.push_back(root->data);

        if(root->data == n1){
            return true;
        }
    bool isLeft = rootToNodePath(root->left, n1, path);
    bool isRight = rootToNodePath(root->right, n1, path);

    if(isLeft || isRight) return true;
    path.pop_back();

    return false;
}

//TC - 0(n), SC - 0(n)
static int lca = -1;
int LCA(Node* root, int n1, int n2){
    vector<int>path1;
    vector<int>path2;

    rootToNodePath(root, n1, path1);
    rootToNodePath(root, n2, path2);
    
    for(int i=0, j=0; i<path1.size() && j<path2.size(); i++, j++){
         if(path1[i] != path2[j]){
            return lca;
         }
         lca = path1[i];
    }
return lca;
}

int main(){
    vector<int>nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);
    int n1 = 4;
    int n2 = 39;

    cout<<"LCA : "<<LCA(root, n1, n2);
return 0;
}