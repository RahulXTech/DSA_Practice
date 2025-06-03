// #include<iostream>
// #include<string>
// using namespace std;

// class Node{
//         int data;
//         Node* next;//This is pointing to next node. that's why I would be this type of data type.
//     public:
//         Node(int val){
//             data = val;
//             next = nullptr;
//         };
//     void check_node_address(){
//         cout<<"Your address of node is : "<<next<<endl;
//     };
//     void check_node_data(){
//         cout<<"Your value of data is : "<<data<<endl;
//     };
//     void traverse(Node* head)
// };
// int main(){

// Node* node1 = new Node(4);
// Node* node2 = new Node(5);
// Node* node3 = new Node(6);

// node1->check_node_data();
// node2->check_node_data();
// node2->check_node_address();

// return 0;
// };

#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
        int values;
        Node* next;
    Node(int data){
        this->values=data;
    }
    void DisplayData(){
        cout<<values;
    }
    void Traversing_linkedList(){
        if(Node* == NULL){
            cout<<"linked list empty"<<endl;
        };

        struct node *ptr;
        ptr == 

    }
};

int main(){
Node* node1 = new Node(4);
Node* node2 = new Node(5);
node1->DisplayData();
return 0;
};