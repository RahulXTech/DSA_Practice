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



class List{
    public:
        Node* head;
        Node* tail;
        List(){
            head=tail=NULL;
        }

    void push_front(int data){
        Node* newData = new Node(data);
        if(head == NULL){
            head = tail = newData;
        }else{
            newData->next = head;
            head = newData;
        }
    };

    void push_back(int data){
        Node* newData = new Node(data);
        if(head == NULL){
            head = tail = newData;
        }else{
            tail->next = newData;
            tail = newData;
        }
    }
    void printNodes(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    List l1;
    l1.push_front(4);
    l1.push_front(6);
    l1.push_front(5);
    l1.push_front(8);
    l1.push_front(4);

    l1.push_back(5);
    l1.push_back(0);
    l1.push_back(1);
    l1.push_back(2);


    l1.printNodes();

    return 0;
}