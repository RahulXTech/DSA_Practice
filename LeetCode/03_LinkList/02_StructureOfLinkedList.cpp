#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
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
        void push_front(int datas){
            Node* newNode = new Node(datas);
            if(head == NULL){
                head = tail = newNode ;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }
        void printNode(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL";
        }
};

int main()
{
    List ll;
    ll.push_front(32);
    ll.push_front(56);
    ll.push_front(92);
    ll.printNode();

    return 0;
}