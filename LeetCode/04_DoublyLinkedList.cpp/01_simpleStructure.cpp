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
            head = tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void pop_front(){
        if(head == NULL){
            cout<<"Linkedlist is empty";
            return;
        }

        Node* tempHead = head;
        head = head->next;
        if(head!=NULL){
            head->prev = NULL;
        }
        tempHead->next = NULL;
        delete tempHead;
    }
    void pop_back(){
        Node* temp = head;
        if(head == NULL){
            cout<<"DLL is null";
        }
        tail =tail->prev;
        if(tail!=NULL){
        tail->next = NULL;
        }
        temp->prev = NULL;
        delete tail;
    }
};

int main(){
    doublyLL DLL;
    DLL.push_back(22);
    DLL.push_back(32);
    DLL.push_back(83);

    DLL.pop_front();
    DLL.pop_back();
    DLL.pop_back();
    DLL.printLL();
    return 0;
};