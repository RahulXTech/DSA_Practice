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
class List{
    public:
        Node* head;
        Node* tail;

        List(){
            head = tail = NULL;
        }
        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next= newNode;
                tail = newNode;
            }
        }
        void printLL(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }

        void pop_back(){
            if(head == NULL){
                cout<<"sorry your LL is Empty"<<endl;
            }

            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }

            temp->next = NULL;
            delete tail;
            tail = temp;

        }
};
int main(){
    List ll;
    ll.push_back(34);
    ll.push_back(21);
    ll.push_back(93);
    ll.push_back(43);
    ll.printLL();
    ll.pop_back();
    ll.printLL();
    return 0;
};