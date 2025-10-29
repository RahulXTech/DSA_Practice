#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            this->data = val;
            this->next =  NULL;
        }
};

class List{
    public:
        Node* head;
        Node* tail;

        List(){
            head = tail = NULL;
        }

        //Using head to insert newNode in linkedlist.
        void insertAthead(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                tail->next = head;
            }else{
                newNode->next = head;
                head = newNode;
                tail->next = head;
            }
        }
        //without using head insert newnode in linkedlist.
        void insetVal(int val){
            Node* newNode = new Node(val);
            if(tail == NULL){
                newNode->next = tail->next;
                tail->next = newNode;
            }
        }
        //Inset the newNode at tail
        void insetAtTail(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                tail->next = head;
            }else{
                newNode->next = head;
                tail->next = newNode;
                tail = newNode;
            }
        };
        //Delete at head;
        void deleteAtHead(){
            Node* temp = head;
            if(head == NULL) return;
            else if(head == tail){
                delete head;
                head = tail = NULL;
            }else{
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
            }
        }
        //Delete at tail
        void deleteAtTail(){
            Node* temp = tail;
            Node* prev = head;
            if(head == NULL) return;
            else if(head == tail){
                    delete head;
                    head = tail = NULL;
            }else{
                while(prev->next != tail){
                    prev = prev->next;
                }
                tail = prev;
                tail->next = head;
                temp->next = NULL;
                delete temp;
            }
        }
        void printCIrcularLikedList(){
            if(head == NULL) return;
            cout<<head->data<<" -> ";
            Node* temp = head->next;

            while(temp!=head){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL";
        }
};
int main(){
    List cll;
    cll.insertAthead(1);
    cll.insertAthead(2);
    cll.insertAthead(3);
    cll.insetAtTail(4);
    // cll.deleteAtHead();
    cll.deleteAtTail();
    cll.printCIrcularLikedList();


    return 0;
}
