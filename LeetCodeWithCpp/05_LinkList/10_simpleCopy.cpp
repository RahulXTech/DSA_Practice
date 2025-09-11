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
            head = NULL;
            tail = NULL;
        }
        void push_back(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        void push_front(int val){
            Node* newNode = new Node(val);
            if(head==NULL){
                tail = head = NULL;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }
        void printNodes(){
            Node* temp =  head;
            while(temp!=NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }

        // void simple_copy(){
        //     Node* newHead = new Node(head->data);
        //     Node* oldTemp = newHead;
        //     Node* newTemp = newHead;

        //     while(oldTemp!= NULL){
        //         Node* Copynode = newNode(oldTemp->data);
        //         newTemp->next = Copynode;
        //         oldTemp = oldTemp->next;
        //         newTemp = newTemp->next;
        //     }
        // // printNodes(newHead);
        // }
};
int main(){
    List ll;
    ll.push_back(43);
    ll.push_back(62);
    ll.push_front(100);
    ll.push_front(300);
    ll.push_back(120);
    ll.push_back(32);
    ll.printNodes();
    
    return 0;
}