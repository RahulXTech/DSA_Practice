#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
        int values;
        Node* next;
    
        Node(int data){
            values = data;
            next = nullptr;
        };
    void display(){
        cout<<"The data of node is :"<<values<<endl;
    }
};

class LinkedList{
    public:
        Node* head;

        LinkedList(){
            head = nullptr;
        }
        void insertNodeAtHead(int datas){
            Node* newNode = new Node(datas);
            newNode->next = head;
            head = newNode;
        }
        void displayList(){
            Node* temp = head;

            while(temp != nullptr){
                temp->display();
                temp = temp->next;
            }
        }
};
int main(){
    LinkedList list;
    list.insertNodeAtHead(10);
    list.insertNodeAtHead(20);
    list.insertNodeAtHead(30);
    list.insertNodeAtHead(40);

    list.displayList();

return 0;
}