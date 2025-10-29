#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};

class List{
    public:
        Node* head;
        Node* tail;

        List(){
            head = NULL;
            tail = NULL;
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        void printLL(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL";
        }

};
int main(){
    List ll;
    ll.push_back(33);
    ll.push_back(22);
    ll.push_back(21);
    ll.printLL();
    return 0;
}