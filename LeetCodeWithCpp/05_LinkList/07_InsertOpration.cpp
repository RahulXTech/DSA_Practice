#include<iostream>
#include<string>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            this->data= val;
            this->next = NULL;
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
                head=tail=newNode;
            }else{
                tail->next = newNode;
                tail = newNode;

            }
        }
        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }
        void printlinkedlist(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL";
        }

        void InsetValues(int values, int position){
            if(position<0){
                cout<<"Invalid position";
                return;
            }
            if(position == 0){
                push_front(values);
            }

            Node* temp = head;
            for(int i =0; i<position-1; i++){
                if(temp == NULL){
                    cout<<"invalid postion";
                    return;
                }
                temp = temp->next;
            }
            Node* newNode = new Node(values);
            newNode->next = temp->next;
            temp->next = newNode;
        }

};
int main(){
    List LinkedList;
    LinkedList.push_back(32);
    LinkedList.push_back(43);
    LinkedList.push_back(99);
    LinkedList.push_back(54);
    LinkedList.InsetValues(32,2);
    LinkedList.printlinkedlist();
    return 0;
}