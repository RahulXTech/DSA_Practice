#include<iostream>
#include<string>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};
class List
{
    public:
        Node* head; 
        Node* tail;
        List()
        {
            head = tail = NULL;
        }
        void push_fron(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }

        }
        void pop_front(){
            if(head == NULL){
                cout<<"Sorry linkedList is Empty."<<endl;
            }
            Node* temp = head;
            head = head->next;
            temp->next = NULL;

            delete temp;
        }

        void printLL(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" ->";
                temp = temp->next;
            }
            cout<<"NULL";
        }
};
int main(){
    List ll;
    ll.push_fron(43);
    ll.push_fron(44);
    ll.push_fron(63);
    ll.pop_front();
    ll.printLL();
}
