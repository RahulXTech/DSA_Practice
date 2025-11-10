#include<iostream>
#include<vector>
#include<map>
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
    if(arr[idx] == -1) return NULL;
    Node* newNode = new Node(arr[idx]);

    newNode->left = buildTree(arr);
    newNode->right = buildTree(arr);
    
    return newNode;
};

void levelOrederTraversal(Node* root){
    queue<Node*>Q;
    Q.push(root);
    Q.push(NULL);

    while(!Q.empty()){
        Node* curr = Q.front();
        Q.pop();
     
        if(curr == NULL){
            cout<<endl;
            if(Q.empty()) break;
            Q.push(NULL);
        }else{
            cout<<curr->data<<" ";
            if(curr->left!=NULL) Q.push(curr->left);
            if(curr->right != NULL) Q.push(curr->right);
        }
    };
};

void topView(Node* root) {
    if (root == NULL) return;

    queue<pair<Node*, int>> Q;
    map<int, int> m; // HD -> Node->data

    Q.push({root, 0});

    while (!Q.empty()) {
        auto curr = Q.front();
        Q.pop();

        Node* currNode = curr.first;
        int currHD = curr.second;

        // If this horizontal distance is not already present in the map
        if (m.count(currHD) == 0) {
            m[currHD] = currNode->data;
        }

        if (currNode->left != NULL) {
            Q.push({currNode->left, currHD - 1});
        }
        if (currNode->right != NULL) {
            Q.push({currNode->right, currHD + 1});
        }
    }

    for (auto it : m) {
        cout << it.second << " ";
    }
    cout << endl;
};


int main(){
    vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    levelOrederTraversal(root);
    topView(root);
    
    
    return 0;
}