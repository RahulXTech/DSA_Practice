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
class List{
    public:
        Node* head;
        Node* tail;

        List(){
            head = tail = NULL;
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

        void printNodeS(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
};

int main(){
List l1;
l1.push_front(2);
l1.push_front(4);
l1.push_front(6);
l1.push_front(1);
l1.push_front(0);
l1.push_front(7);
l1.push_front(9);
l1.printNodeS();

    return 0;
}