#include<iostream>
#include<string>
using namespace std;

struct Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    
    public:
        List(){
            head = NULL;
            tail = NULL;
        }
    void push_front(int val){
        Node* newNode = new Node(val);
        // Node* newNode(val) //it's statics so don't try to use.
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head; 
            head = newNode;
        }
    }

    void PrintLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.PrintLL();

    return 0;
}