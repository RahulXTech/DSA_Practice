#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
        Node(int data){
            this->data = data;
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
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }  
        void printNodes(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL";
        } 
};
int main(){
    List ll;
    ll.push_front(32);
    ll.push_front(42);
    ll.push_front(72);
    ll.printNodes();
    return 0;
}