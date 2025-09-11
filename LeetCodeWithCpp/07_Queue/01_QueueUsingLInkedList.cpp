#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
class Queue{
    Node* head;
    Node* tail;
    public:
    Queue(){
        head = tail = NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop(){
        if(empty()){
            cout<<"LL is EMPTY"<<endl;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    int front(){
        if(empty()){
            cout<<"LL is Empty"<<endl;
            return -1;
        }
        return head->data;
    }
    bool empty(){
        return head == NULL;
    }

};
int main(){
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(74);
    Q.push(42);
    Q.push(14);
    Q.push(5);
    Q.push(48);


    while(!Q.empty()){
        cout<<Q.front()<<endl;
        Q.pop();
    }

    return 0;
}