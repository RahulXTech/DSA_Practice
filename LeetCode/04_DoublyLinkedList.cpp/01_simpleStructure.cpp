#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    Node(int val){
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class doublyLL{
    public:
        Node* head;
        Node* tail;
        doublyLL(){
            head = NULL;
            tail = NULL;
        }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void printLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" <=> ";
            temp = temp->next;
        }
        cout<<"NULL";
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = NULL;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
};

int main(){
    doublyLL DLL;
    DLL.push_front(43);
    DLL.push_front(54);
    DLL.push_front(65);
    DLL.push_back(22);

    DLL.printLL();
    return 0;
};