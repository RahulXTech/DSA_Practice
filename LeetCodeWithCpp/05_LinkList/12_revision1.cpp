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

class list{
    public:
        Node* head;
        Node* tail;
        list(){
            head = tail = NULL;
        }
        void push_back(int data){
            Node* newNode  = new Node(data);
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        void push_front(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }
        void print(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
        void pop_front(){
            if (head == NULL)
            {
               cout<<"SORRY LL IS EMPTY"<<endl;
               return;
            }
            
            Node* temp = head;
            head = head->next;
            delete temp;

            if(head == NULL)tail=NULL;
        }
        void pop_back(){
            if(head == NULL){
                cout<<"Sorry LL is Empty"<<endl;
                return;
            }
            if(head == tail){
                delete head;
                tail = head = NULL;
            }

            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            delete tail;
            temp->next = NULL;
            tail = temp;
        }
};  

int main(){
    list head1;
    head1.push_back(4);
    head1.push_back(6);
    head1.push_back(9);
    head1.push_front(2);

    head1.print();
    
    head1.pop_back();
    head1.print();
    head1.pop_front();
    head1.print();

    return 0;
}