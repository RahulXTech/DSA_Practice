#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int data){
            this->data = data;
            next = prev = NULL;
        }
};

class DList{
    public:
        Node* head;
        Node* tail;
        DList(){
            head = tail = NULL;
        }
        //Push data from head
        void pushAtHead(int data){
            Node* newNode  = new Node(data);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        }
        //Push data from tail
        void pushAtTail(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head=tail=newNode;
            }else{
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
        }
        //Delete from the front
        void deleteFromHead(){
            if(head == NULL){
                cout<<"liST is empty!\n";
                return;
            }
            Node* temp = head;
            head = head->next;
            if(head)
                head->prev = NULL;
            else
                tail = NULL;
            delete temp;
        }
        //delete data from tail
        void deleteFromTail(){
            if(head == NULL){
                cout<<"List is empty!\n";
                return;
            }
        }
        void printForwared(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data <<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
        void printBackward(){
            Node* temp = tail;
            while(temp!=NULL){
                cout<<temp->data<<"<-";
                temp = temp->prev;
            }
            cout<<"NULL"<<endl;
        }
};

int main(){
    DList dl;
    cout<<"push data from head"<<endl;
    dl.pushAtHead(2);
    dl.pushAtHead(6);
    dl.pushAtHead(5);
    dl.printForwared();
    dl.printBackward();
    cout<<"push data from tail"<<endl;
    dl.pushAtTail(4);
    dl.pushAtTail(3);
    dl.pushAtTail(8);
    dl.printForwared();
    cout<<"delete data from head"<<endl;
    dl.deleteFromHead();
    dl.printForwared();

    for(int i=2; i<200; i+=2){
        dl.pushAtHead(i);
    }
    dl.printForwared();

    return 0;
}