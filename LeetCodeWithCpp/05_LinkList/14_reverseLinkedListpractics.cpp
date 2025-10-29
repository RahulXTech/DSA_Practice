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

class ListNode{
    public:
        Node* head;
        Node* tail;

        ListNode(){
            head = tail = NULL;
        }
//Push the data front side.
        void push_front(int data){
            Node* newNode = new Node(data);

            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }
//Print the the all node data.
        void printNode(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
//Reverse the linked list.
        Node* reverseLinkedList(){
            Node* next = NULL;
            Node* prev = NULL;
            Node* curr = head;

            while(curr!=NULL){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            head = prev;
            return head;
        }
};

int main(){
    ListNode n1;
    n1.push_front(1);
    n1.push_front(2);
    n1.push_front(3);
    n1.push_front(4);
    n1.push_front(5);
    n1.push_front(6);
    n1.push_front(7);
    n1.push_front(8);
    n1.push_front(9);
    n1.printNode();
    n1.reverseLinkedList();
    n1.printNode();

    return 0;
}